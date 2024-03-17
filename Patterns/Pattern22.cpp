#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i =0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int Index = min(i,j);
            int Index2 = min(2 * n - i - 2, 2 * n - j - 2);
            cout << n - (min(Index,Index2)) << " ";
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