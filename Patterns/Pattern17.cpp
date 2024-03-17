#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        char k = 'A';
        for (; j <= n; j++)
        {
            cout << k;
            k++;
        }
        k--;
        for (; j <= n + i - 1; j++)
        {
            cout << --k;
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