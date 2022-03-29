#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "Pizza";  // Variable declaration
	string* ptr = &food;    // Pointer declaration

	// Reference: Output the memory address of food with the pointer
	cout << ptr << "\n";

	// Dereference: Output the value of food with the pointer
	cout << *ptr << "\n";
	return 0;
}
/*Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.*/
