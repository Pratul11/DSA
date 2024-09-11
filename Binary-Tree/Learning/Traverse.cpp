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
void Inorder(Node* root, vector<int>&ans1) {
    if(root == NULL) {
        return;
    }
    Inorder(root->left,ans1);
    ans1.push_back(root->data);
    Inorder(root->right,ans1);
} 
void Postorder(Node* root, vector<int>&ans2) {
    if(root == NULL) {
        return;
    }
    Postorder(root->left,ans2);
    Postorder(root->right,ans2);
    ans2.push_back(root->data);
} 
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    vector<int>ans,ans1,ans2;
    Preorder(root,ans);
    Inorder(root,ans1);
    Postorder(root,ans2);
    cout<<"Preorder: ";
    for(auto it:ans) {
        cout<<it<<" ";
    }
    cout<<endl<<"Inorder: ";
    for(auto it:ans1) {
        cout<<it<<" ";
    }
    cout<<endl<<"Postorder: ";
    for(auto it:ans2) {
        cout<<it<<" ";
    }
    return 0;
}
