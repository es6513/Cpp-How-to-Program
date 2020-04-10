
#include <iostream>

using namespace std;

int square(int);
double maximum(double, double, double);

int main(){
  // for (int x = 0; x < 10;x++){
  //   cout << square(x)<<" ";
  // }
  // cout << square(5.63) << endl;
  // cout << maximum(4, 5, 6);
  return 0;
}

int square (int y) {

  return y * y;
}

double maximum(double x, double y, double z){
  double max = x;

  if(y>max)
    max = y;

  if(z>max)
    max = z;

  return max;
}