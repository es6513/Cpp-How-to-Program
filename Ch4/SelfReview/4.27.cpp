
#include <iostream>

using namespace std;

int main(){

  int binaryNumber;
  cout << "Enter an binary integer: " << endl;
  cin >> binaryNumber;

  int decimalNumber = 0;

  int value=1;

  while(binaryNumber!=0) {
    decimalNumber += (binaryNumber % 10) * value;
    binaryNumber /= 10;
    value += value;
  }

  cout << decimalNumber;

  return 0;
}