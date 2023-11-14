#include<iostream>
#include<conio.h>
#include<iomanip>
// iomanip is ued for call the setw function  ..... 
using namespace std;
int main ()
{
    int a = 5;
    cout<<"the value of a was :"<<a<<endl;
     a = 66;
    cout<<"the value of a is :"<<a<<endl;
    // we can declear the value of a many times 
    // and the output will give according to the precidence ;;
    // but in second time we not have to write in or something ellse we simpply have to write the a=no 
    const int b = 5 ;
    cout<<"the value of b is :"<<b<<endl<<endl;
    // but we cant change the value of b because we have assigned the value of b as (const int ) its measn it cant be changed ...


    cout<<"Manipulator in c++"<<endl<<endl;
    int c=43,d=342,e=2332,f= 43776;
    cout<<"the value of c is :"<<setw(6)<<c<<endl;
    cout<<"the value of d is :"<<setw(6)<<d<<endl;
    cout<<"the value of e is :"<<setw(6)<<e<<endl;
    cout<<"the value of f is :"<<setw(6)<<f<<endl<<endl;
    // we can use sewt to make the number in sequence way to help us in clear view..
    
    cout<<"operator precidence"<<endl<<endl;
    int g= 2,h=4;
    int i =((g*5) +(h*5));
    cout<<"the value of i is :"<<i<<endl;
    i=((((g*5)+h)-45)+56);
    cout<<"the value of i is (we are taking i as second time and the precidence will be the nearest one ) :"<<i<<endl;
    // we use this to simplify the this type of calculation 
    

    return 0;

}

