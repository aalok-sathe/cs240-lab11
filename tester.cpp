#include<iostream>
#include "LinkedList.h"

int main()
{	
    // Constructor
	LinkedList<int> l;


	// Testing size
	std::cout << "Testing size" << std::endl;
	std::cout << l.size() << "[Expected: 0]" << std::endl;
	std::cout << std::endl;

	// Testing get on empty list
	std::cout << "Testing get on empty list" << std::endl;
	std::cout << l.get(2) << "[Expected: ]" << std::endl;
	std::cout << std::endl;

	//Testing add
	std::cout << "Testing add" << std::endl;
	l.add(0);
	std::cout << l.size() << "[Expected: 1]" << std::endl;
	std::cout << l.get(2) << "[Expected: ]" << std::endl;
	std::cout << std::endl;


	l.add(3);
	l.add(1);
	l.add(42);
	
	// Size method test
	std::cout << "l.size() = " << l.size() << "[3]" << std::endl;
	
	
	
	
	// Copy constructor
	LinkedList<int> copyList(l);
	std::cout << "copyList.size() = " << copyList.size() << "[3]" << std::endl;
	
		
	std::cout << l.
	
	// 
	

	return 0;
}
