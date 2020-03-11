
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  //這邊的值 會根據 a++ ++a 不同
  // int a = 5;
  // a= ++a;
  // cout << a;

  //由於 d, e 都是 int 出來的值還是一樣 int
  // double c;
  // int d = 8, e = 3;
  // c = static_cast<double>(d)/e;
  // cout << c;
  //會暫時把 d 轉成 double,就可以讓 c 產生我們想要的結果

  // int count;

  //break 整個跳掉; continue 只有當下那次不做
  // for(count=1;count<=10;count++) {
  //   if(count==5)
  //     continue;

  //   cout << count << " ";
  // }

  // cout << "\nBroke out of loop at count = " << count << endl;

//pow

//本利計算

  double amount;
  double principal = 1000.0;
  double rate = 0.05;

    cout<<"Year"<<setw(21)<<"Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for (int year = 1; year <= 10; year++)
    {
      amount = principal * pow(1.0 + rate, year);

      cout << setw(4) << year<< setw(21) << amount << endl;
    }

  return 0;


}