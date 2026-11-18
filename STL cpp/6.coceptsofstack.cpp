#include<bits/stdc++.h>
using namespace std;
void conceptsofstack()
{
    // stack is a container adapter that gives the functionality of a stack data structure
    // stack follows the LIFO (Last In First Out) principle
    // stack is implemented using deque by default, but we can also use vector or list as the underlying container
    // stack does not have iterators, so we cannot use range-based for loop or iterators to traverse the stack
    // stack provides the following member functions:
    // push() - adds an element to the top of the stack
    // pop() - removes the top element from the stack
    // top() - returns the top element of the stack
    // size() - returns the number of elements in the stack
    // empty() - returns true if the stack is empty, false otherwise
    // stack also provides the following member functions for swapping and copying:
    // swap() - swaps the contents of two stacks
    // copy constructor - creates a new stack as a copy of an existing stack
    // move constructor - creates a new stack by moving the contents of an existing stack
    //complexity of stack operations:
    // push() - O(1)
    // pop() - O(1)
    // top() - O(1)
    // size() - O(1)
    // empty() - O(1)
    // swap() - O(1)
    // copy constructor - O(n)
    // move constructor - O(1)
    // 
    stack<int> st;
    st.push(10);// 10 is the top element
    st.push(20);// 20 is the top element
    st.push(30);// 30 is the top element
    cout << st.top() << endl; // 30
    st.pop();// 30 is removed, 20 is the top element
    cout << st.top() << endl; // 20
    cout << st.size() << endl; // 2
    stack<int> st1(st); // copy constructor
    cout << st1.top() << endl; // 20    
    st1.push(40); // 40 is the top element
    cout << st1.top() << endl; // 40
    st1.swap(st); // swap st and st1
    cout << st.top() << endl; // 40
    cout << st1.top() << endl; // 20;
    st1.pop(); // 20 is removed, 10 is the top element
    cout << st1.top() << endl; // 10
    cout << st.empty() << endl; // 0    
    // stack does not have iterators, so we cannot use range-based for loop or iterators to traverse the stack
    // we can use a temporary stack to traverse the stack
   
    
}