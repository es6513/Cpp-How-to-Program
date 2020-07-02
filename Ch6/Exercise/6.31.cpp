

#include <iostream>

using namespace std;

int gcd(int num1, int num2);
int gcdWhile(int num1, int num2);

int main() {

  int num1, num2;

  cout << "Enter two integers" << endl;
  cin >> num1 >> num2;
  cout << "GCD is " << gcdWhile(num1, num2);

  return 0;
}

int gcd(int num1,int num2) {


  return num1 % num2 == 0 ? num2 : gcd(num2, num1%num2);
}

int gcdWhile(int num1,int num2) {

if(num2) while ((num1%=num2)&&(num2%=num1));
// cout << num1<<endl;
// cout << num2 << endl;
return num1 + num2;
}