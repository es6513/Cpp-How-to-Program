
#include <iostream>
#include <iomanip>


using namespace std;

int pow(int);

int main(){

  for (int i = 1; i <= 500;i++) {


    for (int j = 1; j <= i;j++) {

      for (int k = 1; k <= i;k++) {

        if(pow(j)+pow(k)==pow(i)) {

          cout << setw(8) << "Side 1" << setw(8) << "Side 2" << setw(16) << "hypotenuse" << endl;
          cout << setw(8) << j << setw(8) << k << setw(8) << i << endl;


        }

      }


    }


  }

    return 0;
}

int pow(int num) {

  return num * num;
}