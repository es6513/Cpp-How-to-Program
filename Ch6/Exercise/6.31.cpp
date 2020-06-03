

#include <iostream>

using namespace std;

int gcd(int num1, int num2);

int main() {

  int num1, num2;

  cout << "Enter two integers" << endl;
  cin >> num1 >> num2;
  cout << "GCD is " << gcd(num1, num2);

  return 0;
}

int gcd(int num1,int num2) {



  return num1 % num2 == 0 ? num2 : gcd(num2, num1%num2);
}