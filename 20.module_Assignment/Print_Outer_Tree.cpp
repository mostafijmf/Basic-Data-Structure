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
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if (root) q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

vector<int> v;
void leafNodes(Node *root)
{
    if (root == NULL) return;
    leafNodes(root->left);
    if(root->left == NULL && root->right) leafNodes(root->right);
    // v.push_back(root->val);
    cout << root->val << " ";
}
void rightNodes(Node *root)
{
    if (root == NULL) return;
    cout << root->val << " ";
    // v.push_back(root->val);
    rightNodes(root->right);
    if(root->right == NULL && root->left) rightNodes(root->left);
}

int main()
{
    Node *root = inputLevelOrder();
    if(root->left) leafNodes(root->left);
    // if(root) v.push_back(root->val);
    if(root) cout << root->val << " ";
    if(root->right) rightNodes(root->right);

    // for(int val:v) cout << val <<" ";
    
    return 0;
}
