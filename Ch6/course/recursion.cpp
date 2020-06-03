
#include <iostream>

using namespace std;

int factorial(int);
int fibonacci(int);

int main(){

  // int x;
  // int factorial = 1;
  // cin >> x;

  // for (int i = x; i>=1 ;i--)
  // {
  //   factorial *= i;
  // }

  cout << fibonacci(6);

  return 0;
}

int factorial(int counter) {

  if(counter<=1)
    return 1;
  else
    return counter * factorial(counter - 1);
}

int fibonacci(int num){
  if((num==1)||(num==0)) {
    return num;
  }else {
    return fibonacci(num-1)+fibonacci(num-2);
  }
}