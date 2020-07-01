


#include <iostream>

using namespace std;

int main(){

  int a=5, b, c;
  int *x =&a;
  // 這種宣告方式是 pointer 代表 address
  // 並且存的 address 所對應的值 一定要是某個整數

  // cout << "x: " << x << endl;
  // cout << "*x: "<< *x << endl;
  // x 會 是變數 a 的 address; *x 則是該 address 的值 (就是 a)
  //在操作時要注意 如果 *p++  要看 * 跟 ++ 誰的 precedence高
  // 如果 ++ 較高 就要寫 (*p)++

  //變數宣告
  // x = 0;  代表沒指到任何地方
  //0 是 pointer 唯一合法整數
  //or 
  // x= &a , 表示將 a 變數的 address 給 x

  //address 是可以改的
  // x=&b  此時指向 b

  int d, *y; // 這樣代表宣告兩個變數 一個是一般變數 d 一個是 pointer

  int e=5, *z=&e,&g=e; // 宣告兩個變數 一個一般變數 e, 一個 pointer 並同時指向 e;

  g = 6;

  // cout << &a << endl;
  // cout << x << endl;
  // cout <<e << endl;
  // cout <<g << endl;

  int *aptr;
  aptr = &a;

  int n = 3, *nptr = &n;
  cout << "*aptr: " << *aptr << endl;
  cout << "*nptr: " << *nptr << endl;
  cout << "aptr: " << aptr << endl;
  cout << "nptr: " << nptr << endl;

  *aptr = *nptr + 5;


 cout << "*aptr: " << *aptr << endl;
  cout << "*nptr: " << *nptr << endl;
  cout << "aptr: " << aptr << endl;
  cout << "nptr: " << nptr << endl;




}