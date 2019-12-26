
#include <iostream>

using namespace std;

//2.16

int main() {

  int num1, num2;
  cout << "Enter two numbers :\n";

  cin >> num1 >> num2;

  if(num1 == num2) {
    cout << "These numbers are equal.";
  }else {
    cout << max(num1,num2) << " is larger.";
  }
  
  return 0;
}