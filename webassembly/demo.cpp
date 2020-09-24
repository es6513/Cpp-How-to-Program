

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void randDice(int times, int randSeed);

int main(){


  randDice(10,11);

}

void randDice(int times, int randSeed) {
  srand( randSeed );

  for (int counter = 1;counter<=times;counter++){
      cout << setw( 10 ) << ( 1 + rand() % 6 );

      if(counter % 5 == 0)
        cout << endl;
  }
  
}