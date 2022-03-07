/*Adding Numbers and Strings
WARNING!

C++ uses the + operator for both addition and concatenation.

Numbers are added. Strings are concatenated.*/

#include <iostream>
using namespace std;
 
int main () {
  int x1 = 10;
  int y1 = 20;
  int z1 = x + y;
  cout << z1;
  
  string x2 = "10";
  string y2 = "20";
  string z2 = x2 + y2;
  cout << z2;
  return 0;
}
