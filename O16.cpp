/* Assignment Operators
Assignment operators are used to assign values to variables.
In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x
The addition assignment operator (+=) adds a value to a variable*/
#include <iostream>
using namespace std;

int main() {
  int x = 10;
  x += 5;
  cout << x;
  
  int y = 5;
  y -= 3;
  cout << y;
  
  int z = 5;
  z *= 3;
  cout << z;
  return 0;
}
