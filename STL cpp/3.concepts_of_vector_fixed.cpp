#include<bits/stdc++.h>
using namespace std;

int main(){//     // Concepts of Vectors - Fixed to compile and run
//     // A vector is a dynamic array that can grow and shrink in size.
//     // Concepts of Vectors
// // A vector is a dynamic array that can grow and shrink in size. It is part of the C++ Standard Template Library (STL) and is defined in the <vector> header.
// // To use vectors, you need to include the <vector> header and use the std::vector template. Here's how you can create and use vectors in C++:
    
   // // Creating a vector
    // vector<int> numbers;// This creates an empty vector of integers.
    // cout << "Vector created. Size: " << numbers.size() << endl;// Output: Vector created. Size: 0
    
    // // Adding elements to the vector
    // numbers.push_back(10);
    // numbers.push_back(20);
    // numbers.push_back(30);
    // cout << "After push_back(10,20,30). Size: " << numbers.size() << endl;

    // //emplace_back is more efficient than push_back as it constructs the element in place without copying or moving it.
    // // Example of emplace_back
    // numbers.emplace_back(40); // This will add 40 to the end of the vector.
    // cout << "After emplace_back(40). Size: " << numbers.size() << endl;

    // // Accessing elements with []
    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "numbers[1]: " << numbers[1] << endl;
    // cout << "numbers[2]: " << numbers[2] << endl;
    
    // // Using at() with bounds checking
    // cout << "numbers.at(0): " << numbers.at(0) << endl;
    // cout << "numbers.at(1): " << numbers.at(1) << endl;
    // cout << "numbers.at(2): " << numbers.at(2) << endl;
    
    // // Modifying elements
    // numbers[0] = 15;
    // numbers[1] = 25;
    // numbers[2] = 35;
    // cout << "After modification:" << endl;
    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "numbers[1]: " << numbers[1] << endl;
    // cout << "numbers[2]: " << numbers[2] << endl;
    
    // // Additional vector operations
    // cout << "Vector size: " << numbers.size() << endl;// Size of the vector
    // cout << "Vector capacity: " << numbers.capacity() << endl; // Capacity of the
    // cout << "Iterating with range-based for loop:" << endl;
    // for (int num : numbers) {
    //     cout << num << " ";
    // }
    // cout << endl;
    
    // // Erase example
    // numbers.erase(numbers.begin() + 1);
    // cout << "After erasing index 1. Size: " << numbers.size() << endl;
    // for (int num : numbers) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // Vector concepts demo - Fixed version
    // Initialize vector with size 2, all elements 100
    // vector<int> v(2,100);  // v = [100, 100]
    
    // // Insert 300 at beginning

    // v.insert(v.begin(),300);  // v = [300, 100, 100]
    
    // // Insert 2 elements of 10 starting at position 1
    // v.insert(v.begin()+1,2,10);  // v = [300, 10, 10, 100, 100]
    
    // // Another vector
    // vector<int>copy(2,50);  // copy = [50, 50]
    
    // // Insert range from copy at beginning
    // v.insert(v.begin(),copy.begin(),copy.end());  // v = [50, 50, 300, 10, 10, 100, 100]
    
    // // FIXED: Print vector using range-based for loop (vectors don't support << directly)
    // for(int x : v) {
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<int>v(2,100);// v = [100, 100]
    v.insert(v.begin(),300);// v = [300, 100, 100]
    v.insert(v.begin()+1,2,10);// v = [300, 10, 10, 100, 100]
    
    vector<int>copy(2,50);// copy = [50, 50]
    v.insert(v.begin(),copy.begin(),copy.end());// v = [50, 50, 300, 10, 10, 100, 100]

    cout<<v.size();// Output: 7
    v.pop_back();//v = [50, 50, 300, 10, 10, 100]
    cout<<v.size();// Output: 6
    v.swap(v2);// v = [1, 2, 3], v2 = [50, 50, 300, 10, 10, 100]
    cout<<v.size();// Output: 3
    cout<<v2.size();// Output: 6
    v.clear();// v = []
    cout<<v.size();// Output: 0

    
    return 0;
}
