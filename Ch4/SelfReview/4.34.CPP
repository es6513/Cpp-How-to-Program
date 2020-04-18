#include<iostream>
#include<cmath>

using namespace std;

int factorial(int);
double estimateOfe(int);
double estimateEpowX(int, double);

int main() {

  int n,acc;
  double x;

  //a)
  cout << "Enter factorial base: ";
  cin >> n;
  cout <<"Factorial of "<<n<<" is: "<< factorial(n) << endl;

  //b)

  cout << "Enter the desired accuracy of e: ";
  cin >> acc;
  cout << "Constant e with accuracy  "<<acc<<" is: "
  <<estimateOfe(acc) << endl;

  //c)
   cout << "Enter x: ";
  cin >> x;
     cout <<"e^"<<x<< " with accuracy "<<acc<<" is: "
     <<estimateEpowX(acc,x);


  return 0;
}

int factorial(int n) {
  int counter = 1;
  int result = 1;

  while(counter<=n){
    result *= counter;
    counter++;
  }

  return result;
}

double estimateOfe(int acc) {
  double result = 1;
  int counter = 1;

  while(counter<=acc){
    //這邊如果 1 / factorial(counter) 會是 int/int , 小數會 lost 掉
    result += 1.0 / factorial(counter);
    counter++;
  }

  return result;
}

double estimateEpowX(int acc,double x) {
  double result = 1;
  int counter = 1;
  double powX = x;

  while(counter<=acc){
    result += powX / factorial(counter);
    powX *= x;
    counter++;
  }

  return result;
}