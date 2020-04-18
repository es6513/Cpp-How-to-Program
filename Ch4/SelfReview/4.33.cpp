
#include <iostream>
#include <cmath>

using namespace std;

int square(int);

int main(){

  int x, y, z;

  cout << "Enter three non zero inegers: " << endl;

  cin >> x >> y >> z;

  if((square(x)+square(y)==square(z))
  ||(square(x)+square(z)==square(y))
  ||(square(z)+square(y)==square(x))
  )
    cout << "Can be a right triangle"<<endl;
  else
    cout<< "Can not be a right triangle"<<endl;

  return 0;
}

int square(int num){

  return pow(num, 2);
}
