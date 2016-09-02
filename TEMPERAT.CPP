#include<iostream.h>
public class Temperature
{
	double celcius,farenheit;
	public Temperature()
	{
		celcius=0;
		farenheit=o;
	}
	public void setCelcius(double celcius)
	{
		this.celcius=celcius;
		farenheit=(celcius*(9/5))+32;
	}
	public void setFarenheit(double farenheit)
	{
		this.farenheit=farenheit;
		celcius=(farenheit-32)*5/9;
	}
	public double getCelcius()
	{
		return celcius;
	}
	public double getFarenheit()
	{
		return farenheit;
	}

int main()
{
	Temperature t=new Temperature();
	double celciusTemp = t.setCelcius(celciusTemp);
	cout<<"f="+t.getFarenheit();
	double farenheitTemp=t.setFarenheit(farenheitTemp);
	cout<<"c="+t.getCelcius();
}
};