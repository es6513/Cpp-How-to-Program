
#include <iostream>
using namespace std;

inline double AVERAGE(int a, int b) { return (a / b); };

int main(){

  int sum=0,counter=0;

  cout << "Enter lists of integer: " << endl;

  for (int i = 0; i != 9999;)
  {
    cin >> i;
    if(i!=9999){
      sum += i;
      counter++;
    }
    }


  cout << "Average is " << AVERAGE( sum,counter)<<endl ;

  return 0;
}