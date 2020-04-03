
#include <iostream>

using namespace std;

int main(){

    int counter = 1, number, largest =0,secondeLargest=0;


  while(counter<=5) {

    cin >> number;

    if(number>largest){
      secondeLargest = largest;
      largest = number;
    } else if(number>secondeLargest) {
      secondeLargest = number;
    }

    counter++;
  }

  cout <<"The largest number is "<< largest<<endl;
  cout <<"The secondeLargest number is "<< secondeLargest<<endl;


  return 0;
}