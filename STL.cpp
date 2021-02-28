/*standard template lib

Contains 3 things
1. Algorithms - searching etc
2. Containers - Data structures that are in template form
3. Iterators - iterate through the containers

*/

#include<iostream>
#include<string>

#include<vector>
#include<map>

int main()
{
	/*
	Data Structures

	Array
	It is of fixed size
	*/
	int* A = new int[10];

	/*
	Some of this might be outdated


	vector - size-less array - you can insert from the end only
		push-back() //insert
		pop-back()
		insert()
		remove()
		size()
		empty()
	List - double linked list - can go in both directions, pointers to the previous and next elements
		Vector functions and
		push-front()
		pop-front()
		front()
		back()
	forward-list - single linked list - you can only go forward only has a pointer to the next node
	deque - a vector you can insert/remove from both sides
	priority_queue - max heap - always the largest element will be deleted - the order changes due to this
		push()
		pop()
		empty()
		size()
	stack - LIFO
		same operations as priority
	set - only unique elements and the order is not maintained
	multiset - orderless but allows duplicates
	map - storing <key:value> this uses a hash table
	multimap - duplicate keys are allowed but the same key-value pair is not allowed.
	*/

	std::vector<int> v = { 10,20,40,80 };
	for (int i : v)
		std::cout << i;

	std::vector<int>::iterator itr = v.begin(); //iterators are pointers and therefore use -> instead of  .
	for (v.begin(); itr != v.end(); itr++)
		std::cout << *itr;

	std::map<int, std::string> m;
	m.insert(std::pair<int, std::string>(1, "Tom"));
	m.insert(std::pair<int, std::string>(2, "Ron"));
	m.insert(std::pair<int, std::string>(3, "Bob"));

	std::map<int, std::string>::iterator mitr;
	for (mitr = m.begin(); mitr != m.end(); mitr++)
	{
		std::cout << mitr->first << " " << mitr->second << std::endl; //prinnts key:value pair
	}

	mitr = m.find(2); //find the value at key 2
	std::cout << mitr->second << std::endl; //iterators are pointers and therefore use -> instead of  .
}