#include<iostream>

/*

ellipsis allow for a func to have variable number of args

the function must start with "n" which is an int containing the total number of args

Create a va_list obj
va_start containing the obj and n
iterate through the list using for 
create an va_arg in the loop passing list and int

after loop va_end the obj
return s

*/




int sum(int n, ...)//this is how you define it
{
	va_list list;
	__crt_va_start(list, n);
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = __crt_va_arg(list, int);
	}
	__crt_va_end(list);
	return s;
}

int main()
{
	std::cout << sum(3, 1, 2, 3) << std::endl;
	std::cout << sum(10, 7, 8, 89, 556, 54, 4, 2, 343, 2, 2) << std::endl;
	return 0;
}