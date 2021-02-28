#include <iostream>
#include <string>

int main()
{
	int a, b;
	std::cout << "Enter 2 ints for A and B: " << std::endl;
	std::cin >> a >> b;
	std::cout << a + b << std::endl;
	
	float price = 12.75f;
	std::cout << "The price is: £" << price << std::endl;

	//User defined variables
	enum days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	days today = Monday;

	//reorder enum from default
	//enum days { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday };
	//only monday=1 is needed because if it is not specified it i++ from the previous specified number

	typedef int marks;
	marks mark1 = 99;
	if (mark1 > 60 && mark1 <= 100)
	{
		std::cout << "You passed!" << std::endl;
	}
	//switch case
	char grade = 'A';
	switch (grade)
	{
	case 'A': std::cout << "You got an A" << std::endl;
	case 'B': std::cout << "You got a B" << std::endl;
	default: std::cout << "well done for trying" << std::endl;
	}


		system("PAUSE");
		return 0;
}