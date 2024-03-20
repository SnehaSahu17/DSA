/*
Problem statement
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 */

#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    // int c = 0, count = 0;
    // if (n == 0 || n == 1)
    //     return 0;
    // if (n == 2)
    //     return 0;
    // else
    // {
    //     for (int i = 2; i < n; i++)
    //     {
    //         for (int j = 1; j * j <= i; j++)
    //         {
    //             if (i % j == 0)
    //                 c++;
    //         }
    //         if (c == 1)
    //             count++;
    //         c = 0;
    //     }
    //     return count;
    // }

    
}

int main()
{
    int n;
    cin >> n;
    cout<<solution(n);
    return 0;
}