
#include <iostream>

using namespace std;
int secondStruck12(int hours, int minutes, int seconds);

int main(){


  cout << abs(5);

  int hours, minutes, seconds;

  int time1, time2;

  cout << "Enter first time (hours, minute, seconds): ";
  cin >> hours >> minutes >> seconds;
  time1 = secondStruck12(hours, minutes, seconds);

  cout << "Enter second time (hours, minute, seconds): ";
  cin >> hours >> minutes >> seconds;
    time2 = secondStruck12(hours, minutes, seconds);
    cout << "Difference is " << abs(time1 - time2);

    return 0;
}

int secondStruck12(int hours, int minutes, int seconds) {

  return (hours % 12 * 3600 + minutes * 60 + seconds);

}