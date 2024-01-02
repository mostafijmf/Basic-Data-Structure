#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<char> ar(n, ' ');
    int f = 0, b = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (f == b) ar[n / 2] = 'X';
            else
            {
                ar[f] = '\\';
                ar[b] = '/';
            }
            cout << ar[j];
        }
        ar[f] = ' ', ar[b] = ' ';
        f++, b--;
        cout << endl;
    }

    return 0;
}
