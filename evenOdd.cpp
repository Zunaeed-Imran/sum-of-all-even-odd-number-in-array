#include <iostream>
#include <string>
using namespace std;

int main() {
  int cars[10] = { 1, 2, 3, 4,5,6,7,8,9,10 };
  
  for (int i = 0; i < 10; i++) {
  	if (cars[i] % 2 == 1)
      cout << cars[i] << " is ODD." << endl;
    else
      cout << cars[i] << " is EVEN." << endl;
  }
  return 0;
}
