#include<iostream>
#include<string>
using namespace std;

class myException :public exception //there is a std::exception
{
public:
	char* what() //this is built into the exception std
	{
		return "myException";
	}
	
};


int main()
{
	int b = 0;
	try
	{
		if (b == 0)
		{
			b = 0 / b;
			throw 101;//101 is the error code passed to catch, you can thrown any type of data
			cout << "Complete";
		}
	}
	catch(int e)
	{
		cout << "ERROR code " << e << endl;
	}
}