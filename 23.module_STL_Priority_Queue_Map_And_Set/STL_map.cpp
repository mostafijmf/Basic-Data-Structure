#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Sakib"] = 75;
    mp["Tamim"] = 28;
    mp["Mash"] = 100;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
