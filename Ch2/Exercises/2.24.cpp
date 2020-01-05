


#include <iostream>
using namespace std;

int main(){

  int a;
  cout << "Input an interger" << endl;
  cin >> a;
  if (a % 2 == 0)
  {
    cout << a << " is an even number";
  }else if(a % 2 != 0) {
    cout << a << " is an odd number";
  }

  return 0;
}