#include<string>
#include<iostream>
#define CHICKEN 10 //define preprocessor for global statements

template <class T>
class stack
{
private:
	T s[10];
	int top;
public:
	void push(T x);
	void pop();

	void display() const //const here means that nothing inside the function should modify at runtime
	{
		cout << "This function is constant" << endl;
	}

	void func(const int& x) //this makes the arguement reference const
	{
		cout << x << endl;
	}

};

template <class T> //everytime there is a new func or class you need to specify if it is template and what class it is 
void stack<T>::push(T x)
{
	//push func using top++
}

template <class T>
void stack<T>::pop()
{
	//pop func using top--
}

using namespace std;



int main()
{

	int x = 1;
	int y = 3;

	const int CHICK = 5; //const consumes memory and should be used instead of #define when the identifier has a smaller scope
	int const CHICK2 = 2; //you can also write const this way around
	int* const ptr = &x; //putting * here allows you to lock a ptr to a memory address
	const int* const ptr2 = &y; //using 2 consts locks both the pointer target and the variable itself.


	stack<int> placeHolder; //This is how you use a Template class to use int vars
	stack<float> placeHolder2;


}