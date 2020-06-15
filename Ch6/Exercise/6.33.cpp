

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip();

int main(){
    int tailNum =0;
    int headNum = 0;
    srand(time(0));

    for(int i=0;i<1000;i++) {
        if(flip()==0) {
            cout<<"Tail"<<endl;
            tailNum++;  
        }else{
            cout<<"Head"<<endl;
            headNum++;
        }
    }
    cout<<"Total tail :"<<tailNum<<endl;
    cout<<"Total head :"<<headNum<<endl;

    return 0;
}

int flip(){

    // for(int i=0;i<10;i++)
        // cout<<rand()<<endl;
   

   return rand()%2;
}