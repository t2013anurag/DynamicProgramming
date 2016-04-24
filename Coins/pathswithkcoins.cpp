/*Created by Anurag*/

#include<bits/stdc++.h>
# define r 3
# define c 3
# define max_k 1000

using namespace std;
int dp[r][c][max_k]; 

int pathCountRecursion(int mat[][c], int m, int n, int k)
{
	// Base Cases
	if(m < 0 || n < 0)
		return 0;
	if(m == 0 && n == 0)
		return (k == mat[m][n]);

	// If we have solved the sub-problem
	if(dp[m][n][k] != -1)
		return dp[m][n][k];

	// Solving the sub-problem(m, n) can be reached either through (m-1, n) or
    // through (m, n-1)
    dp[m][n][k] = pathCountRecursion(mat, m-1, n, k-mat[m][n])
    + pathCountRecursion(mat, m, n-1, k-mat[m][n]);

    return dp[m][n][k];
}

//This function  initializes dp[][][] and calls pathCountRecursion
int pathCount(int mat[][c], int k)
{
	memset(dp, -1, sizeof dp);
	return pathCountRecursion(mat, r-1, c-1, k);
}

int main() 
{
	int k;
	cout<<"Enter the number of coins ";
	cin>>k;
	// cout<<"Enter the number of rows and columns ";
	// cin>>r>>c;
	int mat[r][c];
//  int mat[R][C] = { {1, 2, 3},
//                     {4, 6, 5},
//                     {3, 2, 1}
//                 };
	cout<<"Enter the elements ";
	for(int i = 0; i<r; i++)
		for(int j=0; j<c; j++)
		{
			cin>>mat[i][j];
		}
	cout<<"Number of paths "<<pathCount(mat, k);
	return 0; 
}