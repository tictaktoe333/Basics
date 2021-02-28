#include <iostream>
#include <string>

/*
The only difference between struct and class is that a struct is public by default
class is private by default


*/


struct square
{
public:
	int length;
};

void main()
{
	square s;
	s.length = 10;
}