#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    long long id;
    Student(string name, long long id)
    {
        this->name = name;
        this->id = id;
    }
};

class compare
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.name == b.name) return (a.id < b.id);
        else return (a.name > b.name);
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, compare> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        long long id;
        cin >> name >> id;
        Student obj(name, id);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     long long int id;
// };

// bool compare(Student a, Student b)
// {
//     if (a.name.front() < b.name.front())
//         return true;
//     else if (a.name.front() > b.name.front())
//         return false;
//     else
//     {
//         return (a.id > b.id);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Student s[n];
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         long long int id;
//         cin >> name >> id;
//         s[i].name = name;
//         s[i].id = id;
//     }
//     sort(s, s + n, compare);
//     for (int i = 0; i < n; i++)
//     {
//         cout << s[i].name << " " << s[i].id << endl;
//     }

//     return 0;
// }
