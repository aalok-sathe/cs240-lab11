// Melissa Gu and Aalok Sathe

#include <iostream>
#include "LinkedList.h"
#include <string>
#include <iomanip>

int main()
{
	// Constructor
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Calling constructor" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "LinkedList<int> l;" << std::endl;
	LinkedList<int> l;
	std::cout << std::endl;

	// Testing `size'
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing size" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.size() = " << l.size() << std::setw(32) << std::right << "[Expected: 0]" << std::endl;
	std::cout << std::endl;

	// Testing `get' on empty list
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing get on empty list" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.get(2)" << std::endl;
	try {
		std::cout << l.get(2) << std::endl;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Testing `add'
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing add" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.add(3);" << std::endl;
	std::cout << "l.add(1);" << std::endl;
	std::cout << "l.add(42);" << std::endl;
	l.add(3);
	l.add(1);
	l.add(42);
	std::cout << "l.size() = " << l.size() << std::setw(32) << std::right << "[Expected: 3]" << std::endl;
	std::cout << "l.get(2) = " << l.get(2) << std::setw(32) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::endl;

	// Testing invalid index for `get'
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing invalid index for get"                         << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.get(5)" << std::endl;
	try
	{
		std::cout << l.get(5) << std::endl;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Testing `remove'
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove"                                        << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "l.remove(2) = " << l.remove(2) << std::setw(32) << std::right << "[Expected: 42]" << std::endl;
	std::cout << "l.size() = "    << l.size()    << std::setw(32) << std::right << "[Expected: 2]"  << std::endl;
	std::cout << std::endl;
	
	// Testing `remove' using invalid index
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove using invalid index"                    << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	try
	{
	    l.remove(3);
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Re-insert removed element for more tests
    l.add(42);

	// Testing Copy constructor
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing Copy Constructor" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "LinkedList<int> copyList(l);" << std::endl;
	LinkedList<int> copyList(l);
	std::cout << "copyList.size() = " << copyList.size() << std::setw(32) << std::right << "[Expected: 3]" << std::endl;
	std::cout << "copyList.get(2) = " << copyList.get(2) << std::setw(32) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::endl;

	// Testing toArray
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing toArray" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "std::vector<int> arr = l.toArray();" << std::endl;
	std::vector<int> arr = l.toArray();
	std::cout << "arr[2] = " << arr[2] << std::setw(32) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::endl;

    // Testing operator+=
    std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove using invalid index"                    << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;

	return 0;
}
