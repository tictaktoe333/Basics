#include<iostream>

main()
{
	int x = 10;
	int* p; //declaration of an address variable
	p = &x; //init a pointer variable

	//think of & as "address of"

	std::cout << *p; // this is called de-referrencing
	//*p == x
	// *p of a pointer variable is the value of the variable it is pointing at

	//STACK

	int num[5] = { 1,2,3,4,5 }; // this is inside the stack

	//HEAP

	int* numArrayP = new int[5]; //the new keyword allocates in the heap
	int* numP = new int = 60;

	//Memory is automatically managed in the stack but has to be reallocated in the heap

	delete[]numArrayP; //you have to put the []before the variable if is is an array

	delete numP;

	//delete deallocates memory in the heap
	//after you have deleted you can point the pointer to NULL, not before otherwise the heap memory will be forever allocated (this is a MEMORY LEAK)
	numP = NULL;
	numArrayP = NULL;

	int* P = new int[5]; //the new keyword allocates in the heap

	//P++ would not move to the next value, it moves to the next memory location in the array
	//The number of bytes it moves forward depends on the data type

	//P=P+2 would move the pointer forward by 2 elements





	system("PAUSE");
	return 0;
}