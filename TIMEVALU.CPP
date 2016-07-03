#include<iostream.h>
#include<conio.h>
class time
{
 int m,s;
 public:
 void st()
 {
 cout<<"enter the minutes and second"<<endl;
 cin>>m>>s;
 }
 void ts()
 {
 cout<<"minutes="<<m<<endl;
 cout<<"seconds="<<s<<endl;
 }
 friend time operator +(time,time);
 };
 time operator +(time t1,time t2)
 {
 time t3;
 t3.s=(t1.s+t2.s)%60;
 t3.m=(t1.m+t2.m)+(t1.s+t2.s)/60;
 return t3;
 }
 void main()
 {
 time b1,b2,b3;
 b1.st();
 b2.st();
 b3=b1+b2;
 b3.ts();
 getch();
 }
