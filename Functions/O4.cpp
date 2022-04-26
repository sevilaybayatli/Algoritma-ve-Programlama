/*You will often see C++ programs that have function declaration above main(), and function definition below main(). 
This will make the code better organized and easier to read:*/

#include <iostream>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
