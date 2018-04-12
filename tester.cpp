// Melissa Gu and Aalok Sathe

#include <iostream>
#include "LinkedList.h"
#include <string>
#include <iomanip>

int main()
{
    // Info message
    std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Written by" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::setw(20) << std::right << "Melissa Gu," << std::endl
	          << std::setw(20) << std::right << "Aalok Sathe" << std::endl;


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
	std::cout << std::setw(20) << std::right << "l.size() = " << l.size()
	          << std::setw(20) << std::right << "[Expected: 0]" << std::endl;
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
	std::cout << std::setw(20) << std::right << "l.size() = " << l.size()
	          << std::setw(20) << std::right << "[Expected: 3]" << std::endl;
	std::cout << std::setw(20) << std::right << "l.get(2) = " << l.get(2)
	          << std::setw(20) << std::right << "[Expected: 42]" << std::endl;
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
	std::cout << std::setw(20) << std::right << "l.remove(2) = " << l.remove(2)
	          << std::setw(20) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::setw(20) << std::right << "l.size() = " << l.size()
	          << std::setw(20) << std::right << "[Expected: 2]"  << std::endl;
	std::cout << std::endl;
	
	// Testing `remove' on empty list
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove on an empty list"                       << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "LinkedList<int> l_empty;" << std::endl;
	LinkedList<int> l_empty;
	try
	{
	    std::cout << "l_empty.remove(3);" << std::endl;
	    l_empty.remove(3);
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
	
	// Testing `remove' using invalid index
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing remove using invalid index"                    << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "l.remove(3);" << std::endl;
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
	std::cout << "LinkedList<int> copyList(l);"             << std::endl << std::endl;
	LinkedList<int> copyList(l);
	std::cout << std::setw(20) << std::right << "copyList.size() = " << copyList.size()
	          << std::setw(20) << std::right << "[Expected: 3]" << std::endl;
	std::cout << std::setw(20) << std::right << "copyList.get(2) = " << copyList.get(2)
	          << std::setw(20) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::endl;

	// Testing toArray
	std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing toArray" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "std::vector<int> arr = l.toArray();"      << std::endl << std::endl;
	std::vector<int> arr = l.toArray();
	std::cout << std::setw(20) << std::right << "arr[2] = " << arr[2]
	          << std::setw(20) << std::right << "[Expected: 42]" << std::endl;
	std::cout << std::endl;

    // Testing operator+=
    std::cout << std::endl
	          << "-----------------------------------------------------" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Testing overloaded operator+="                         << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "((((l += 32) += 64) += 128) += 256);"             << std::endl << std::endl;
	((((l += 32) += 64) += 128) += 256);
    std::cout << std::setw(20) << std::right << "l.size() = " << l.size()
	          << std::setw(20) << std::right << "[Expected: 7]" << std::endl;
	std::cout << std::setw(20) << std::right << "l.get(5) = " << l.get(5)
	          << std::setw(20) << std::right << "[Expected: 128]" << std::endl;

	return 0;
}
