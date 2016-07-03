#include<iostream.h>
#include<conio.h>
class stack
{
int stk[5],top;
public:
stack()
{
top=-1;
}
void push(int x)
{
if(top>4)
{
cout<<"stack overflow";
return;
}
stk[++top]=x;
cout<<"inserted"<<x;
}
void pop()
{
if (top<0)
{
cout<<"stack underflow";
return;
}
cout<<"deleted"<<stk[top--];
}
void display()
{
if (top<0)
{
cout<<"stack empty";
return;
}
for(int i=0;i<=top;i++)
cout<<stk[i]<<"   ";
}
};
int main()
{
clrscr();
int c,ch;
stack st;
while(1)
{
cout<<"\n 1.push 2.pop 3.display 4.exit \n enter your choice \n:";
cin>>ch;
switch(ch)
{
case 1:cout<<"enter the element \n";
cin>>c;
st.push(c);
break;
case 2:st.pop();
break;
case 3:st.display();
break;
case 4:return 0;
}
}
getch();
}
