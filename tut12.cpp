#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"pointer :"<<endl;
    // pointer is a data type which is used to store the address of the value :
    
    // & ------> (Address of ) operator 
    
    int a = 3;
    int* b = &a;
     cout<<"The address of a is : "<<&a<<endl;
     // here the &a will be give the address of a : here the & is used to dislpay the address ..
     cout<<"The address of a is : "<<b<<endl;
     // here the b is locating the address of the integer 
     // b is storing the address of the a by the &a;

    // * ----> (value  at ) Dereference operator 
    
    cout<<"The value at address b is "<<*b<<endl;
    // here the (*a) here the star is used for the displaying the value stored in the particuler adress ..


// pointer to pointer ..
cout<<"Pointer to Pointer  :"<<endl;

    int** c= &b;
    cout<<"The address of c is "<<&b<<endl;
    // in this also we will get the address of c :
    cout<<"The address of c is :" <<c<<endl;
    // in this we will gwt the address of c:
    cout<<"The address of  b is  :" <<*c<<endl;
    // in this we get the address of b 
    cout<<"The value of c is at address b is : "<<**c<<endl<<endl<<endl;
    // in this the compiler first dereference the address of c and then they dereference the address of the b so we  will  get the value of a::


// practice ..............

int g=5;
int* h= &g;
cout<<"The address of g is :"<<&g<<endl;
cout<<"The address of g is :"<<h<<endl<<endl;

cout<<"the value at g is "<<*h<<endl;

// ppointer to pointer :

int** i =&h;
cout<<"the address of i is "<<i<<endl;
cout<<"the address of i is "<<&h<<endl;
cout<<"The address of  h is "<<&h<<endl;
cout<<"The value of g at adress i is "<<**i<<endl;


  return 0;

}
 
