
#include <iostream>
#include <iomanip> 


using namespace std;

bool isPrime(int);

int main(){

  int num;
  cout << "Enter a integer except 1 : ";
  cin >> num;
  cout<< num << " isPrime " << boolalpha << isPrime(num);
  // for (int i = 2; i <= 15;i++){
  //   if(isPrime(i))
  //     cout << i<<endl;
  // }
  return 0;
}

bool isPrime(int num){

  if(num<2)
    return false;
    
  for (int i = 2; i*i < num;i++){
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}