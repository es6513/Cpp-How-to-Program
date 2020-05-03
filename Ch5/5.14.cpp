#include <iostream>

using namespace std;

int main() {

  double totalValue = 0;
  int productNumber =0;
  int quantity = 0;

    cout << "Enter product number: "
    <<"(Enten -1 will end this)" << endl;
    cin >> productNumber;

    while (productNumber != -1)
    {
      cout << "Enter quantity: " << endl;
      cin >> quantity;

      switch (productNumber)
      {
      case 1:
        totalValue += quantity * 2.98;
        break;
      case 2:
        totalValue += quantity * 4.50;
        break;
      case 3:
        totalValue += quantity * 9.98;
        break;
      case 4:
        totalValue += quantity * 4.49;
        break;
      case 5:
        totalValue += quantity * 6.87;
        break;
      default:
        break;
      }

      cout << "Enter product number: "
    <<"(Enten -1 will end this)" << endl;
    cin >> productNumber;
  }

  cout << "Total value is " << totalValue;

  return 0;
}