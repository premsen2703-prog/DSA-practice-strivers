//Pairs
// A pair is a simple container defined in the <utility> header that holds two values of possibly different types.
// To use pairs, you need to include the <utility> header and use the std::pair template. Here's how you can create and use pairs in C++:
#include <iostream>
#include <utility> // for std::pair
using namespace std;
int main() {
    // Creating a pair
    pair<int, string> person; // A pair that holds an int and a string
    person.first = 1; // Accessing the first element of the pair
    person.second = "Alice"; // Accessing the second element of the pair

    cout << "ID: " << person.first << ", Name: " << person.second << endl;

    // You can also create a pair using the make_pair function
    auto anotherPerson = make_pair(2, "Bob");//auto keyword allows the compiler to deduce the type of the pair based on the arguments provided to make_pair
    //make_pair is a utility function that creates a pair object from the given arguments. It takes two arguments and returns a pair containing those values.  
    // Accessing the elements of the pair
    // anotherPerson.first will give you the first element (2 in this case)
    // anotherPerson.second will give you the second element ("Bob" in this case)   
    // Output the values of the pair
    // The output will be: ID: 2, Name: Bob
    //This demonstrates how to create and use pairs in C++. 
    // You can store any types of values in a pair, and it is a convenient way to group related data together.
    // You can also use pairs in various data structures, such as vectors or maps, to store and manage related data efficiently.
    // Example of using pairs in a vector
    vector<pair<int, string>> people; // A vector of pairs
    people.push_back(make_pair(1, "Alice"));// Adding a pair to the vector
    people.push_back(make_pair(2, "Bob"));// Adding another pair to the vector
    for (const auto& p : people) {// Iterating through the vector of pairs.
        //const auto& p is a range-based for loop that iterates through each element in the people vector.
        // The auto keyword allows the compiler to deduce the type of p, which is a reference to a pair<int, string>. 
        // The const qualifier indicates that p cannot be modified within the loop.
        // Inside the loop, we access the first and second elements of each pair using p.first and p.second, respectively, and print them out.
        cout << "ID: " << p.first << ", Name: " << p.second << endl;
    }
    cout << "ID: " << anotherPerson.first << ", Name: " << anotherPerson.second << endl;

    return 0;
}