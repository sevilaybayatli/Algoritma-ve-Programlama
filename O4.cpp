#include <iostream>
using namespace std;
/*You should always declare the variable as constant when you have values that are unlikely to change:*/
int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}
