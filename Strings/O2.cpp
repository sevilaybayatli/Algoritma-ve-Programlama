/*String Concatenation
The + operator can be used between strings to add them together to make a new string. This is called concatenation*/
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName1 = firstName + lastName;
  cout << fullName;
  
  string fullName2 = firstName +" "+ lastName;
  cout << fullName2;
  return 0;
}
