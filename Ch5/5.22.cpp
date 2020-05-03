

#include <iostream>

using namespace std;

void a();
void b();
void c();
void d();


int main(){

  // a();
  // b();

  // c();

  d();

  return 0;
}

void a(){
 int x = 5;
 int y = 7;

 //original
if( !(x < 5) && !(y >= 7)){
  cout << "Original if"<<endl;;
}else{
  cout << "Original else"<<endl;
}

  if (!((x < 5) || (y >= 7))){
     cout << "Morgan if"<<endl;
  }else{
    cout << "Morgan else"<<endl;
  }
}

void b(){

  int a =1;
  int b = 0;
  int g = 5;
  //original

  if(!( a == b ) || !( g != 5 )){
    cout << "Original if"<<endl;;
  }else{
    cout << "Original else"<<endl;
  }

  if(!( ( a == b ) && ( g != 5 ) )){
     cout << "Morgan if"<<endl;
  }else{
     cout << "Morgan else"<<endl;
  }
}

void c(){

  int x = 7;
  int y = 5;

   if(!( ( x <= 8 ) && ( y > 4 ) )){
    cout << "Original if"<<endl;;
  }else{
    cout << "Original else"<<endl;
  }

  if(!( x <= 8 ) || !( y > 4 )){
     cout << "Morgan if"<<endl;
  }else{
     cout << "Morgan else"<<endl;
  }

}

void d(){
  int i = 4;
  int j = 5;

    if(!( ( i > 4 ) || ( j <= 6 ) )){
    cout << "Original if"<<endl;;
  }else{
    cout << "Original else"<<endl;
  }

  if(!( i < 4 ) && !( j <= 6 )){
     cout << "Morgan if"<<endl;
  }else{
     cout << "Morgan else"<<endl;
  }
}