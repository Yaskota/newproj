#include <iostream>  // Include the iostream library for input/output operations

using namespace std;

int main() {
    
    int number;
    
    // Output a message to the user
    cout << "Enter a number: ";
    
    // Get input from the user
    cin >> number;
    
    // Output the number entered by the user
    cout << "You entered: " << number << endl;
    
    // A simple loop that prints numbers from 1 to 5
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    
    cout << endl; // Move to the next line

    return 0;  // End of the program
}

