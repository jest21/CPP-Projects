#include<iostream.h>
class sort
{
	int a[100],n;
	public:
	void getdata()
	{
		cout<<"enter the size of array";
		cin>>n;
		cout<<"enter the elements";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	void sorting()
	{
		int temp,min;

		for