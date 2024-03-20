/*
Problem statement
You are given an integer 'n'.
Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

Example:
Input: 'n' = 1634

Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634*/

#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{
    int c = 0, sum = 0;
    int num = n, check = n;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    while (num > 0)
    {
        int rem = num % 10;
        sum += pow(rem, c);
        num /= 10;
    }

    if(sum == check)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
}

int main()
{
    int n;
    cin >> n;
    solution(n);
    return 0;
}