#include<iostream.h>
class array
{
	int a[30],n,i,in,po,j;
	public:
	void getdata();
	void display();
	void insert();
	void delet();
};
void array::getdata()
{
	cout<<"enter the size of array";
	cin>>n;
	cout<<"\n enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void array::insert()
{
	int j;
       cout<< "	enter the number to be inserted and position";
       cin>>in>>po;
       for(i=0;i<=n;i++)
       {
	if(i+1==po)
	{
		for(j=n-1;j>=i;j--)
		{

			a[j+1]=a[j];
		}
		n++;
		a[i]=in;
		break;
	}
       }
}
void array::delet()
{
	int fl=0,dl;
	cout<<"enter the element to be deleted";
	cin>>dl;
	for(i=0;i<=n;i++)
	{
		if(a[i]==dl)
		{
			fl=1;
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
			break;
		}
	}
}
void array::display()
{
	cout<<"array ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
void main()
{
	int rp,ch;
	array ar;
	ar.getdata();
	do{
		cout<<"enter your choice : \n 1.insert 2.delete ";
		cin>>ch;
		switch(ch)
		{
			case 1: ar.insert();
				ar.display();break;
			case 2:ar.delet();
				ar.display();break;
			default:cout<<"wrong choice";break;
		}
		cout<<"enter 1 to repeat";
		cin>>rp;
	}while(rp==1);
}