#include<iostream>
#include<conio.h>

 using namespace std;



      struct teacher 
      {
            int eid;
            char fev;
            float salary ;
      };
      
 int main(){
      //  int marks[4] ={3,5,4,2};
      //  int i;
      //  while (i<4)
      //  {
      //   cout<<"the value of ["<<i<<"] is "<<marks[i]<<endl;
      //   i++;
      //  }
        struct teacher madan ;

        madan.eid = 1;
        madan.fev = 'm';
        madan.salary = 213312;
        
        cout<<"the eid of madam is : "<<madan.eid<<endl;
        cout<<"the fav char of madam is :"<<madan.fev<<endl;
        cout<<"the salary of madam is :"<<madan.salary<<endl;
      






return 0;
}