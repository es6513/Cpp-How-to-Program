//Chapter 4

//Chapter 4

#include<iostream>
#include<cmath>

using namespace std;

int main(){


//a

int x,y,i,power;

i = 1;
power = 1;

cout << "Enter base: ";
cin >> x;

cout << "Enter exponent: ";
cin >> y;

while(i<=y){
  power *= x;
  ++i;
}

cout << power << endl;

return 0;
}
