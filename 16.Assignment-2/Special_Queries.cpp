#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> myQueue1;
    queue<string> myQueue2;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        string name;
        cin >> x;
        if (x == 0)
        {
            cin >> name;
            myQueue1.push(name);
        }
        else
        {
            if (myQueue1.empty())
            {
                myQueue2.push("Invalid");
            }
            else
            {
                myQueue2.push(myQueue1.front());
                myQueue1.pop();
            }
        }
    }
    while (!myQueue2.empty())
    {
        cout << myQueue2.front() << endl;
        myQueue2.pop();
    }
    return 0;
}
