#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{

    char ch = 'A';
    for (char i = 1; i <= n; i++)
    {
        for (char j = 1; j <=i; j++)
        {
            cout << ch;
        }
        ch++;
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