/*
Problem statement
ou are given an integer ‘n’.
Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.

Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5.
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.
 */

#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{
    // long long int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //             sum += j;
    //     }
    // }
    // cout<< sum;

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }
    cout << sum;
}

int main()
{
    int n;
    cin >> n;
    solution(n);
    return 0;
}