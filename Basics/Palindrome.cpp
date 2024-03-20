/*
Problem statement
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 */

#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{   
    long long int num = n;
    long long int rev = 0;
    if(n<0)
    cout<<"false"<<endl;
    else
    {
        while (n != 0)
        {
            long long int rem = n % 10;
            rev = (rev * 10) + rem;
            n /= 10;
        }
        
        if (rev == num)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    solution(n);
    return 0;
}