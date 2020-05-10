
#include <iostream>

using namespace std;

int square(int);
int squareReference(int &);

int main(){

  int x = 3;

  int y = 4;

  cout << square(x)<<endl;
  cout << x<<endl;


  cout << squareReference(y)<<endl;
  cout << y;

}


int square(int num){

  return num *= num;
}

int squareReference(int &num){

  return num *= num;
}