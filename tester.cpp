#include<iostream>
#include "LinkedList.h"
#include<string>

int main()
{
	// Constructor
	std::cout << "LinkedList<int> l;" << std::endl<< std::endl;
	LinkedList<int> l;

	// Testing Size
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing size" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.size() = " << l.size() << " [Expected: 0]" << std::endl;
	std::cout << std::endl;

	// Testing get on empty list
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing get on empty list" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.get(2)" << std::endl;
	std::cout << l.get(2) << std::endl;
	std::cout << std::endl;

	// Testing add
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing add" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.add(3);" << std::endl;
	std::cout << "l.add(1);" << std::endl;
	std::cout << "l.add(42);" << std::endl;
	l.add(3);
	l.add(1);
	l.add(42);
	std::cout << "l.size() = " << l.size() << " [Expected: 3]" << std::endl;
	std::cout << "l.get(2) = " << l.get(2) << " [Expected: 42]" << std::endl;
	std::cout << std::endl;

	// Testing remove
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;

	// Testing Copy constructor
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing Copy Constructor" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "LinkedList<int> copyList(l);" << std::endl;
	LinkedList<int> copyList(l);
	std::cout << "copyList.size() = " << copyList.size() << " [Expected: 3]" << std::endl;
	std::cout << "copyList.get(2) = " << copyList.get(2) << " [Expected: 42]" << std::endl;
	std::cout << std::endl;

	// Testing toArray
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing toArray" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "std::vector<int> arr = l.toArray();" << std::endl;
	std::vector<int> arr = l.toArray();
	std::cout << "arr[2] = " << arr[2] << " [Expected: 42]" << std::endl;


	return 0;
}
