#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputLevelOrder()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

vector<int> v;
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
}
int main()
{
    Node *root = inputLevelOrder();
    int k;
    cin >> k;
    inorder(root);
    int l = 0, r = v.size() - 1;
    bool result = false;
    while (l < r)
    {
        int sum = v[l] + v[r];
        if (sum == k)
        {
            result = true;
            break;
        }
        if (sum < k)
            l++;
        if (sum > k)
            r--;
    }

    if (result)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
