
#include <iostream>

using namespace std;

/*
(Dangling-else Problem) State the output for each of the following when x is 9 and y is 11
and when x is 11 and y is 9. The compiler ignores the indentation in a C++ program. The C++ compiler
always associates an else with the previous if unless told to do otherwise by the placement of
braces {}. On first glance, you may not be sure which if and else match, so this is referred to as
the “dangling-else” problem. We eliminated the indentation from the following code to make the
problem more challenging. [Hint: Apply indentation conventions you’ve learned.]
*/
int main(){
//a)

int x=9, y=11;
if (x < 10)
  if (y > 10)
    cout << "*****" << endl;
  else
    cout << "#####" << endl;
cout << "$$$$$" << endl;

// (1) x is 9 y is 11
// output is *****
//           $$$$$

// b) 

x=11, y=9;

if ( x < 10 )
{
if ( y > 10 )
cout << "*****" << endl;
}
else
{
cout << "#####" << endl;
cout << "$$$$$" << endl;
}

// output is "#####"
//           $$$$$

  return 0;
}