
#include <iostream>
using namespace std;
int Fibonacci(int num);
int fibo(int n);
double dFibonacci(int num);

int main(){

//non recursive Fibonacci

int largestIntFib = 0;
int counter = 2;
int fib = Fibonacci(2);

while(fib>largestIntFib){
    counter++;
    largestIntFib = fib;
    fib = Fibonacci(counter);
  
}
  cout << "The int type largest is " << largestIntFib << endl;
    cout << " which is " << counter << " sequence."<<endl;

    double dLargest = 0;
    counter = 2;
    double dFib = dFibonacci(2);

    while (dFib > dLargest)
    {
        counter++;
        dLargest = dFib;
        dFib = dFibonacci(counter);
    }
    cout << "The double type largest is " << dLargest << endl;
    cout << " which is " << counter << " sequence."<<endl;

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

double dFibonacci(int num){
     if(num<=1) {
        return num;
    }

    double fibo =1;
    double fiboPrev =1;
    for(int i=2;i<num;i++){
        double tmp =fibo;
        fibo+= fiboPrev;
        fiboPrev = tmp;
    }
    
    return fibo;
}