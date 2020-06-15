
#include <iostream>
using namespace std;
int Fibonacci(int num);
int fibo(int n);


int main(){

//non recursive Fibonacci

cout<<Fibonacci(3)<<endl;

    return 0;
}

int Fibonacci (int num){


    if(num<=1) {
        return num;
    }

    int fibo =1;
    int fiboPrev =1;
    for(int i=2;i<num;i++){
        int tmp =fibo;
        fibo+= fiboPrev;
        fiboPrev = tmp;
    }
    
    return fibo;

}
