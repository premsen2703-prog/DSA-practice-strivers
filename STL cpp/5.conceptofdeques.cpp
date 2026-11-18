#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //deque is a double ended queue and it is defined in the <deque> header. It is a sequence container that allows fast insertion and deletion of elements at both ends. It also provides random access to elements, which means you can access any element in the deque using an index. Deques are implemented as a dynamic array of fixed-size arrays, which allows them to grow and shrink efficiently.
    // To use deques, you need to include the <deque> header and use the std::deque template. Here's how you can create and use deques in C++:
    // Creating a deque
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    for(int i : dq) {
        cout << i << " ";
    }
    cout << endl;
    deque<int> copy(2, 50);
    dq.insert(dq.begin(), copy.begin(), copy.end());
    for(int i : dq) {
        cout << i << " ";
    }
    cout << endl;
    cout << dq.size() << endl;
    deque<int> dq1{10, 20};
    cout << dq1.size() << endl;
    dq.pop_back();
    cout << dq.size() << endl;
    dq1.swap(dq);
    for(int i : dq1) {
        cout << i << " ";
    }
    cout << endl;
    dq1.clear();
    cout << dq1.size() << endl;
    cout << dq.empty() << endl;
    return 0;
}
