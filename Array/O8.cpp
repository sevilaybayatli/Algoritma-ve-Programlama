/*To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:*/
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int getArrayLength = sizeof(myNumbers) / sizeof(int);
  cout << getArrayLength;
  return 0;
}
