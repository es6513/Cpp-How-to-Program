

#include <iostream>
#include <cstdlib>

using namespace std;


int main(){

  int seed;
  cout << "Enter seed: ";
  cin >> seed;
  srand(seed);

  // for (int i = 1; i <= 5;i++){
  //   cout << (1+(rand() % 5) ) * 2<<endl;
  // }

   cout << (1+(rand() % 5) ) * 2<<endl;
   cout << 1+((1+(rand() % 5) ) * 2)<<endl;
  cout << (1+((1+(rand() % 5) ) * 2))*2<<endl;


    
  return 0;
}