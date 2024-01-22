#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    while (n--)
    {
        long long int a;
        cin >> a;
        v.push_back(a);
        int current_index = v.size() - 1;
        while (current_index != 0)
        {
            int parent_index = (current_index - 1);
            if (v[parent_index] < v[current_index])
                swap(v[parent_index], v[current_index]);
            else
                break;
            current_index = parent_index;
        }
    }
    // for(int val:v) cout << val << " ";
    int q = 0;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            long long int val;
            cin >> val;
            v.push_back(val);
            int current_index = v.size() - 1;
            while (current_index != 0)
            {
                int parent_index = (current_index - 1);
                if (v[parent_index] < v[current_index])
                    swap(v[parent_index], v[current_index]);
                else
                    break;
                current_index = parent_index;
            }
            
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << v.back() << endl;
            }
        }
        else if (c == 1)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << v.back() << endl;
            }
        }
        else
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                v.pop_back();
                if (v.empty())
                    cout << "Empty" << endl;
                else
                    cout << v.back() << endl;
            }
        };
    }

    return 0;
}
