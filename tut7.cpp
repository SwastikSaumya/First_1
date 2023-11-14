#include<iostream>
#include<conio.h>
using namespace std;
int c= 45;
int main (){

    //*************built in data types *************
    int a ,b;
    cout<<"enter the value of a:"<<endl;
     cin>>a;
    cout<<"entre the value of b:"<<endl;
    cin>>b;
    cout<<"the sum of a and b is :"<<a+b<<endl; 



    cout<<"importing value from global variable :"<<::c<<endl;
    // when we have to import value from the global variable we have to use :: colloan ..


    cout<<"lets know about size of float :"<<endl<<endl;

// *******************float,double, long double  literals  ****************
    float d= 54.342 ;
    long double e =  45.342  ;

    cout<<"the value of float is:"<<d<<endl;
    cout<<"the value of long double  is:"<<e<<endl<<endl;

    cout<<"the size  of (42.5) is :"<<sizeof(42.5)<<endl;
    cout<<"the size  of (42.5f) is :"<<sizeof(42.5f)<<endl;
    cout<<"the size  of (42.5F) is :"<<sizeof(42.5F)<<endl;
    cout<<"the size  of (42.5l) is :"<<sizeof(42.5l)<<endl;
    cout<<"the size  of (42.5L) is :"<<sizeof(42.5L)<<endl;


// here the default value contain 8 bit and the f contain 4 bits and the long double contain 12 bits 



//*******************refirence variables**************

float f=455;
float & g=f;
cout<<f<<endl;
cout<<g<<endl;

// here the reference variable is used to chang the name of any one like if we  call anyone with different name ..
// but the persion is same in all caes ...



//***********************typecasting *********************
// it is uesd to change the data type  into integer to float ..
cout<<endl<<endl;
float x= 5.666;
cout<<"always use the data type first then the value of float .."<<endl;
cout<<"the value of ((float)x) is :"<<((float)x)<<endl;
cout<<"the value of ((int)x) in int is :"<<((int)x)<<endl;

// we can ues this to make the integer into float and float into int value ....

    return 0;

}