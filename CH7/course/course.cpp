

#include <iostream>

using namespace std;

void testExternStorage();


int main(){

// int a[6];
// 告訴系統要6個連續的記憶體且都是整數;
// 系統會命名 a[0], a[1]…等等

// 若此時寫 a[9] = 5, 也不會錯
// 此時會去找 位在第10個位置的地方把5 assign 進去

//示意圖

/*

a  =>     |   |   |   |   |   |  (6 個記憶體)  a[0]  a[1] ... a[5]

a[9] = 5  |   |   |   |   |   |   |   |    |   | <- 這個位置會被塞5
這樣就會蓋掉原本那塊記憶體上面的值

*/

//initialize

int b[5] = {0, 1, 2, 3};




//int b[5] = {}, 會全部都是0
//int b[] 不行,不知道一次要幾個
//int b[] = {1,2,3,4} 可以, 等同於 int b[4] = {1,2,3,4}
//若初始化個數不足會補0

// cout << b[3];
// cout << b[4];

// cout << &b[0]<<endl;
// cout << &b[1] << endl;
// cout << &b[2] << endl;


//二維陣列

int a[2][3] = {1, 2, 3, 4, 5,6}; // 就是 table 的概念;

int c[2][3] = {{1, 2, 3}, {4, 5, 6}};

int d[2][3] = {1, 2, 3, 4, 5}; // 最後一個會補 0 

int e[2][3] = {{1},{2,3}};

int f[3];

cout << c[1][1]<<endl ;
cout << a[1][2]<<endl ;
cout << d[1][1]<<endl ;

cout << e[1][2] << endl; //0
cout << e[1][1] << endl; //3

cout << "f[1]]" << f[1];

// |_

return 0;
}
