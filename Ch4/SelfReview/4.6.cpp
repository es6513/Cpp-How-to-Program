//Chapter 4

#include<iostream>

using namespace std;

int main(){

  int x = 5, product = 5, quotient = 5;

  double doubleQuotient;

  doubleQuotient = static_cast<double>(quotient)/++x;


  cout << doubleQuotient << endl;

}
