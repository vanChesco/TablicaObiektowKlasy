#include <iostream>


class Channel
{
	double* data;

public:
	Channel();
};

Channel::Channel() : data(new double[4]) {};

//=====================================================
// ============================================

class Buffer
{
public:
	int			dlugosc;
	int			ilosc;
	Channel*	B;

	Buffer();
};

Buffer::Buffer() : B(new Channel[ilosc]) {};

//==============================================



#include <iostream>

int main()
{
	Buffer buforek;
}
