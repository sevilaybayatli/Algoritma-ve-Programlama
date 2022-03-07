/*Logical Operators
Logical operators are used to determine the logic between variables or values:*/

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 && y < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10
  return 0;
}
