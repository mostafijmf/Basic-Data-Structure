#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] == a[i + 1])
            flag = true;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
