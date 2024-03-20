/*
Problem statement
You are given two integers 'n', and 'm'.
Calculate 'gcd(n,m)', without using library functions.

Note:
The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.

Example:
Input: 'n' = 6, 'm' = 4

Output: 2

Explanation:
Here, gcd(4,6) = 2, because 2 is the largest positive integer that divides both 4 and 6.

 */

#include <bits/stdc++.h>
using namespace std;

void solution(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        a = a%b;
        else
        b = b%a;
    }
    if(a==0)
    cout<<b<<endl;
    else
    cout<<a<<endl;
}

int main()
{
    int a,b;
    cin >> a>>b;
    solution(a,b);
    return 0;
}