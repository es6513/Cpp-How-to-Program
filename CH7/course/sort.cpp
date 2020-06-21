

#include <iostream>
#include <iomanip>

using namespace std;

void insertionSort(int [], int);

int main(){

  const int arraySize = 10;
  int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

  cout << "Unsorted array:\n";
  for (int i = 0; i < arraySize; i++)
    cout << setw(4) << data[i];

  insertionSort(data, arraySize);

  cout << "Sorted array:\n"; 
   for (int i = 0; i < arraySize; i++)
    cout << setw(4) << data[i];

}


void insertionSort(int a[],int arraySize){
    int insert;

    for (int i = 1; i < arraySize;i++){
    insert = a[i];

    for (int j = i-1; j >= 0;j--){
      if(a[j]>insert){
        a[j + 1] = a[j];
        a[j] = insert;
      }
    }

    // 用 while

    // int position = i;

    // while(i>=0&&a[position-1]>insert){
    //   a[position] = a[position - 1];
    //   a[position - 1] = insert;
    //   position--;
    // }
  }
}