#include <iostream>
using namespace std;

int main () {
  int array [20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  for (int i = 0; i < 20; i++) {
    if (array[i] %2 == 1) {
      cout << array[i] << " is Odd number." << endl;
    } else {
      cout << array [i] << " is Even number" << endl;
    }
  }

  return 0;
}
