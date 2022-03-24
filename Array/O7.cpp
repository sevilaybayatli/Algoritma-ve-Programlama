/*To get the size of an array, you can use the sizeof() operator:*/
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNumbers);
  return 0;
}

/*Why did the result show 20 instead of 5, when the array contains 5 elements?

It is because the sizeof() operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.*/
