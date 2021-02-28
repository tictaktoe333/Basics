#include<iostream>
int main() {

	//Arrays

	int A[3] = { 1,2,3 };
	std::cout << A[0] << std::endl;
	int dyn[] = { 1,2,3,4,5,6 }; //the array fits the initialised size
	int five[5] = { 5,4 }; //the remainder of the array will be filled with 0: {5,4,0,0,0}

	for (int x : A) //declaring x for the elements in A
	{
		std::cout << x << std::endl;
	} //after this for loop x will no longer be defined

	//you can put an int in a float
	float F[4] = { 2.5f, 3.6f, 3, 5 };
	for (int x : F) //if you print a float through an int 2.5 becomes 2
	{
		std::cout << x << std::endl;
	}

	for (auto x : F) //auto will automatically evaluate the correct data type
	{
		std::cout << x << std::endl;
	}
	char abc[4] = { 'A', 'B', 'C', 'D' };
	for (int x : F) //printing a char as an int will convert to ascii for you.
	{
		std::cout << x << std::endl;
	}

	for (int i = 0; i < 4; i++) // you can also use auto type in for loop
	{
		std::cout << abc[i] << std::endl;
	}

	//multidiamension arr
	int ddd[2][3] = { {1, 2, 3}, {4, 5, 6} };     //2 rows, 3 columns
	// or this ::::            ddd = { 1,2,3,4,5,6 };

	system("PAUSE");
	return 0;

}
