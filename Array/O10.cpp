/*To change the value of an element, refer to the index number of the element in each of the dimensions:*/
#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
    };
    letters[0][0] = "Z";

    cout << letters[0][0];
    return 0;
}