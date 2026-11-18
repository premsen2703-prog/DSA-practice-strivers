#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1. Basic Syntax Demo - Fixed to compile and run
    // Variables
    int age = 25;   
    float pi = 3.14;
    char grade = 'A';
    bool isStudent = true;

    // Function example
    auto add = [](int a, int b) { return a + b; }; // Use lambda for simplicity

    // Control structures examples
    if (age > 18) {
        cout << "You are an adult." << endl;    
    } else {
        cout << "You are a minor." << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }

    int counter = 0;
    while (counter < 5) {
        cout << "Count: " << counter << endl;
        counter++;
    }

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

    // I/O example
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    cout << "Add example: " << add(3,4) << endl;

    return 0;
}
