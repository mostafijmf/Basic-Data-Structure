#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        queue<char> qu;
        string s;
        cin >> s;

        stringstream ss(s);
        char c;
        while (ss >> c)
            st.push(c);

        while (!st.empty())
        {
            if (qu.empty())
            {
                qu.push(st.top());
            }
            else if (st.top() == qu.front())
            {
                qu.push(st.top());
            }
            else
            {
                qu.pop();
            }
            st.pop();
        }

        if (qu.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
