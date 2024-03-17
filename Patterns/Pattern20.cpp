#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    // upper half
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (; j <= 2 * n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    

    // lower half
    for (int i = 5; i >= 1; i--)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (; j <= 2 * n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}