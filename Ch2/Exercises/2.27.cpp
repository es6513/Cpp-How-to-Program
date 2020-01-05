
#include <iostream>

using namespace std;

int main() {

  char symbol;

  cout << "Input a chareacter: " << endl;
  cin >> symbol;

  cout << "The equivalent of " << symbol << "is " << endl;
  cout << static_cast< int > (symbol);
}