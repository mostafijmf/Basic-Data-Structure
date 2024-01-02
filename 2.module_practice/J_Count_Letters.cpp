#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> c(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int value = s[i] - 'a';
        c[value]++;
    }
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] != 0)
        {
            cout << char(i + 'a') << " : " << c[i] << endl;
        }
    }

    return 0;
}
