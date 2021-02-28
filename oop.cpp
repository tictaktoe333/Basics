#include <iostream>
#include <string>
/*
1. Abstraction - shows only the necessary attributes, using the class without worrying about the workings
2. Encapsulation - combines data and func() in class

Hiding data in encapsulation is not security but it does protect the data from mishandling
Data is set to private
Func() set to public

3. Inhertiance - Children inherit parents attributes
4. Polymorphism - different classes can be used with the same interface

By default everything in a class is private

1. Accessor eg. getLength
2. Mutator eg. setLength

*/

/*
CONSTRUCTORS
Same name as class
There can be a constructor of each type (not default)- this is constructor overloading
Because you can overload constructors you can have constructors with different numbers of params for example

1. Default constructor / built-in type
2. Non-parameterized constructor / sometimes called default - no params (empty brackets)
3. Parameterized contructor - takes params
4. Copy constructor

when you use copy constructors make sure to use heap if you want to create new variables rather than pointers
t = new int t[a]

These are 2 types of copy constructor:
Shallow copy constructor
Deep copy constructor
*/

/*
TYPES O FUNCTIONS FOR A CLASS
If you write all of the function types this is a "perfect class"

3 constructors: non-param, param, copy
mutators void setXXX
accessors int getXXX
facilitators eg. area(), parimeter()
enquiry - true/false eg int isSquare
destructor - ~rectangle();
*/


class rectangle
{
	//private:    this is here by default and does not have to be specified
	int length, width; //by default variables are private

public:
	int area()
	{
		return length * width;
	}

	int parimeter()
	{
		return 2 * (width + length);
	}

	void setLength(int l)
	{
		length = l;
	}

	void setWidth(int w)
	{
		width = w;
	}

	//constructors
	/*

	rectangle()
	{
		length = 1;
		width = 1;
	}

	*/
	rectangle(int l = 10, int w = 5) //passing default values incase only one value is parsed
	{ //this therefore also works as the no-param constructor
		setLength(l);
		setWidth(w);
	}

	rectangle(rectangle& r)
	{
		length = r.length;
		width = r.width;
	}
	~rectangle() //destructor
	{
		std::cout << "Rectangle destroyed!" << std::endl;
	}

}; //needs a semicolon at the end of a class

/*
See below
SCOPE RESOLUTION
You can just write the prototype of the function in the class and then write the body outside of the class

When the machine code is generated the function stays separate
compared to when the function is written inside the class. Then this gets copied into main and is called an
In-line function

another way to write an inline function is when you specify the prototype in the class add "inline" beforehand
eg.
inline void func2();

It is good practise to write the function outside using scope resolution
*/


class square
{
public:
	int length;

	int area();
	int parimeter();
};



int square::area()
{
	return length * length;
}

int square::parimeter()
{
	return 2 * length;
}

//------------------------------

/*
"this" refers to the member of the current object
*/

class chicken
{
private:
	std::string name;

public:
	chicken(std::string name)
	{
		this->name = name; //the "this -> name" is referring to the objs private attribute "name"
	}
};

void main()
{
	rectangle r1, r2;
	r1.setLength(10);
	r1.setWidth(5);

	r2.setWidth(20);
	r2.setLength(40);

	std::cout << r1.parimeter() << std::endl;
	std::cout << r2.area() << std::endl;

	r2.~rectangle(); //destructor is called

	square s1;
	s1.length = 10;

	//using object pointers in  stack
	square* ps; //declare object pointer
	square s2;
	ps = &s2; //init object pointer in stack
	ps->length = 20;                        //accessing var using object pointer
	std::cout << ps->area() << std::endl; //accessing func() using object pointer

	//using obj pointer in heap
	square* ps2;
	ps2 = new square; //init object pointer in heap

	square* ps3 = new square(); //declare and init object pointer in one line in heap

	delete ps3; //destructor called for dynamic var using delete
}