#include <iostream>

using namespace std;

/*
What’s wrong with the following statement? Provide the correct statement to accomplish
what the programmer was probably trying to do.
cout << ++( x + y );
*/


// lvalue 與 rvalue 的差別


// ANS: ++var; has the same effect as var = var + 1;
//          (and the value of the expression is the value of var *after*
//          the increment).  Thus, var must be an lvalue.  (x+y) is not
//          an lvalue - in other words, there is no place to "store" the
//          result of the increment, so ++(x+y) doesn't make sense.
//          The programmer probably meant
//              cout << x+y+1;

int main(){
  int x = 1, y = 2;

  cout << (x + y)+1 << endl;
  return 0;
}