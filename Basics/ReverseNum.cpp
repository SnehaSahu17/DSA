/*
Problem statement
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 */

#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{
    long long int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    if (rev > INT_MAX || rev < INT_MIN)
    cout<<0<<endl;

    else    
    cout<<rev<<endl;
}

int main()
{
    int n;
    cin >> n;
    solution(n);
    return 0;
}