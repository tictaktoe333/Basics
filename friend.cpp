#include<iostream>
#include<string>
using namespace std;


class test
{
private:
	int a;
protected:
	int b;
public:
	int c;

	static int count; //static members mean that this variable only has one value across all variables

	static int getCount() //only static variables allowed in static function
	{
		return count;
	}

	friend void func();

	test()
	{
		a = 1;
		b = 2;
		c = 3;
		count++; //therefore all variables can edit this static member
	}
};

void func()
{
	test t1, t2, t3;
	t1.a = 1;
	t1.b = 2;
	t1.c = 3;
	cout << "This func is not part of the class but can still acess the private and protected vars" << endl;
	cout << "This is a friend function" << endl;
	cout << "Look at its declaration in the class" << endl;
}

int test::count = 0; //global var with scope resolution of class.


int main()
{
	func();
	cout << t1.count << endl;
	cout << t2.count << endl;
	cout << test::count << endl; //public static variables can be accessed using class name scope resolution
	cout << test::getCount() << endl;
	cout << t1.getCount() << endl;
	return 0;
}