#include<iostream>
#include<conio.h>

 using namespace std;
// how to make a boiler plate code :

int main(){
    int i;

    cout<<"break ;"<<endl;
    for(i=0;i<=5;i++)
    {
        if (i==3)
        {
            break;
        }
        cout<<i<<endl;
    }
    // in this the rak will work like we have give the instructon to break the like ;;

    cout<<"continue :"<<endl;
    int c;
    for(c=0;c<=50;c++)
    {
        if(c==5)
        {
            continue;
        }
        cout<<c<<endl;
    }
    // here the continue will work like we are giving the instruction to leave the line and continue from next line ;;

      

return 0;
}


