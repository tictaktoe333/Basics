#include<iostream>
#include<string>

using namespace std;

//lambda syntax is used for nameless functions like in python


int main()
{
	[]() {cout << "Hello" << endl; }();

	[](int x, int y) {cout << "Sum is" << x + y << endl; }(10, 5); //output 15
	int z = [](int x, int y) {return x + y; }(10, 5); //z = 15 -assign result to var

	int a = 1;
	int b = 2;

	[a, b]() {cout << a << " " << b << endl; }();//pass in outside vars
	[&a, &b]() {cout << ++a << " " << ++b << endl; }();//use reference to modify outside vars
	[&]() {cout << ++a << " " << ++b << endl; }();//This allows us to access the whole scope

	return 0;

}