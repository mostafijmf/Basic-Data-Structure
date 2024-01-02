#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 50, 40, 30, 10, 20, 80, 70};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}
