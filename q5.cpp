#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int v)
    {
        val = v;
        left = nullptr;
        right = nullptr;
    }
};

void insert(Node *root, int val)
{
    // is val == -1, treat it as nullptr
    if (val == -1)
        return;
    if (val < root->val)
    {
        if (root->left == nullptr)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == nullptr)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

void inorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
        return;
    inorder(root->left, arr);  // left
    arr.push_back(root->val);  // root
    inorder(root->right, arr); // right
}

int kthSmallest(Node *root, int k)
{
    vector<int> arr;
    inorder(root, arr);
    return arr[k - 1];
}

int main()
{
    int n, k;
    cin >> n;
    Node *root = nullptr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (root == nullptr)
            root = new Node(val);
        else
            insert(root, val);
    }
    cin >> k;
    cout << kthSmallest(root, k);
}
