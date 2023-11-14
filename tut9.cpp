#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"we are talking about if-else statement , if-else ledder , switch case "<<endl;
    // if_else statement 
    cout<<"if-else-if-else statement "<<endl;
    int age ;
    cout<<"Enter yor age :"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"you are under 18"<<endl;
    }
    else if (age==18)
    {
        cout<<"you are 18  and can be allowed "<<endl;
    }
    
    else
    {
        cout<<"you are elligible for this "<<endl<<endl;
    }


    cout<<"switch case statement "<<endl;
    int agee;
    cout<<"Enter your friends age "<<endl;
    cin>>agee;
    switch (agee)
    {
    case 18:
        cout<<"your frineds age is 18"<<endl;

        break;
    case 20:
    cout<<"your friends age is 22"<<endl;
    break;    
    
    default:
    cout<<"no age are matched :"<<endl;
        break;
    }
    
// the if else statement is used to find the no between any no 
// the switch case will be used for the particuler case ststement .


    return 0;

    
}