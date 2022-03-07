/*A string in C++ is actually an object, which contain functions that can perform certain operations on strings. 
For example, you can also concatenate strings with the append() function:*/
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}
