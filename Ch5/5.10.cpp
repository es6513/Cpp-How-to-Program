#include <iostream>

using namespace std;


int main(){

  int oddSum = 1;

  for (int i = 1; i <= 15;i++) {
    if(i%2==1) {
      oddSum *= i;
    }
  }

  cout << "The product of the odd integers from 1 to 15 is: " << oddSum;

  return 0;
}