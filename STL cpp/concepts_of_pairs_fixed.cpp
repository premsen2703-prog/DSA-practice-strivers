//Pairs
// A pair is a simple container defined in the <utility> header that holds two values of possibly different types.
// To use pairs, you need to include the <utility> header and use the std::pair template. Here's how you can create and use pairs in C++:
#include <iostream>
#include <utility> // for std::pair
#include <vector> // for std::vector
#include <string> // for std::string
using namespace std;
int main() {
    // Creating a pair
    pair<int, string> person; // A pair that holds an int and a string
    person.first = 1; // Accessing the first element of the pair
    person.second = "Alice"; // Accessing the second element of the pair

    cout << "ID: " << person.first << ", Name: " << person.second << endl;

    // You can also create a pair using the make_pair function
    auto anotherPerson = make_pair(2, "Bob");
    // Output the values of the pair
    cout << "ID: " << anotherPerson.first << ", Name: " << anotherPerson.second << endl;

    // Example of using pairs in a vector
    vector<pair<int, string>> people; // A vector of pairs
    people.push_back(make_pair(1, "Alice"));// Adding a pair to the vector
    people.push_back(make_pair(2, "Bob"));// Adding another pair to the vector
    for (const auto& p : people) { // Iterating through the vector of pairs.
        cout << "ID: " << p.first << ", Name: " << p.second << endl;
    }
    // The output will be:
    // ID: 1, Name: Alice
    // ID: 2, Name: Bob
    // This demonstrates how to create and use pairs in C++.
    // You can store any types of values in a pair, and it is a convenient way to group related data together.
    // You can also use pairs in various data structures, such as vectors or maps, to store and manage related data efficiently.    
    // In summary, pairs are a useful tool in C++ for grouping two related values together, and they can be easily created and manipulated using the std::pair template and the make_pair function. 
    //They are commonly used in various applications, such as storing key-value pairs in maps or grouping related data in vectors.
    // Remember to include the necessary headers and use the appropriate namespace when working with pairs in C++. Happy coding!

    return 0;
}
