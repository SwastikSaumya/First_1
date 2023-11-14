#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a = 5, b=4 ;
    //header files 
    // there are two types of header files 
    // 1. system header files :- it comes with compiler 
    // eg:- #include iostream
    // 2. user define header file like (this.h)  but we have to define first teh this.h

    // # the site name is cpp refirence is used to find multile header files which is updated 

    cout<<"types of operators :"<<endl;

    cout<<"1. airthimic operator :"<<endl;
    
    cout<<"a + b is :"<<a+b<<endl;
    cout<<"a - b is :"<<a-b<<endl;
    cout<<"a * b is :"<<a*b<<endl;
    cout<<"a / b is :"<<a/b<<endl;
    cout<<"a % b is :"<<a%b<<endl;

    cout<<"2. assignment operator "<<endl;
    char d='d';

    cout<<"the value of d is :"<<d<<endl;

    cout<<"3. comperision operaor "<<endl;

    // the answer will always thorugh in binary forms :
    cout<<"equal to :"<<(a==b)<<endl;
    cout<<"not equal to  :"<<(a!=b)<<endl;
    cout<<"greater than  :"<<(a>b)<<endl;
    cout<<"greater than equal to :"<<(a>=b)<<endl;
    cout<<"smaller than :"<<(a<b)<<endl;
    cout<<"smaller than equal to  :"<<(a>=b)<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"logical operator :"<<endl;

    cout<< "the value of ((a+b)&&(a-b)) is :"<<((a==b)&&(a>b))<<endl;
    // here the both operation have to true to make the optput 1.

    cout<<"the vale of ((a==b)||(a<b)) is :"<<((a==b)||(a>b))<<endl;
    // here the name of the operator is or
    // is will terninate the output when the 1 value have  to get true :

    cout<<"the value of (!(a==b)) is : "<<(!(a==b))<<endl;
    // this will reverse the optput is the statement is true it will give output as false in binary formate ..




    return 0;

    
}