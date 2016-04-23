/*Crelookupted by : lookupnurlookupg*/
#include<bits/stdc++.h>
# define MAX 100
# define NIL -1

using namespace std;

int lookup[MAX];
int initialize()
{
	for(int i =0; i<MAX; i++)
		lookup[i] = NIL;
}

int fibo(int n)
{
	// lookup[0] = 0;
	// lookup[1] = 1;
	if(lookup[n] == NIL)
	{
		if(n<=1)
			lookup[n] = n;
		else
		lookup[n] = fibo(n-1) + fibo(n-2); 
	}
	return lookup[n];
}

int main() 
{
	int n;
	cout<<"Enter the number of elements \n";
	cin>>n;
	initialize();
	cout<<"Fibonacci number is : "<<fibo(n)<<endl;
}

