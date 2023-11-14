#include<iostream>
#include<conio.h>

 using namespace std;

int sum(int a , int b ){
    int c = a +b;
    return c;
}
    // usnig swap 
    void swap(int a,int b){
    int temp = a;
    a = b;
    b= temp;
    }
    // we have uses twe swap bou is donent work beascue the value will store in the swap ..

    // call by reference usnig pointers   .....................
    void swappointer(int* a , int* b)
    {
        int temp = *a;  // * it means we are taking the address of the swappointer..
        *a = *b;
        *b = temp;
    }

    // call by reference using c++ referencce variable .
    void swapReferencevar(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }


 int main()
 {
     int x =4 , y = 6 ;
     cout<<"the sum of x and y is "<<sum(x,y)<<endl;
     cout<<"the value of axis :  "<<x<<"  the valuer of y is  "<<y<<endl;
     swap(x,y); // it dosent work 
     cout<<"the swap(int x and y will be )  the value of x is  "<<x<<"  the value of y  is  "<<y<<endl;


    //  swappointer(&x,&y); // we have to use this to execute this to tell the compiler we are usnig the swappointer with & because we are using the address of the data ..

    //  cout<<"the value of swappointer of x is  "<<x<<"   the value of y is "<<y<<endl<<endl;


// we can use one at a  time both will not work 

     swapReferencevar(x,y); // swaping using c++ refereence variables ..
     cout<<"we are checking the value using call by reference 2 nd method "<<endl;
     cout<<"the value of x is :  "<<x<<"  the value of y  is "<<y<<endl;


return 0;
}