#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void testStorageClass();
void useGlobal();

int x = 1;

int main() {

  int x = 5;

  testStorageClass(); 
  // testStorageClass();
  // useGlobal();
  return 0;
}

void testStorageClass() {
  int x = 6;
  cout << ::x << endl;
   cout << ++x << endl;

}

void useGlobal() {
  cout << x << endl;
}