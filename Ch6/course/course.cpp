
#include <iostream>
#include <typeinfo>

using namespace std;

int square(int);
double maximum(double, double, double);

int factorial(int);
int fibonacci(int);


int main(){
int x, y=3, z=5;

double a = 1.0, b = 5.8;

x = a + b;

cout << x << endl;
cout << typeid(x).name();
// for (int x = 0; x < 10;x++){
//   cout << square(x)<<" ";
// }
// cout << square(5.63) << endl;
// cout << maximum(4, 5, 6);

// cout<<fibonacci(6);
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

int factorial(int n){
 
 if(n<=1)
   return 1;
  else
    return n * factorial(n - 1);
}

int fibonacci(int n){
 
 if(n==0){
    return 0;
 }else if(n==1){
    return 1;
 }else {
   return fibonacci(n-1) + fibonacci(n - 2);
 }
   
   
}