
#include <iostream>

using namespace std;

int GCD(int n1, int n2);


int main()
{

  int num1, num2;

  cin >> num1 >> num2;

  cout << GCD(num1, num2);
  return 0;
}

int GCD(int n1,int n2){


if(n2) 
while((n1%=n2)&&(n2%=n1)){
    cout <<"n1 "<< n1<<endl;
    cout <<"n2 "<< n2<<endl;
}


return n1 + n2;

// return n1 % n2 == 0 ? n2 : GCD(n2, n1 % n2);
}