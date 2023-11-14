#include<iostream>
#include<conio.h>

 using namespace std;

int factorial (int n) 
{
    if (n<=1)
    {
        return 1;
    }
    
    return n*factorial(n-1);

}


/*
how the compiler will run the factorial 

step to compile the factorial of (4)

factorial (4) = 4 * 3 factorial 
factorial (4) = 4 * 3 *2 factorial 
factorial (4) = 4 * 3 *2 * 1 factorial 

*/



// fibonacic sequence :
 int fib(int f)
 {
    if (f<2)
    {
        return 1;
    }
    return fib(f-2) + fib(f-1);
 }


/* 
     how does the fabonaccic will run ..

    it will repeat the value again and again ..
      

*/
 int main(){
    // 6! = 6*5*4*3*2*1
    // 0! = 1 by defination 
    // !1 = 1 by defination 
    // !n = n * (n-1)! 
// (!) is the simbool of factorial 

    int a;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    // cout<<"The factorial of "<< a<<"   is :"<<factorial(a)<<endl;   this fi for factorial ...

    cout<<"the fibonaccic sequence at " <<a<<"  is :"<<fib(a)<<endl;

 
return 0;
}