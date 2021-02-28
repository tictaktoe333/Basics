#include<iostream>
#include<string>

using namespace std;


class outer
{
	public:
		int a = 10;
		static int b;
		class inner
		{
		public:
			int x = 25;
			void display()
			{
				cout << b << endl; //nested classes can only access static variables from outer class
			}
		};

		inner i; //can be init after being defined 
		void func()
		{
			i.display(); //outer can use inner public func 
		}
};

int outer::b = 20;

int main()
{
	outer::inner i2;
	i2.display();
	return 0;
}