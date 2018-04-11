#include<iostream>
#include "LinkedList.h"

int main()
{	
    // Constructor
	LinkedList<int> l;
	l.add(3);
	l.add(1);
	l.add(42);
	
	// Size method test
	std::cout << "l.size() = " << l.size() << "[3]" << std::endl;
	
	
	
	
	// Copy constructor
	LinkedList<int> copyList(l);
	std::cout << "copyList.size() = " << copyList.size() << "[3]" << std::endl;
	
		
	
	// 
	
	return 0;
}
