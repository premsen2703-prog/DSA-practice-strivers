#include<bits/stdc++.h>
using namespace std;
int main(){
// 1. Basic Syntax
// C++ is a statically typed, compiled programming language. It supports procedural, object-oriented
// and generic programming paradigms. The basic syntax of C++ includes the following elements:
// 1.1. Comments
// C++ supports both single-line and multi-line comments. Single-line comments start with // and
// multi-line comments are enclosed between /* and */.
// This is a single-line comment
/*
This is a multi-line comment
*/
// 1.2. Data Types
// C++ has several built-in data types, including:
// - int: for integers
// - float: for floating-point numbers
// - double: for double-precision floating-point numbers
// - char: for characters
// - bool: for boolean values (true or false)
// - void: for functions that do not return a value
// 1.3. Variables
// Variables are used to store data in C++. They must be declared with a specific data type before they can be used. For example:
int age = 25;   
float pi = 3.14;
char grade = 'A';
bool isStudent = true;
// 1.4. Functions
// Functions are blocks of code that perform a specific task. They can take parameters and return values. For example:
int add(int a, int b) {
    return a + b;
}
// 1.5. Control Structures
// C++ supports various control structures, including:
// - if-else statements for conditional execution
// - for loops for iterating over a range of values
// - while loops for repeating a block of code while a condition is true
// - switch statements for multi-way branching
// Example of an if-else statement:
if (age > 18) {
    cout << "You are an adult." << endl;    
} else {
    cout << "You are a minor." << endl;
}
// Example of a for loop:
for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << endl;
}
// Example of a while loop:
int counter = 0;
while (counter < 5) {
    cout << "Count: " << counter << endl;
    counter++;
}
// Example of a switch statement:
char grade = 'A';
switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
    case 'C':
        cout << "Average!" << endl;
        break;
    default:
        cout << "Invalid grade!" << endl;
        break;
}   
// 1.6. Input and Output
// C++ uses the iostream library for input and output operations. The standard input stream is
cin, and the standard output stream is cout. For example:
int number;
cout << "Enter a number: ";
cin >> number;
cout << "You entered: " << number << endl;
// 1.7. Namespaces
// C++ uses namespaces to organize code and prevent name conflicts. 
//The standard library is contained within the std namespace.
// To avoid having to prefix standard library names with std::, you can use the using directive:        
using namespace std;
// However, it is generally recommended to avoid using the using directive in header files or in large projects to prevent name conflicts.
// 1.8. Preprocessor Directives
// Preprocessor directives are instructions that are processed before the actual compilation of the code. They start with a # symbol. For example:
#define PI 3.14
// This defines a constant named PI with the value 3.14. You can use PI in your code, and it will be replaced with 3.14 during compilation.
// 1.9. Main Function
// The main function is the entry point of a C++ program.
// It is where the execution of the program begins. 
// The main function must return an integer value, typically 0 to indicate successful execution. For example:
// int main() {
//     // Your code here
//     return 0;
// }

// 1.10. Header Files
// C++ uses header files to declare functions, classes, and other entities that can be used in multiple source files.
// Header files typically have a .h or .hpp extension and are included in source files using the #include directive. For example:
#include <iostream> // This includes the iostream header file for input and output operations   
// 1.11. Standard Library
// C++ has a rich standard library that provides a wide range of functions and classes for various tasks, such as input/output, string manipulation, data structures, algorithms, and more.
//  The standard library is included in the std namespace, and you can access its components using the std:: prefix or by using the using directive.
// In summary, the basic syntax of C++ includes comments, data types, variables, functions, control structures, input/output operations, namespaces, preprocessor directives, the main function, header files, and the standard library. 
// Understanding these elements is essential for writing C++ programs effectively.
// Note: This code is for demonstration purposes and may not compile or run as-is. It is intended to illustrate the basic syntax of C++.
// End of the main function
    return 0;
}
