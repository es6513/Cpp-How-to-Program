

#include <iostream>

using namespace std;

void modifyArray(int[], int); // 第一個參數如果寫 int[2] 沒有用,無法初始化長度
void noModifyArray(const int [], int);
void noModifyPassByvalue( int b[],const int) // func prototype 也要加上

int main(){

  int a[5] = {1,2,3,4,5};

  modifyArray(a, 5); // pass by ref

  cout << a[2]<<endl;

  int c = 5;
  int &d = c;

  cout <<"d: " <<d<<endl;
  d += 1;
    cout <<"d: " <<d<<endl;
cout <<"c: " <<c<<endl;
  return 0;
}

void modifyArray(int b[],int sizeOfArray) {
  for (int k = 0; k < sizeOfArray;k++)
    b[k] *= 2;
}

// 加上 const 就可以強制不能修改 array
void noModifyArray(const int b[],int sizeOfArray) {
  for (int k = 0; k < sizeOfArray;k++)
    b[k] *= 2;
}

//同理, 下面這個寫法代表 sizeOfArray 一旦 傳進來也不能改
void noModifyPassByvalue( int b[],const int sizeOfArray) {
  sizeOfArray++;
}