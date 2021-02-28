#include<iostream>
#include<string>

using namespace std;

/*
Constructors
Base class constructor is run first then the derived class constructor - if number of arguements is the same
*/

class rectangle
{
private:
	int length, width;

public:
	void setLength(int l)
	{
		length = l;
	}

	void setWidth(int w)
	{
		width = w;
	}

	int getLength()
	{
		return length;
	}

	int getWidth()
	{
		return width;
	}


	int area()
	{
		return length * width;
	}

	int parimeter()
	{
		return 2 * (width + length);
	}


	rectangle(int l = 10, int w = 5)
	{
		cout << "Base / rectangle constructor" << endl;
		setLength(l);
		setWidth(w);
	}

	rectangle(rectangle& r)
	{
		length = r.getLength();
		width = r.getWidth();
	}

};

class cube : public rectangle //cube is a class of rectangle and inherits all attributes
{
private:
	int depth;
public:
	void setDepth(int d)
	{
		depth = d;
	}

	int getDepth()
	{
		return depth;
	}

	int volume()
	{
		return getLength() * getWidth() * depth;
	}

	cube(int l = 10, int w = 5, int d = 2) : rectangle(l, w) //this sends l and w to the base class constructor
		//because the base class only takes 2 arguements so is not called unless we pass it something
		//if this constructor only has 2 args then the base class would run first and then the derived class
	{
		cout << "Cube constructor" << endl;
		setLength(l);
		setWidth(w);
		setDepth(d);
	}

};


void main()
{
	cube c(1, 2, 3);

	//Base Class pointer Derived class obj
	//when you create a base class pointer you can point to a derived class but can only use base functions
	rectangle* p;
	p = new cube();
	p->area();
	//p->volume();

}