#include<bits/stdc++.h>
using namespace std;
int main()
{
    // queue is a container adapter that gives the functionality of a queue data structure
    // queue follows the FIFO (First In First Out) principle
    // queue is implemented using deque by default, but we can also use list as the underlying container
    // queue does not have iterators, so we cannot use range-based for loop or iterators to traverse the queue
    // queue provides the following member functions:
    // push() - adds an element to the back of the queue
    // pop() - removes the front element from the queue
    // front() - returns the front element of the queue
    // back() - returns the back element of the queue
    // size() - returns the number of elements in the queue
    // empty() - returns true if the queue is empty, false otherwise
    // queue also provides the following member functions for swapping and copying:
    // swap() - swaps the contents of two queues
    // copy constructor - creates a new queue as a copy of an existing queue
    // move constructor - creates a new queue by moving the contents of an existing queue
    //complexity of queue operations:
    // push() - O(1)
    // pop() - O(1)
    // front() - O(1)
    // back() - O(1)
    // size() - O(1)
    // empty() - O(1)
    // swap() - O(1)
    // copy constructor - O(n)
    // move constructor - O(1)
    // example of queue
    queue<int>q;
    q.push(10); // 10 is the front element
    q.push(20); // 20 is the back element
    q.push(30); // 30 is the back element
    cout << q.front() << endl; // 10
    cout << q.back() << endl; // 30
    q.pop(); // 10 is removed, 20 is the front element
    cout << q.front() << endl; // 20
    cout << q.size() << endl; // 2
    queue<int> q1(q); // copy constructor
    cout << q1.front() << endl; // 20
    cout << q1.back() << endl; // 30
    q1.push(40); // 40 is the back element
    cout << q1.back() << endl; // 40
    q1.swap(q); // swap q and q1
    cout << q.front() << endl; // 20
    cout << q.back() << endl; // 40
    cout << q1.front() << endl; // 20   
    cout << q1.back() << endl; // 30
    q1.pop(); // 20 is removed, 30 is the front element
    cout << q1.front() << endl; // 30
    cout << q.empty() << endl; // 0
    
}