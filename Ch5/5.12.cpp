#include <iostream>

using namespace std;


int main() {

  //a)

  // for (int i = 1; i <= 10;i++) {
  //   for (int j = 0; j < i;j++){
  //     cout << '*';
  //   }
  //   cout << endl;
  // }

  //b)
//  for (int i = 10; i >= 1;i--) {
//     for (int j = 0; j < i;j++){
//       cout << '*';
//     }
//     cout << endl;
//   }

  //c)

  // for (int i = 10; i >= 1;i--) {

  //    for (int j = 10; j >= i; j--)
  //     {
  //       cout << ' ';
  //     }
  //     for (int k = 0; k < i; k++)
  //     {
  //       cout << '*';
  //     }
  //   cout << endl;
  // }

    //d)

  for (int i = 1; i <=10 ;i++) {

     for (int j = 10; j >i; j--)
      {
        cout << ' ';
      }

      for (int k = 0; k < i; k++)
      {
        cout << '*';
      }
    cout << endl;
  }


    return 0;
}