#include <iostream>

using namespace std;

//2.30

int main() {

  double weight, height,BMI;

  cout << "Input your weight(kg)" << endl;
  cin >> weight ;
  cout << "Input your height(meters)" << endl;
  cin >> height ;
  BMI = weight / (height * height);
  cout << "Your BMI is " << BMI << endl;

  return 0;
}