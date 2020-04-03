#include <iostream>

using namespace std;


//會印出一堆 0, 已經 overflow 了
int main(){

  int num =2;

  while(true){
    cout << num << endl;
    num*=2;
  }
  return 0;
}