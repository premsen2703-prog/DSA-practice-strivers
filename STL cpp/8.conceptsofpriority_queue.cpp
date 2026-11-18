@inlcude<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue is a container adapter that gives the functionality of a priority queue data structure
    // priority_queue follows the principle of "highest priority first"
    // priority_queue is implemented using a heap data structure, which allows for efficient insertion and removal of elements
    // priority_queue does not have iterators, so we cannot use range-based for loop or iterators to traverse the priority queue
    // priority_queue provides the following member functions:
    // push() - adds an element to the priority queue
    // pop() - removes the highest priority element from the priority queue
    // top() - returns the highest priority element of the priority queue
    // size() - returns the number of elements in the priority queue
    // empty() - returns true if the priority queue is empty, false otherwise
    // priority_queue also provides the following member functions for swapping and copying:
    // swap() - swaps the contents of two priority queues
    // copy constructor - creates a new priority queue as a copy of an existing priority queue
    // move constructor - creates a new priority queue by moving the contents of an existing priority queue
    //complexity of priority_queue operations:
    // push() - O(log n)
    // pop() - O(log n)
    // top() - O(1)
    // size() - O(1)
    // empty() - O(1)
    // swap() - O(1)
    // copy constructor - O(n)
    // move constructor - O(1)
    // example of priority_queue
    priority_queue<int> pq;
    pq.push(10); // 10 is the highest priority element
    pq.push(20); // 20 is the highest priority element
    pq.push(30); // 30 is the highest priority element
    cout << pq.top() << endl; // 30
    pq.pop(); // 30 is removed, 20 is the highest priority element
    cout << pq.top() << endl; // 20
    cout << pq.size() << endl; // 2
    priority_queue<int> pq1(pq); // copy constructor
    cout << pq1.top() << endl; // 20
    pq1.push(40); // 40 is the highest priority element
    cout << pq1.top() << endl; // 40
    pq1.swap(pq); // swap pq and pq1
    cout << pq.top() << endl; // 40 
    cout << pq1.top() << endl; // 20
    pq1.pop(); // 20 is removed, 10 is the highest priority element
    cout << pq1.top() << endl; // 10
    cout << pq.empty() << endl; // 0
    // priority_queue does not have iterators, so we cannot use range-based for loop or
    // iterators to traverse the priority queue
    // we can use a temporary priority_queue to traverse the priority queue
    // example of traversing the priority queue using a temporary priority_queue
    priority_queue<int> temp(pq); // create a temporary priority_queue as a copy of pq
    while(!temp.empty()) {
        cout << temp.top() << " "; // print the highest priority element
        temp.pop(); // remove the highest priority element
    }
    cout << endl;


    //what is heap data structure?
    // a heap is a specialized tree-based data structure that satisfies the heap property
    // the heap property states that for a max heap, for any given node C,
    // if P is a parent node of C, then the key (the value) of P is greater than or equal to the key of C.
    // In a min heap, the key of P is less than or equal to the key of C.
    // Heaps are commonly used to implement priority queues, where the highest (or lowest) priority element is always at the root of the heap.

// minimum heap
    priority_queue<int, vector<int>, greater<int>> minHeap;// minHeap is a priority_queue that uses a vector as the underlying container and the greater<int> comparator to create a min heap
    minHeap.push(10); // 10 is the lowest priority element 
    minHeap.push(20); // 20 is the lowest priority element
    minHeap.push(30); // 30 is the lowest priority element
    cout << minHeap.top() << endl; // 10
    minHeap.pop(); // 10 is removed, 20 is the lowest priority element
    cout << minHeap.top() << endl; // 20



}

