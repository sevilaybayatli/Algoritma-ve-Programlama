/*String Data Types
The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage.
String values must be surrounded by double quotes
To use strings, you must include an additional header file in the source code, the <string> library*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}
