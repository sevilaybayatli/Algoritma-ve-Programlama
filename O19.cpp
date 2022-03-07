/*Comparison Operators
Comparison operators are used to compare two values.

Note: The return value of a comparison is either true (1) or false (0).

In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:*/

#include <iostream>
using namespace std;

int main() {
  int x1 = 5;
  int y1 = 3;
  cout << (x1 > y1); // returns 1 (true) because 5 is greater than 3
  
  int x2 = 5;
  int y2 = 3;
  cout << (x2 == y2); // returns 0 (false) because 5 is not equal to 3
  
  int x3 = 5;
  int y3 = 3;
  cout << (x3 < y3); // returns 0 (false) because 5 is not less than 3
  return 0;
}
