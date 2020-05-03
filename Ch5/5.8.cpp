#include <iostream>

using namespace std;

int main(){

  int counter;
  int num;
  int min;
  cout << "Enter how many number you enter: ";
  cin >> counter;

  for (int i = 0; i < counter;i++){
    cout << "Enter a number: ";
    cin >> num;
    if (i == 0) {
      min = num;
    }else {
      if(num<min)
        min = num;
    }
  }

  cout << "The smallest number is " << min << endl;

  return 0;
}