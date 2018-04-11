#include<iostream>
#include "LinkedList.h"

int main()
{	
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

	return 0;
}
