#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <stdexcept>

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

// Contructor
template <class T> LinkedList<T>::LinkedList() {}

// Destructor
template <class T> LinkedList<T>::~LinkedList() {}

// Copy constructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
    typename std::list<T>::const_iterator it = other.theList.begin();
    while (it != other.theList.end())
        this->theList.push_back(*it++);
}

// Add method
template <class T>
void LinkedList<T>::add(T element)  { this->theList.push_back(element); }

// Size method
template <class T>
int LinkedList<T>::size() const
{
  return theList.size();
}

// Get method
template <class T>
T LinkedList<T>::get(int index) const
{
  if (index < theList.size())
  {
    typename std::list<T>::const_iterator it = theList.begin(); // Initialize const iterator
    // Iterate through theList to find correct index
    for (int i = 0; i < index; i++)
    {
      it++;
    }
    return *it;
  }
  return null;
}

// Remove method
template <class T>
T LinkedList<T>::remove(int index)
{
    if (theList.size() and (index < 0 or index >= this->theList.size()))
        throw std::invalid_argument("Invalid index %d", index);
    else if (theList.size() == 0)
        throw std::invalid_argument("Invalid attempt to retrieve from empty list");
    else
    {
        typename std::list<T>::iterator it = this->theList.begin();
        for (int i = 0; i <= index; i++, it++);
        return this->theList.remove(it);
    }
}

// toArray method
template <class T>
std::vector<T> toArray()
{

}


#endif
