// inline function  , default argument , constant argument ..
#include<iostream>
#include<conio.h>
using namespace std;

 inline int product(int a , int b)
{

return a*b;
  /* 
  not recomneded to use the static function with inline function ..

   static int c = 0; // this extance only ones 
   c = c+1;   // next time the function will run and the value of c will retaoned 
    return a*b+c;

   // when we use this line the static will fixed the value of product and add from last number to give the optput 
// eg the produc is 13 the next will be 14,15,16 .. so no 
*/
}
    float moneyrecived(int currnetmoney , float factor= 1.04)
    {
        //the compelsory argument will be in the left ..
        return currnetmoney*factor;
    }


/*
constant argunents 

int strlen(const char *p){

}

we can ust the to tell the compiler that the value interen in the const should not be get changed ..

*/

int main (){
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    cout<<"the product of a and b is :-  "<<product(a,b)<<endl;
    cout<<"the product of a and b is :-  "<<product(a,b)<<endl;
    cout<<"the product of a and b is :-  "<<product(a,b)<<endl<<endl<<endl;



    // default argument :
    int money = 100000;
    cout<<"the curent money is "<<money<<"you will get "<<moneyrecived(money)<<"after one year" <<endl<<endl;
// in below line we are changing the percentile according to us .. 
    cout<<"the current money is :-  "<<money<<" you will get 10% intrest after one year you will get  "<<moneyrecived(money , 1.1)<<endl;


    return 0;
}