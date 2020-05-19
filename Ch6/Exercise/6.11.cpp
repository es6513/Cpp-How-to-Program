



#include <iostream>
#include <cmath>
using namespace std;

/*
Show the value of x after each of the following statements is performed:
a) x = fabs( 7.5 )
b) x = floor( 7.5 )
c) x = fabs( 0.0 )
d) x = ceil( 0.0 )
e) x = fabs( -6.4 )
f) x = ceil( -6.4 )
g) x = ceil( -fabs( -8 + floor( -5.5 ) ) )
*/


int main (){

  cout << fabs(7.5) << endl;
  cout << floor(7.5) << endl;
  cout << fabs(0.0) << endl;
  cout << ceil( 0.0 ) << endl;
  cout << fabs( -6.4 ) << endl;
  cout << ceil( -6.4 ) << endl;
  cout << ceil(-fabs(-8 + floor(-5.5)));

}