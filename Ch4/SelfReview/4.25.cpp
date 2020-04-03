#include <iostream>

using namespace std;

int main(){

  int x;

  cout << "Enter a integer: " << endl;
  cin >> x;

  for (int i = 0; i < x;i++) {
    cout << "*";
    for (int j = 1; j < x-1; j++) {
      if(i==0||i==x-1){
        cout << "*";
      }else{
        cout << " ";
      }
    }
    cout << "*" << endl;
  }

  return 0;
}