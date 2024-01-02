#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    if(st.size() == qu.size())
    {
        bool flag = true;
        while (!qu.empty())
        {
            if(qu.front() != st.top()) flag = false;
            st.pop();
            qu.pop();
        }
        if(flag) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";

    return 0;
}
