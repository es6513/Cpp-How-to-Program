

#include <iostream>
using namespace std;

int main(){

  int a,b;
  cout << "Input two intergers" << endl;
  cin >> a >> b;
  if (a % b == 0)
  {
    cout << a << " is a mutiple of "<<b;
  }else if(a % b != 0) {
    cout << a << " is not a mutiple of "<<b;
  }

  return 0;
}