#include <bits/stdc++.h>
using namespace std;
class CountWord
{
public:
    string word;
    int count = 0;
    CountWord(string word, int count)
    {
        this->word = word;
        this->count = count;
    }
};

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s, word;
        getline(cin, s);
        stringstream ss(s);

        map<string, int> mp;
        string maxWord;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxWord = word;
                maxCount = mp[word];
            }
        }
        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
