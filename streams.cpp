#include <iostream>
#include<fstream>
#include<string>
#include<ios>

#define ios std::ios_base

/*
read and write binary files with this mode:
ios::binary
and there are options for read and write
read()
write()

*/


class student
{
public:
	std::string name;
	int rollnum;
	std::string branch;

	friend std::ofstream& operator<<(std::ofstream& ofs, student& s);
	friend std::ifstream& operator>>(std::ifstream& ifs, student& s);
};

std::ofstream& operator<<(std::ofstream& ofs, student& s)
{
	ofs << s.name << std::endl;
	ofs << s.rollnum << std::endl;
	ofs << s.branch << std::endl;
	return ofs;
}

std::ifstream& operator>>(std::ifstream& ifs, student& s)
{
	ifs >> s.name >> s.rollnum >> s.branch;
	return ifs;
}

int main()
{
	std::ofstream outfile("test.txt"); //equivilent of >
	outfile << "Hello" << std::endl;
	outfile << 112233 << std::endl;
	outfile.close();

	std::ofstream outfile("test.txt", ios::app); //equivilent of append
	outfile << "I have appended this to a file" << std::endl;
	outfile.close();

	//std::ofstream outfile("test.txt", ios::trunc); //equivilent of truncate
	//don't know how this works yet

	std::ifstream infile;
	infile.open("test.txt"); //ios::in ios::out are flags for read write permissions

	if (!infile) std::cout << "The file cannot be opened." << std::endl; //check the file opened correctly
	if (!infile.is_open()) std::cout << "The file cannot be opened." << std::endl; //check the file opened correctly another way is_open() returns bool
	std::string s1, s2;
	int x;

	infile >> s1;
	infile >> x;
	infile >> s2;
	//you need to know the order of the file in order for you to prepare the correct variables to read to
	if (infile.eof()) std::cout << "This is the end of the file. Goodbye." << std::endl; //eof() checks if end of file and returns bool
	infile.close();

	student st1;

	std::ifstream ifs("Student.txt");
	std::cout << "Name: " << st1.name << std::endl;
	std::cout << "Roll: " << st1.rollnum << std::endl;
	std::cout << "Branch: " << st1.branch << std::endl;
	ifs.close();






	return 0;
}