#include <iostream>
using namespace std;

/*
Algorithm Fibonacci
	1) Start the program
	2) Declare function fibo()
	3) Declare static variables fib,i,prev
	4) Read no. of terms to be printed to n
	5) if(i<n) do 
		1) print fib
		2) temp = prev
		3) prev = fib
		4) fib = fib + temp
		5) call fibo()
	6) otherwise end the program
*/

static int fib = 0, i = 0, prev = 0;

void fibo(int limit){
	if (i++ < limit)
	{
		cout << fib << ", ";
		int temp = prev;
		prev = fib;
		fib += temp;
		if (fib == 0)
		{
			fib = 1;
		}
		fibo(limit);
	}
}

int main(){
	int n;
	cout << "\n\tFibonacci Series Printer\nEnter the no. of terms: ";
	cin >> n;
	fibo(n);
}