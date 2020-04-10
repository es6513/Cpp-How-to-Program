
#include <iostream>

using namespace std;

int square(int);

int main(){

  int x;
  cout << "Enter an integer:\n";
  cin >> x;

  cout << "The square of " << x << " is " << square(x);
  return 0;
}

inline int square(int value){
  return value * value;
}
