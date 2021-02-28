#include<string>
#include<iostream>
#define PI 3.14 //define preprocessor for global statements
#define c cout
#define SQUARE(x) (x*x)
#define MESSAGE(x) #x //hash says to insert the var in double quotes


#ifndef HACKER //if not defined
#define HACKER 7334
#endif // !HACKER

//namespaces
//you can put these namespace functions in a header file and still use them in the main program

namespace first
{
	void func()
	{
		std::cout << "First" << std::endl;
	}
}

namespace second
{
	void func()
	{
		std::cout << "Second" << std::endl;
	}
}


int main()
{
	using namespace std;
	c << PI << endl;
	c << SQUARE(5) << endl;
	c << MESSAGE(This is my message) << endl;
	first::func();
	second::func();
}