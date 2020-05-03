
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

  //a)
  int sum=0, count=1;

  while(count<=99) {

    if(count%2==1) sum += count;

    count++;
  }

  cout << "Sum is " << sum << endl;

  //b)

  cout << setw(15) << fixed<<left 
  << setprecision(1) <<setw( 15 )<< 333.546372
  << setprecision(2)<<setw( 15 )<< 333.546372
  << setprecision(3)<<setw( 15 )<< 333.546372<<endl;

  //c)

  cout << fixed<<setprecision(2)<<setw( 10 ) <<pow(2.5, 3)<<endl;

  //d)

  int x;

  x=1
  while(x<=20){
    if(x%5==0)
      cout << x<<endl;
    else
      cout << x<<"\t";
    x++;
  }
  
  //e)
  for (x = 1; x <= 20;x++) {
     if(x%5==0)
      cout << x<<endl;
    else
      cout << x<<"\t";
  }

    return 0;
}