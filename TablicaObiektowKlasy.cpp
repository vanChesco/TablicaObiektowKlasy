#include <iostream>

//=====================================================

class Channel
{
	double* data;

public:
	Channel();
};

Channel::Channel() : data(new double[dlugosc]) {};


// ============================================

class Buffer
{
public:
	int		dlugosc{ 48000 };
	int		ilosc{ 5 };
	Channel*	kanal;

	Buffer();
};

Buffer::Buffer() : kanal(new Channel[ilosc]) {};

//==============================================


int main()
{
	Buffer buforek;
}
