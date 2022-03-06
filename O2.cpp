#include <iostream>
using namespace std;

int main() {
	/*All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code:*/
	int minutesPerHour = 60;

	// OK, but not so easy to understand what m actually is
	int m = 60;

	cout << minutesPerHour << "\n";
	cout << m;
	return 0;
}
