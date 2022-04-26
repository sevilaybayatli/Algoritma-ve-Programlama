//Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:
#include <iostream>
using namespace std;

int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}
