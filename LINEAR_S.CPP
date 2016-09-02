#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],i,n,e,flag=0;
	clrscr();
	cout<<"enter the no of elements \n";
	cin>>n;
	cout<<"enter the lements \n";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the search element : ";
	cin>>e;
	for(i=0;i<n;i++)
	{
	       if(a[i]==e)
		{
			flag=1;
		       cout<<" element found at"<<i+1;
		       break;
		}
	}
	if(flag==0)
	cout<<"element not found";
}
