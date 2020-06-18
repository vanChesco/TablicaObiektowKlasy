#include <iostream>
#include <vector>

class Channel
{
	static unsigned int			chCount;
	std::vector<double>			data;

public:
	Channel(const int dlugosc);
	~Channel();
};

unsigned int Channel::chCount = 0;

Channel::Channel(const int dlugosc) : data(dlugosc) 
{
	chCount++;
	std::cout << "\nUtworzono " << chCount << " kanal\n";
}

Channel::~Channel()
{
	std::cout << "\nUsunieto " << chCount << " kanal\n";
	chCount--;
}

// ============================================

class Buffer
{
public:
	static unsigned int		bCount;
	int						dlugosc{ 48000 };
	int						ilosc{ 5 };
	std::vector<Channel>	kanal;

	Buffer();
	~Buffer();
};

unsigned int Buffer::bCount = 0;

Buffer::Buffer() : kanal(ilosc, Channel(dlugosc))
{
	bCount++;
	std::cout << "\nUtworzono " << bCount << " bufor\n";
}

Buffer::~Buffer()
{
	std::cout << "\nUsunieto " << bCount << " bufor\n";
	bCount--;
}

//==============================================


int main()
{
	Buffer buforek;

	//std::vector<int> gg(48, 2);
   // gg(48, 2);
	//for (int i = 0; i < 48; i++) std::cout << i << " | " << gg[i] << '\n';
}

//#include <iostream>
//#include <vector>
//
//class Channel
//{
//    std::vector<double> data;
//
//public:
//    Channel(const int dlugosc);
//};
//
//Channel::Channel(const int dlugosc) : data(dlugosc) {}
//
//
//// ============================================
//
//class Buffer
//{
//public:
//    int		dlugosc{ 48000 };
//    int		ilosc{ 5 };
//    std::vector<Channel> kanal;
//
//    Buffer();
//};
//
//Buffer::Buffer()
//{
//    kanal.reserve(ilosc);
//    for (int i = 0; i < ilosc; i++)
//    {
//        kanal.emplace_back(dlugosc);
//    }
//}
//
////==============================================
//
//
//int main()
//{
//    Buffer buforek;
//}



//#include <iostream>
//
////=====================================================
//
//class Channel
//{
//	double* data;
//
//public:
//	Channel();
//};
//
//Channel::Channel() : data(new double[dlugosc]) {};
//
//
//// ============================================
//
//class Buffer
//{
//public:
//	int		dlugosc{ 48000 };
//	int		ilosc{ 5 };
//	Channel*	kanal;
//
//	Buffer();
//};
//
//Buffer::Buffer() : kanal(new Channel[ilosc]) {};
//
////==============================================
//
//
//int main()
//{
//	Buffer buforek;
//}
