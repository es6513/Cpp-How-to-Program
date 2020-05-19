
#include <iostream>

using namespace std;

void printCharacter(int num, char chart);

int main(){

  printCharacter(8, '&');
  return 0;
}


void printCharacter(int num, char chart){

  for (int i = 0; i < num;i++){
    for (int j = 0; j < num;j++) {
      if(j==num-1) 
      cout << chart<<endl;
      else 
      cout << chart;
    }
  }
}