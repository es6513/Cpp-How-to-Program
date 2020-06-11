

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

  const int responseSize = 20;
  const int frequencySize = 6;

  int reponses[responseSize] = {2, 3, 4, 1, 2, 5, 1, 2, 1, 3, 3, 5, 5, 4, 1, 2, 5, 3, 1, 2};

  int frequency[frequencySize] = {};

  for (int answer = 0; answer < responseSize;answer++){
    frequency[reponses[answer]]++;
  }

  cout << "Rating" << setw(15) << "Frequency" << endl;

  for (int rating = 1; rating < frequencySize;rating++){
    cout << setw(6) << rating << setw(15) << frequency[rating] 
    << endl;
  }
      cout << frequency[0];

}