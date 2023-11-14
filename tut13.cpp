#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    cout<<"array "<<endl;
    
    int marks[5] ={45,54,543,24,234};

    cout<<"the value of [0] is :"<<marks[0]<<endl;
    cout<<"the value of [1] is :"<<marks[1]<<endl;
    cout<<"the value of [2] is :"<<marks[2]<<endl;
    cout<<"the value of [3] is :"<<marks[3]<<endl;
    cout<<"the value of [4] is :"<<marks[4]<<endl<<endl;

    // we can also make represent the array like this 
    cout<<"aray ::"<<endl<<endl;
    int mathsmarks[4];
    mathsmarks [0]=2;
    mathsmarks [1]=3542;
    mathsmarks [2]=32543;
    mathsmarks [3]=32345;
// now printing the value ;
cout<<"The mathsmarks of [0] is : "<<mathsmarks[0]<<endl;
cout<<"The mathsmarks of [1] is : "<<mathsmarks[1]<<endl;
cout<<"The mathsmarks of [2] is : "<<mathsmarks[2]<<endl;
cout<<"The mathsmarks of [3] is : "<<mathsmarks[3]<<endl<<endl;

// we can also change the value later when we need;

mathsmarks[1]=34;
cout<<"The value of mathsmarks[1] after change is :"<<mathsmarks[1]<<endl<<endl;

// printing the array using for loop 
cout<<"with for loop :"<<endl;
int a;
for ( a = 0; a < 5; a++)
{
    cout<<"The value of ["<<a<<"] is = "<<marks[a]<<endl<<endl;
}


// // making same from while loop 
// cout<<"making with while loop "<<endl;
//  int marks_1[5]={5,4,5,2};
//    int i;
//    while(i<5)
//    {
//    cout<<"the value of ["<<i<< "] is" <<marks_1[i]<<endl;
//    i++;
// }

// not working in vs code but runnign in the online compiler;

// making same with do_while 
// cout<<"making same for do_while loop :"<<endl;

// int marks_2[4] ={4,3,55,6};
// int t;
// do
// {
//     cout<<"the value of ["<<t<<"] is "<<marks_2[t]<<endl;
//     t++;
// } while (t<5);

// its runnig in online compiler not in vs code 
// dont know why ....

cout<<endl<<endl;
cout<<"pointer aray :"<<endl;

int  marks_3[4] ={54,52,34,23};  
// hera we can also define the marsk_3 and the we can write the code ..

int*r= marks_3 ;
// we can chnage the *r to nay variable as per 
cout<<"the value of (*p) is "<<*r <<endl;
cout<<"The value of *(p+1) is :"<<*(r+1)<<endl;
cout<<"The value of *(p+2) is :"<<*(r+2)<<endl;
cout<<"The value of *(p+3) is :"<<*(r+3)<<endl<<endl;
// here the value of the *p will be the first value of the marks_3
// the *(p+1) will be the next one and all will move as we all increase the number ::
cout<<"the value of r is "<<*(r)<<endl;// 54   
// in this the value will be the first one 
cout<<"The value of *(r++) is "<<*(r++)<<endl;// 54
// in this the valur of r will print and the  the next will store 
cout<<"The value of *(++r ) is :"<<*(++r)<<endl;// 34
// in this the the value will first pre increment and then it will print the output ;;

    return 0;

}

