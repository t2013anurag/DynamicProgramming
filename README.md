# DynamicProgramming

Directory 1 Coins: 

    Question 1 : Coins 
    Find minimum number of coins that make a given value.

    Given a value V, if we want to make change for V cents, 
    and we have infinite supply of each of C = { C1, C2, .. , Cm} 
    valued coins, what is the minimum number of coins to make the change?

    Question 2: Number of paths with exactly k coins:

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
    
Directory 2 Fibonacci:

    All about the fibonacci series. Find the nth number in the series using
    top down and bottom up approach.
    
Directory 3 Permutations:

    Count Derangements (Permutation such that no element appears in its original position)
    Input: n = 2
    Output: 1
    For two elements say {0, 1}, there is only one 
    possible derangement {1, 0}
    Input: n = 3
    Output: 2
    For three elements say {0, 1, 2}, there are two 
    possible derangements {2, 0, 1} and {1, 2, 0}
    Input: n = 4
    Output: 9
    For four elements say {0, 1, 2, 3}, there are 9
    possible derangements {1, 0, 3, 2} {1, 2, 3, 0}
    {1, 3, 0, 2}, {2, 3, 0, 1}, {2, 0, 3, 1}, {2, 3,
    1, 0}, {3, 0, 1, 2}, {3, 2, 0, 1} and {3, 2, 1, 0}

