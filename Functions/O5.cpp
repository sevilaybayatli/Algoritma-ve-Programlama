
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

/*Aşağıdaki örnek, parametre olarak fname adlı bir dize alan bir işleve sahiptir. İşlev çağrıldığında, 
işlevin içinde tam adı yazdırmak için kullanılan bir ad iletiyoruz*/
