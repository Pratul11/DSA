#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void Preorder(Node* root, vector<int>&ans) {
    if(root == NULL) {
        return;
    }
    ans.push_back(root->data);
    Preorder(root->left,ans);
    Preorder(root->right,ans);
} 
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    vector<int>ans;
    Preorder(root,ans);
    return 0;
}
