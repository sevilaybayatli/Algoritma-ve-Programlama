/*You learned from the previous chapter, that we can get the memory address of a variable by using the & operator:*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "Pizza";

	cout << food << "\n";
	cout << &food << "\n";
	return 0;
}
