#include<iostream>
#include<conio.h>
using namespace std;
int glo = 9;  // it is  a glow for global variable ;
void sum (){
    int g;
    cout<<" the glo in um are :"<<glo<<endl;
    
}

 int main (){

    int glo = 9;
    glo = 15;
    // here we are talking about variable in c++
    int a = 4,b=5;
    cout<<"the value of a is :"<<a<<endl<<"the value of b is :"<<b<<endl;

    // flot 
    float f=4.55;
    cout<<"the value of f is :  "<<f<<endl;

    // char 
    char c='z';
    cout<<"the value of charactor is : "<<c<<endl;
    // it is used to store any value in cahractr 

    double d=7;
    cout<<"the double is: "<<d/2<<endl;

    // bool is used to make any statement true or false ....
    sum();
    cout<<"the value of glo in the int are :" <<glo;
// the majority of glow are in the int first then it will check the file to find all the value in the sum and all .....



    return 0;
}