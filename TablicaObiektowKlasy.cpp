#include <iostream>

class Channel;

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

class Channel
{
	double* data;

public:
	Channel();
};

Channel::Channel() : data(new double[dlugosc]) {};

//=====================================================

#include <iostream>

int main()
{
	Buffer buforek;
}
