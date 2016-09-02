#include<iostream.h>
#include<conio.h>
class array
{
	int a[100],n,term,j,i;
	public:
	void getdata();
	void display();
	void append(array,array);

};
void array::getdata()
{
	cout<<"enter the size of array";
	cin>>term;
	cout<<"\n enter the elements";
	for(i=0;i<term;i++)
	{
		cin>>a[i];
	}
}
void array::display()
{
	cout<<"array ";
	for(i=0;i<term;i++)
	cout<<a[i]<<" ";
}
void array::append(array ar1,array ar2)
{
	int i=0,j=0,k=0;
	term=ar1.term+ar2.term;
	while(i<ar1.term)
	{
		a[i]=ar1.a[j];
		j++;
		i++;
	}
	while(k<ar2.term)
	{
		a[i]=ar2.a[k];
		k++;
		i++;
	}
}
void main()
{
	array ar1,ar2,ar3;
	clrscr();
	ar1.getdata();
	ar2.getdata();
	cout<<"1st array";
	ar1.display();
	cout<<"2nd array";
	ar2.display();
	cout<<"array after appending \n";
	 ar3.append(ar1,ar2);
	ar3.display();
}
