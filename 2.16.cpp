
#include <iostream>

using namespace std;

//2.16

int main() {

  int a, b;
  cout << "Enter two numbers :\n";

  cin >> a >> b;

  cout << "The sum of two numbers is " << a+b << endl;
  cout << "The product of two number is " << a*b << endl;
  cout << "The difference of two numbers is " << a-b << endl;
  cout << "The quotient of two numbers is " << a/b - a%b/b << endl;

  

  return 0;
}