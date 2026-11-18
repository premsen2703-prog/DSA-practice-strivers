#include<bits/stdc++.h>
using namespace std;
int main(){
   //list is a doubly linked list and it is defined in the <list> header. It is a sequence container that allows non-contiguous memory allocation. It provides fast insertion and deletion of elements at any position in the list. It also provides bidirectional iterators that can be used to traverse the list in both directions.
   // To use lists, you need to include the <list> header and use the std::list template. Here's how you can create and use lists in C++:
  
    list<int>ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    // all the operations of list are same as vector but the difference is that list is a doubly linked list and vector is a dynamic array.
    
    ls.push_front(5);// this will add 5 to the front of the list.
    ls.emplace_front(1); // this will add 1 to the front of the list.
    ls.emplace_back(40); // this will add 40 to the end of the list
    //rest of the operations are same as vector but the difference is that list is a doubly linked list and vector is a dynamic array.
    
    return 0;
}