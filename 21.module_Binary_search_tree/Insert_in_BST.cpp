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

void insert(Node* &root, int x)
{
    // <!-- Step 1 -->
    // if(root == NULL){
    //     root = new Node(x);
    // }

    // if(root->val > x)
    // {
    //     if(root->left == NULL) root->left = new Node(x);
    //     else insert(root->left, x);
    // }
    // else
    // {
    //     if(root->right == NULL) root->right = new Node(x);
    //     else insert(root->right, x);
    // }

    
    // <!-- Step 2 -->
    if(root == NULL) {
        root = new Node(x);
        return;
    }
    if(x<root->val) insert(root->left, x);
    else insert(root->right, x);
    
}

void print(Node* root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
}

int main()
{
    Node* root = inputLevelOrder();
    insert(root, 13);
    insert(root, 16);
    insert(root, 6);
    print(root);

    return 0;
}
