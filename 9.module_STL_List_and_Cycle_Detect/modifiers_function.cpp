#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.insert(next(myList.begin(), 3), {100, 200, 300});
    // list<int> newList = {100, 200, 300, 400};
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());
    // vector<int> v = {500, 600, 700, 800};
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 40, 4000);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 10);

    if (it == myList.end())
        cout << "Not found";
    else
        cout << "Found";

    return 0;
}
