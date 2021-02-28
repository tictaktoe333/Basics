#include<string>
#include<iostream>

//manipulators format streams

using namespace std;

int main()
{
	cout << hex << 163; //output A3
	cout << oct << 163;
	cout << dec << 163;
	cout << fixed << 134.731;
	cout << scientific << 12543.544;
	cout << set(10) << "Hello" << endl;
	cout << left << "This is on the left" << endl;
	cout << right << "This is right-aligned" << endl;

}