/*Created by : Anurag*/

#include<bits/stdc++.h>

using namespace std;

int minCoins(int[], int, int);

int main() 
{
	int num_coins, tsum;
	cout<<"Enter the number of coins\n";
	cin>>num_coins;
	int coins[num_coins];
	cout<<"Enter the coins value\n";
	for(int i = 0 ; i<num_coins; i++)
		cin>>coins[i];
	cout<<"Enter the sum to achieve\n";
	cin>>tsum;

	cout<<"Minimum number of coins required are :  "<< minCoins(coins, num_coins, tsum) << endl;
}

int minCoins(int coins[], int num_coins, int tsum)
{
	if(tsum == 0)
		return 0;

	int result = INT_MAX;
	
	for(int i = 0; i < num_coins; i++)
	{
		if(coins[i] <= tsum)
		{
			int temp_res = minCoins(coins, num_coins, tsum-coins[i]);
			if(temp_res != INT_MAX && temp_res + 1 < result)
				result = temp_res + 1;
		}
	}
	return result;
}