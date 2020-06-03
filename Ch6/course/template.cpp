
#include <iostream>


template <class T1, class T2, class T3, class T4, class T5>

T1 maximum(T3 value1, T4 value2, T5 value3) {

  T2 max = value1;

  if(value2>max)
    max = value2;
  
  if(value3>max)
    max = value3;

  return max;
}

template <class T1, class T2, class T3, class T4, class T5>

T1 maximum2(T2 value1, T3 value2, T4 value3) {

  T5 max = value1;

  if(value2>max)
    max = value2;
  
  if(value3>max)
    max = value3;

  return max;
}


using namespace std;

int main() {

  int int1, int2, int3;

  cout << "Input three integer values: ";
  cin >> int1 >> int2 >> int3;

//這邊類似 default arguments, T1, T2 會是 int
  cout << "Max of 3 integers is: " << maximum<int,int>(int1, int2, int3)<<endl;


  cout << "Input three integer values: ";
  cin >> int1 >> int2 >> int3;
  
//maximum 就必須全部 type 用<> clarify,否則無法使用
  cout << "Max of 3 integers is: " << maximum2<int,int,int,int,int>(int1, int2, int3)<<endl;

  // double double1, double2, double3;

  //   cout << "Input three double values: ";
  // cin >> double1 >> double2 >> double3;

  // cout << "Max of 3 doubles is: " << maximum(double1, double2, double3);

  return 0;
}