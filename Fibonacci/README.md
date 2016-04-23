# Dynamic Programming
# Fibonacci

Question 1 : Tabulation 

The tabulated program for a given problem builds a table in bottom up fashion and returns the last entry from table.

    int fib(int n)
	{
	  int f[n+1];
	  int i;
	  f[0] = 0;   f[1] = 1; 
	  for (i = 2; i <= n; i++)
	      f[i] = f[i-1] + f[i-2];
	 
	  return f[n];
	}

Question 2 : Memoization
	
The memoized program for a problem is similar to the recursive 
	version with a small modification that it looks into a lookup 
	table before computing solutions. We initialize a lookup array 
	with all initial values as NIL. Whenever we need solution to a 
	subproblem, we first look into the lookup table. If the 
	precomputed value is there then we return that value, 
	otherwise we calculate the value and put the result in lookup
	table so that it can be reused later.

	int fib(int n)
	{
	   if (lookup[n] == NIL)
	   {
	      if (n <= 1)
	         lookup[n] = n;
	      else
	         lookup[n] = fib(n-1) + fib(n-2);
	   }
	 
	   return lookup[n];
	}
