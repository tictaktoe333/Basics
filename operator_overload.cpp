#include <iostream>
#include <string>

/*
How to overload the + operator to add square classes

use operator+
*/
class square
{
public:
	int length;

	int area();
	int parimeter();
	square operator+(square s);

	//friend square operator+(square s1, square s2); //declare friend oper proto



	//insertion operator overloading
	friend std::ostream& operator<<(std::ostream& o, square& s1);

};

square square::operator+(square s)
{
	square temp;
	temp.length = length + s.length;
	return temp;
}

int square::area()
{
	return length * length;
}

int square::parimeter()
{
	return 2 * length;
}

/*
//friend operator overloading
//friend op is not part of a class and the calc is done separately.
square operator+(square s1, square s2)
{
	square temp;
	temp.length = s1.length +s2.length;
	return temp;
}

*/

std::ostream& operator<<(std::ostream& o, square& s1)
{
	o << "This is a square, and its length is: " << s1.length;
	return o;
}


void main()
{
	square s1, s2, s3;
	s1.length = 10;
	s2.length = 20;
	s3 = s1 + s2;
}