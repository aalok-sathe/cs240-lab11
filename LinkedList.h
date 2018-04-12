// Melissa Gu and Aalok Sathe

#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <stdexcept>
#include <sstream>
#include <string>

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;
     void add(T element);

     T get(int index) const;
     T remove(int index); 

     std::vector<T> toArray() const;

     LinkedList<T>& operator+=( const T& item );
};

// Constructor
template <class T> LinkedList<T>::LinkedList()  {}

// Destructor
template <class T> LinkedList<T>::~LinkedList() {}

// Copy constructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
    // Defines iterator and copies each item from `other' list
    typename std::list<T>::const_iterator it = other.theList.begin();
    while (it != other.theList.end())
        this->theList.push_back(*it++);
}

// Add method
template <class T>
void LinkedList<T>::add(T element)  { this->theList.push_back(element); }

// Size method
template <class T>
int LinkedList<T>::size() const     { return theList.size(); }

// Get method
template <class T>
T LinkedList<T>::get(int index) const
{
  if (theList.size() == 0)
  {
    throw std::invalid_argument("Invalid attempt to retrieve from empty list.");
  }
  if (index >= theList.size() || index < 0)
  {
    std::stringstream ss;
    ss << "Invalid index " << index << "; list size: " << theList.size();
    std::string str = ss.str();
    throw std::invalid_argument(str.c_str());
  }
  typename std::list<T>::const_iterator it = theList.begin(); // Initialize const iterator
  // Iterate through theList to find correct index
  for (int i = 0; i < index; i++)
  {
    it++;
  }
  return *it;
}

// Remove method
template <class T>
T LinkedList<T>::remove(int index)
{
    // Check boundary conditions for errors
    if (theList.size() == 0)
        throw std::invalid_argument("Invalid attempt to retrieve from empty list");
    else if (index < 0 or index >= this->theList.size())
        {
            std::stringstream ss;
            ss << "Invalid index " << index << " in list of size " << theList.size();
            throw std::invalid_argument(ss.str().c_str());
        }
    else
    {
        // Define an iterator at the beginning, advance it by index, and remove
        typename std::list<T>::iterator it = this->theList.begin();
        std::advance(it,index);
        // Initialize temporary variable to be returned
        T returnable = *it;
        // erase() returns reference to next element, so we can't return that
        this->theList.erase(it);
        // Return temporary variable
        return returnable;
    }
}

// toArray method
template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
  std::vector<T> arr;
  typename std::list<T>::const_iterator it = theList.begin();
  while (it != theList.end())
  {
    arr.push_back(*it);
    it++;
  }
  return arr;
}

// operator+= method
template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item)
{
    // Add item to underlying list and return reference to object
    this->theList.push_back(item);
    return *this;
}

#endif
