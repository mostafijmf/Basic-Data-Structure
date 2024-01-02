#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2 && myList.size() > v)
        {
            myList.erase(next(myList.begin(), v));
        }

        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
    }

    return 0;
}
