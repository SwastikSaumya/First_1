#include<iostream>
#include<conio.h>
using namespace std;

struct employ
{
    /* data */
    int eid;
    char favchar;
    float salary;
};


 union money
 {
    /* data */
    int rice;
    char car;
    float pounds;

 };
 

int main ()
{
    struct employ harry;
    
    harry.eid = 1;
    harry.favchar = 'a';
    harry.salary = 450000000;

    cout<<"the employ id of harry is :"<<harry.eid<<endl;
    cout<<"the  favchar of harry is :"<<harry.favchar<<endl;
    cout<<"the salary  of harry is :"<<harry.salary<<endl<<endl<<endl;
    
    struct employ shubham;
    shubham.eid = 2;
    shubham.favchar = 'b';
    shubham.salary = 399990900;

    cout<<"the employ id of shubham is "<<shubham.eid<<endl;
    cout<<"the favchar of shubham is :"<<shubham.favchar<<endl;
    cout<<"the salary of shubham is :"<<shubham.salary<<endl<<endl<<endl;


    struct employ vipul;
    vipul.eid = 3;
    vipul.favchar ='v';
    vipul.salary = 4324897;

    cout<<"the employ id of vipul is "<<vipul.eid<<endl;
    cout<<"the favchar of vipul is "<<vipul.favchar<<endl;
    cout<<"the salary of vipul is "<<vipul.salary<<endl;



    // cout<<"we are printing the value of rice = "<<m1.car<<endl;

    struct employ hero;
    hero.eid = 43;
    hero.favchar = 'r';
    hero.salary = 4323;

    cout<<"the emloy id of the hero is  "<<hero.eid<<endl;

cout<<"union"<<endl;
union money m1;

m1.rice = 23;
m1.car = 'r'; 

cout<<"uniom "<<m1.rice<<endl;




// in union we can only declear one value at a time ..

cout<<"Enums"<<endl;
enum meal{breakfast , lunch,diner};

cout<<"the value at breakfast is :"<<breakfast<<endl;
cout<<"the value of lunch is :"<<lunch<<endl;
cout<<"the value of diner is :"<<diner<<endl;

// in this the eunm is basically used to make the code more readibiality  
// it will locate the address position of the element;
// it will automatically arranged in the sequence form .....

    

    



    return 0;

}


