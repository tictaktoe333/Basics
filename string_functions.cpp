#include<iostream>
#include<string>
int main()
{
	std::string name;
	std::cout << "Enter your name:   ";
	std::getline(std::cin, name); //declared in the string header
	std::cout << name << std::endl;
	char* s;
	std::cout << "Enter a str you want to know the len of: ";
	std::cin >> s;

	std::cout << "Your string is " << strlen(s) << " many chars long" << std::endl;
	//strlen only works for char pointer arrays not strings	
	std::string name2 = "Bob";

	//for strings you can use.
	std::cout << name.length() << std::endl;

	//other str functions include
	std::cout << name.size() << std::endl; //same as length
	std::cout << name.capacity() << std::endl;
	name.resize(30);
	std::cout << name.max_size() << std::endl;
	name.clear();
	name.erase(); // same as clear
	std::cout << name.empty() << std::endl; // bool
	name.append("Bob");
	name.insert(3, "ski", 2); //inserts before the index, the 2 takes the first 2 char of ski
	name.replace(3, 5, "ski"); //replaces the index and 5 chars including the index with the string
	name.push_back('s');//insert single char at the end of a string
	name.pop_back();//pop end char
	name.swap(name2);
	char des[10];
	name.copy(des, name.length()); //copy str name to new char arr called des
	//copy does not copy the null char 
	//add it on here
	des[name.length()] = '\0';

	name.find('s');
	name.find("Tom");
	name.rfind("Tom"); //start from the right side
	name.find_first_of('l'); //first occurance 
	name.find_last_of('l'); //last occurance
	name.substr(3, 4); //start and number of chars returned
	name.compare(name2); //ascii code compare if name > name2 is negative otherwise is positive. Equal size ascii is 0
	name.at(3); //return char at index == name[3]
	name.front(); //first Char
	name.back();
	name = name + name2; //cat with +

	//Iterators
	std::string::iterator it;

	name.begin();
	name.end();
	//Reverse iterator
	name.rbegin();
	name.rend();

	for (it = name.begin(); it != name.end(); it++)
	{
		std::cout << *it << std::endl;
	}

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

