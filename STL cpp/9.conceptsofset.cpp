#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set is a container that stores unique elements in a sorted manner
    // set is implemented using a balanced binary search tree (usually a red-black tree)
    // set provides the following member functions:
    // insert() - adds an element to the set
    // erase() - removes an element from the set
    // find() - returns an iterator to the element if it is found, otherwise returns an iterator to the end of the set
    // count() - returns the number of elements in the set that are equal to a given value (0 or 1 since set stores unique elements)
    // size() - returns the number of elements in the set
    // empty() - returns true if the set is empty, false otherwise
    // clear() - removes all elements from the set
    // set also provides the following member functions for swapping and copying:
    // swap() - swaps the contents of two sets
    // copy constructor - creates a new set as a copy of an existing set
    // move constructor - creates a new set by moving the contents of an existing set
    // complexity of set operations:
    // insert() - O(log n)
    // erase() - O(log n)
    // find() - O(log n)
    // count() - O(log n)
    // size() - O(1)
    // empty() - O(1)
    // clear() - O(n)
    // swap() - O(1)
    // copy constructor - O(n)
    // move constructor - O(1)
    // example of set
    set<int> s;
    s.insert(1); // 1 is added to the set
    s.emplace(2); // 2 is added to the set
    s.insert(3); // 3 is added to the set
    s.insert
    cout << s.size() << endl; // 3
    cout << s.count(20) << endl; // 1
    cout << s.count(40) << endl; // 0
    set<int>::iterator it = s.find(20); // find the element 20 in the set
    if(it != s.end()) {
        cout << "Element found: " << *it << endl; // Element found: 20
    } else {
        cout << "Element not found" << endl;
    }

}