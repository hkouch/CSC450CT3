#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Ask the user to enter three integer values
    cout << "Enter three integer values: ";
    cin >> a >> b >> c;

    // Create integer pointers to dynamic memory
    int *ptrA = new int;
    int *ptrB = new int;
    int *ptrC = new int;

    // Store the values into the dynamic memory
    *ptrA = a;
    *ptrB = b;
    *ptrC = c;

    // Display the contents of the variables
    cout << "Values entered: " << a << ", " << b << ", " << c << endl;

    // Display the contents of the pointers
    cout << "Values in dynamic memory: " << *ptrA << ", " << *ptrB << ", " << *ptrC << endl;

    // Display the memory addresses of the pointers
    cout << "Memory addresses of the pointers: " << ptrA << ", " << ptrB << ", " << ptrC << endl << endl;

    // Display a goodbye message
    cout << "Goodbye. ♥" << endl;

    // Free the dynamically allocated memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
