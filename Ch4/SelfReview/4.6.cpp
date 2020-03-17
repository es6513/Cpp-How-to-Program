//Chapter 4

#include<iostream>

using namespace std;

int main(){

  //a) product 是 25; b) quotient 是 0  兩者 x 都是6

  int x = 5, product = 5, quotient = 5;

  double doubleQuotient;


// 這個寫法可以將 quotient 轉型 doubleQuotient 會是 0.833333
  doubleQuotient = static_cast<double>(quotient)/++x;


  cout << doubleQuotient << endl;

}
