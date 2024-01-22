#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        set<int> st;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        for (auto it = st.begin(); it != st.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
