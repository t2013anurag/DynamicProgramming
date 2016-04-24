# DynamicProgramming

Question 1 Coins: 

    Find minimum number of coins that make a given value.

    Given a value V, if we want to make change for V cents, 
    and we have infinite supply of each of C = { C1, C2, .. , Cm} 
    valued coins, what is the minimum number of coins to make the change?
    
Question 2 Fibonacci:

    All about the fibonacci series. Find the nth number in the series using
    top down and bottom up approach.
    
Question 3 Number of paths with exactly k coins:

    Given a matrix where every cell has some number of coins. Count number 
    of ways to reach bottom right from top left with exactly k coins. 
    We can move to (i+1, j) and (i, j+1) from a cell (i, j).
    Input:  k = 12
        mat[][] = { {1, 2, 3},
                    {4, 6, 5},
                    {3, 2, 1}
                  };
    Output:  2
    There are two paths with 12 coins
    1 -> 2 -> 6 -> 2 -> 1
    1 -> 2 -> 3 -> 5 -> 1
