/*Operators
Operators are used to perform operations on variables and values.
In the example below, we use the + operator to add together two values, Although the + operator is often used to add together two values, 
it can also be used to add together a variable and a value, or a variable and another variable:?*/
#include <iostream>
using namespace std;

int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3;
  return 0;
}
