#include<iostream>
#include<conio.h>
using namespace std;

// function prototype ;;;;;:::::::::::::::
// tpye function-name (arguments )      // syntex of a function prototype ;;;;
// int sum(int a , int b);  >-- accepted 
// int sum (int a , b);   >--- not accepted 
    int sum (int , int );    // >>--- accepted ..
// void g(void);      >>-- accepted    we use this insted of cout fnction ..
    void g();    // >>-  accepted      the void in g () is optional ..

 
int main() 
{
    int num1,num2 ;
    cout<<"enter value of num 1: "<<endl;
    cin>>num1;
    cout<<"enter value of num 2:"<<endl;
    cin>>num2;

    cout<<endl<<" the sum of a and b is "<<sum(num1,num2)<<endl;

    // num 1 and num2  are  a actual parmetive pointer 
    g();  // we can use this insted of cout and we have to write the code like 
    
    // void g(){
    //     code in this want to print instred of cout ..
    // and we have to use the g(); to print the statement ..
    // }
    
// its a concept of a function and we will write here and make the .
// in this we basically assing the function to make the compiler ready to solve this type of questions ;
// we first defint the function and the we will write the code 

// this is a pre-defined function 
//           int sum(int a , int b){
    //         int c = a+b;
    //        return c;
    //        }


   

    return 0;

} 

int sum(int a , int b){
    int c = a+b;
    return c;
    }

void g() {
    cout<<"hello"<<endl;
    cout<< "good morning"<<endl;
    cout<<"we can use the g() insted of cout function "<<endl;
}
// here we are writing the voidg()  to use this function insted of cout function ..


// function prptotype will bbasically give the assuarity to urun the code you will get the sum ..
// actual prptotype is like we are directly entrint the value 

// formal protopype means we are writng the code after the instruction .