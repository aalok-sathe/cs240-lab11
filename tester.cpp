#include<iostream>
#include "LinkedList.h"

int main()
{	
    // Constructor
	LinkedList<int> l;


	// Testing Size
	std::cout << "Testing size" << std::endl;
	std::cout << "l.size() = " << l.size() << "[0]" << std::endl;
	std::cout << std::endl;

	// Testing get on empty list
	std::cout << "Testing get on empty list" << std::endl;
	std::cout << "l.get(2)" << l.get(2) << "[NULL]" << std::endl;
	std::cout << std::endl;

	// Testing add
	std::cout << "Testing add" << std::endl;
	l.add(3);
	l.add(1);
	l.add(42);
	std::cout << "l.size() = " << l.size() << "[3]" << std::endl;
	std::cout << l.get(2) << "[1]" << std::endl;
	std::cout << std::endl;

	// Testing remove



	
	
	
	
	// Copy constructor
	LinkedList<int> copyList(l);
	std::cout << "copyList.size() = " << copyList.size() << "[3]" << std::endl;
	
		
	std::cout << l.
	
	// 
	

	return 0;
}
