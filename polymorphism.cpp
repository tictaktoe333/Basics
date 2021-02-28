#include<iostream>
#include<string>
using namespace std;

class parent
{
public:
	virtual void display()
	{
		cout << "Parent display" << endl;
	}
};

class child : public parent
{
public:
	void display() //derived func overrides parent func
	{
		cout << "Child display" << endl;
	}
};

class shape
{
public:
	int sides = 1;
	virtual void draw() = 0; //this is a pure virtual function 
	virtual ~shape()
	{
		cout << "shape is destroyed" << endl;
	}
};

/*
Pure virtual functions are used when the base class should be used as a template but the class itself shouldn't be called

2 parts
"virtual" at the start
"=0" at the end

If derived classes do not fill all pure virtual functions then they are incomplete and become abstract

A class containing some concrete and some pure virtual func is an "abstract class"
A class containing all pure virtual functions in them is an "absract class" that is also an "interface"

you can only have a pointer of an abstract class not a obj

*/

class square : public shape
{
public:
	int sides = 2;
	void draw()
	{
		cout << "This is a square " << endl;
	}

	~square()
	{
		cout << "square is destroyed" << endl;
	}
};


int main()
{
	child c;
	parent p;

	p.display(); //display parent func
	c.display(); //display child func

	parent* p2 = new child();
	p2->display(); //normally this would display the parent func, but because it is a virtual func the child is displayed


	shape* p3 = new square();

	delete p3; //normally derived then base destructor is called (shape) because the destructor goes by the init type

	//if you want the derived class destructor to also be called you like what happens when it is not a pointer.
	//you need to make it a "virtual" destructor in the prototype


	return 0;
}