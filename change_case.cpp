#include <iostream>
#include <string>

void main()
{
	//change case
	char letter = 'a';
	char letter2 = 'B';
	if (letter >= 97 && letter <= 122) //check is lower
	{
		letter -= 32; //lower to uppper
	}


	if (letter2 >= 65 && letter2 <= 90) //checking it is upper
	{
		letter2 += 32; //upper to lower
	}

}