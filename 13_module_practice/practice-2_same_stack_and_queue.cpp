#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    int n1, n2;
    cin >> n1;
    while (n1--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    cin >> n2;
    while (n2--)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    
    if (st.size()==qu.size())
    {
        bool flag = false;
        while (!st.empty())
        {
            if (st.top() != qu.front()) flag = true;
            st.pop();
            qu.pop();
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES";
    }
    else cout << "NO";
    return 0;
}
