#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],i,n,e,flag=0,temp,start,end,mid,j;
	clrscr();
	cout<<"enter the no of elements \n";
	cin>>n;
	cout<<"enter the elements \n";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the search element : ";
	cin>>e;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	start=0;
	end=n-1;
	mid=(start+end)/2;
	for(i=0;i<=n;i++)
	{

		if(a[i]==e)
		{
			cout<<"element found at"<<i+1;
			flag=1;
			break;
		}
		else if(a[mid]<e)
		{
			end=mid+1;
		}
		else if(a[mid]>e)
		{
			start=mid;
		}

	}
	if(flag==0)
		cout<<"not found";
}