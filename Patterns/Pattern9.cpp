#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    //upper half
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //lower half
    for (int i = n; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
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