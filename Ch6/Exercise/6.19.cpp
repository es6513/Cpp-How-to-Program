
#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double, double);

int main(){

  cout << "The hypotenuse of triangle 1 is: ";
  cout << hypotenuse(3.0, 4.0)<<endl;


cout << "The hypotenuse of triangle 2 is: ";
  cout << hypotenuse(5.0, 12.0)<<endl;

cout << "The hypotenuse of triangle 3 is: ";
  cout << hypotenuse(8.0, 15.0)<<endl;

  return 0;
}


double hypotenuse(double side1,double side2){

  double hypotenuse;

  hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

  return hypotenuse;
}