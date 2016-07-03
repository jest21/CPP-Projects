#include<iostream.h>
int main()
{
  int y,d,w,m;
  cout<<"enter the number of days";
  cin>>d;
  y=d/365;
  m=d/30;
  w=d/7;
  d=d%7;
  cout<<"\n years: "<<y<<"\n months: "<<m<<"\n weekd: "<<w<<"\n days: "<<d;
  return 0;
}

