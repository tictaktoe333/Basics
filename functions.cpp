#include<iostream>
#include<string>

//io functions (like cin, cout) should be performed in main() as best practise.


//function overloading 
int min(int a, int b)
{
	static int s = 0; 
	/*
	Static var remain always in the memory (like global) but they are only accessible by this function
	Static vars are not deleted when the function finishes
	*/
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

float min(float a, float b) //you can overload based on param type or number of params but not the return type
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

bool isChicken(std::string c)
{
	return c == "Chicken" || c == "chicken";

}


//Templates
template<class T>
T max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//pass by address
int sum(int *a, int *b)
{
	return *a + *b;

}

int c = 99;

void main()
{
	int x = 10;
	int y = 20;

	std::cout << "The bigger number is: " << max(x, y) << std::endl;
	std::cout << "The smaller number is:" << min(x, y) << std::endl;
	std::cout << "Sum is: " << sum(&x, &y) << std::endl;

	//variable scope
	int c = 10;
	{
		int c = 20;
		{
			int c = 30;
			std::cout << c << std::endl; //c=30
		}
		std::cout << c << std::endl; //c=20

	}
	std::cout << c << std::endl; //c=10
	std::cout << ::c << std::endl; //this is if you want to access global variable c

	std::string chick = "Chicken";

	//function pointers
	bool(*fp)(std::string); //declaration of function pointer
	fp = isChicken; //init func pointer
	std::cout << (*fp)(chick) << std::endl; //call func pointer


/*
Arguement/parameter passing
1. Pass by value
2. Pass by address - using & and *
3. Call by reference - using & only 

No complex code should be used in call by reference 


Variable returning
1. Return by value
2. Return by address
3. Return by reference - function on left of =      fun()=25

Local vs Global variables
Variable outside of all functions = Global
Variable in function (also applies to main()) = Local

Memory allocation of global is a subsection of the CODE section
Local is in stack

variables can be overloaded with different values depending on the level of the function

*/