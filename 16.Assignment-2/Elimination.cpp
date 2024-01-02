#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<char> qu1;
        queue<char> qu2;
        string s;
        cin >> s;

        stringstream ss(s);
        char c;
        while (ss >> c)
        {
            qu1.push(c);
        }

        while (!qu1.empty())
        {
            if (qu2.empty())
            {
                qu2.push(qu1.front());
            }
            else if (qu1.front() == '1' && qu2.front() == '0')
            {
                qu2.pop();
            }
            else
            {
                qu2.push(qu1.front());
            }
            qu1.pop();
        }

        if (qu2.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
