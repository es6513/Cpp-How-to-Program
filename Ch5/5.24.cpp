
#include <iostream>

#include <cmath>

using namespace std;




int main(){

  int number;

  cout << "Enter a integer between 1 to 19: ";
  cin >> number;

  for (int i = 1; i <= number; i++)
  {

    int mid = (number + 1) / 2;
    

    if(i!=mid){
      int diff = abs(mid - i);

      for (int j = 1; j <=diff ;j++){
        cout << " ";
      }

      for (int j = 1; j <=number-2*diff ;j++){
        cout << "*";

      }

      for (int j = 1; j <=diff ;j++){
        if(j==diff) {
           cout << " " << endl;
        }else {
          cout << " " ;
          
        }
      }
    }

    if(i==mid) {
      for (int j = 1; j <=number ;j++){
         if(j==number) {
           cout << "*" << endl;
        }else {
          cout << "*" ;
        }
      }
    }


  }

    return 0;
}



