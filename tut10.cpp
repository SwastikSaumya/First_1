#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   cout<<"syntex of loop "<<endl;
   cout<<"for(initillagation ; condation; updatation  )"<<endl<<endl;

   for (int i = 0; i <=5; i++)
   {
    cout<<i<<endl;
   }
   
   cout<<endl;

   cout<<"while loop"<<endl;
   int a=1;
   while (a<=4)
   {
    cout<<a<<endl;
    a++;
   }
   

   cout<<"do-while loop "<<endl;
   int b=1;
   do
   {
     cout<<b<<endl;
     b++;
   } while (b<=8);

   // in the do while loop if the statement will be false then also this will run the one time termination .......


cout<<"making a table of 5 using loop "<<endl;
// int c= 5;
// while (c<=50)
// {
//     cout<<c<<endl;
//     c++*5;
// }


  int c=1;
    do{
        cout<<"6*"<<c<<"="<<c*6<<endl;
        c++;
    }
    while(c<=10);

cout<<"making a table of 12:"<<endl;
int t =1;
do
{
   cout<<"12*"<<t<<"="<<t*12<<endl;
   t++;

} while (t<=10);



cout<<"making  a table of 30"<<endl;
int r;
do
{
  cout<<"30*"<<r<<"="<<r*30<<endl;
  r++;
}
while (r<=20);


// practice >............
cout<<endl<<endl;
int i =1;
cout<<"making the table of 8"<<endl;
do
{

cout<<"8*"<<i<<"="<<i*8<<endl;
i++;
}
while(i<=10);

return 0;

}