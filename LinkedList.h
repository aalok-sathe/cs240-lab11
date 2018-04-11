#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>

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
    typename std::list<T>::iterator it = other.theList.begin();
    while (it != other.theList.end())
        this->theList.push_back(*it++);
}

// Size method
template <class T> 
int LinkedList<T>::size()
{
  return theList.size();
}

// Add method
template <class T>
void LinkedList<T>::add(T element)  { this->theList.push_back(element); }




#endif
