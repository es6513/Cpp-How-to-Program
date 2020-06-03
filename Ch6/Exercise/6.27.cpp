
#include <iostream>

using namespace std;

double minium(double num1, double num2, double num3);

int main(){

  double num1, num2, num3;
  cout << "Enter three float numbers: ";
  cin >> num1 >> num2 >> num3;

  cout << "The smallest is: " << minium(num1, num2, num3);

  return 0;
}


double minium(double num1,double num2,double num3) {

  double min = num1;
  if(num2<min)
    min = num2;
  if(num3<min)
    min = num3;

  return min;
}