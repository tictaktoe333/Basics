#include<iostream>
#include<string>

using namespace std;

/*
They auto deallocate heap memory when out of scope to stop memory leak


3 types of smart pointer
unique_ptr - one one ptr to an obj at a time
shared_ptr - more than one ptr per obj, with ref_counter use_count()
weak_ptr - shared ptr with no ref_counter
*/

class rectangle
{
public:
	int width = 0;
	int length = 0;

	float area()
	{
		return length * width;
	}

	rectangle(int w, int l)
	{
		int width = w;
		int length = l;
	}
};

void func1()
{
	unique_ptr<rectangle> p1(new rectangle(5,10));
	cout << p1->area();
	//the smart pointer created in this func will be auto delete at the end of the func
}



int main()
{
	func1();

	return 0;
}