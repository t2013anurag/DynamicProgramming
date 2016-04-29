#include<bits/stdc++.h>

// Time complexity O(n) and space complexity O(n);
using namespace std;

int countDer(int n) 
{
	int der[n+1];
	//Base cases
	der[0] = 1;
	der[1] = 0;
	der[2] = 1;

	for(int i= 3; i<= n; i++)
		der[i] = (i-1)*(der[i-1] + der[i-2]);

	return der[n];
}

int main()
{
	int n;
	cout<<"Enter a number \n";
	cin>>n;
	cout<<"The number of derangements are "<<countDer(n)<<endl;
	return 0;
}