
class test
{
	int x = 10;
	int y = 19;
public:
	test(int a, int b)
	{
		x = a;
		y = b;
	}

	test() :test(1, 1) //using one constructor in another delegating constructors
	{

	}

};


int main()
{
	test t;
	return 0;
}