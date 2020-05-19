
#include <iostream>

using namespace std;

bool isEven( int );
 
int i;
 
int main()
{
   int x;
   cout << "Enter integer: ";
   cin >> x;
 
   while( x != EOF )
   {
      cout << isEven( x ) << endl;
      cout << "Enter integer: ";
      cin >> x;
   }
   return 0;
}
 
//even function
bool isEven( int x )
{
   if( x % 2 == 0 )
      return true;
   else
      return false;
}
 