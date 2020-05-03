
#include <iostream>
#include <iomanip> 
#include <bitset>

using namespace std;

int main() {

  cout << "Dec" << setw(16) << "Binary" << setw(16) << "Octal" << setw(16) << "Hex" << endl;

  for (int i = 1 ; i <= 256; i++)
  {
    cout  << dec << i;
    cout  << setw(16) <<  bitset<4>(i);
    cout << setw(16) << oct << i;
    cout << setw(16) << hex << i << endl;

  }

    return 0;
}