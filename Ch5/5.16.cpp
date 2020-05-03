
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

  int amount;
  int principal = 100000;
  int rate = 105;


  cout << "Year" <<setw( 21 ) << "Amount on deposit" << endl;
cout << fixed << setprecision( 2 );
  for (int year = 1; year <= 10;year++) {
    amount = principal * rate / 100;
    principal = amount;

    cout << setw(4) << year << setw(21) <<amount/100 
    <<"."<<amount%100 
    << endl;
  }

    return 0;
}