

#include <iostream>

using namespace std;

int main(){

  int counter = 1, number, largest;
    cout << "Enter ten numbers: " << endl;

  while(counter<=5) {

    cin >> number;
    if(counter==1)
      largest = number;
    if(number>largest) {
      largest = number;
    }
    counter++;
  }

  cout <<"The largest number is "<< largest<<endl;

  return 0;
}