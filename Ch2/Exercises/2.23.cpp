

#include <iostream>
using namespace std;

int main(){

  cout << "Enter five intergers"<<endl;
  int num1, num2, num3, num4, num5, max,min;
  cin >> num1 >> num2 >> num3 >> num4 >> num5;
  max = num1;
  min = num1;
  if (num2>max)
    max = num2;
  if(num3>max)
    max = num3;
  if(num4>max)
    max = num3;
  if(num5>max)
    max = num5;

  if(num2<min)
    min = num5;
  if(num3<min)
    min = num5;
  if(num4<min)
    min = num5;
  if(num5<min)
    min = num5;

  cout << "Max is " << max << endl;
  cout << "Min is " << min << endl;

  return 0;
}