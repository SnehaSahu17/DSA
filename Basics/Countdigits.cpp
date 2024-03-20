/*
Problem statement
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.

Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.*/

#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{
    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem != 0)
        {
            if (n % rem == 0)
            {
                count++;
            }
        }
        n = n / 10;
    }
    cout << count << endl;
}

int main()
{
    int n;
    cin >> n;
    solution(n);
    return 0;
}