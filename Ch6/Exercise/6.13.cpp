
#include <iostream>
#include <cmath>
using namespace std;

int getNearestInteger(double);

int main(){

  for (int i = 1; i <= 5;i++)
  {

    double x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The nearestInteger of " << x << " is " << getNearestInteger(x)<<endl;
  }

    return 0;
}


int getNearestInteger (double num) {

  double y;
  y = floor(num + 0.5);

  return y;
}