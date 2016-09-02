#include<iostream.h>
class Age
{
	private:
	int ag;
	public:
       Age(int h)
	{
		ag=h;
	}
	int compare(Age age)
	{
		return this->ag()>age.h();
	)
	private:
	int ag;
};
int main(void)
{
	Age A1(45);
	Age A2(30);
	if(A1.compare(A2))
	{
		cout<<"A2 is smaller than A1 \n";
	)
	else
	{
		cout<<"A2 is equal to or larger than A1 \n";
	}
	return 0;
}}