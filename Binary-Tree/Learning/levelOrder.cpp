#include<bits/stdc++.h>
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
vector<vector<int>> levelOrder(Node *root) {
    queue<Node*>q;
    vector<vector<int>>ans;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int>lvl;
        for(int i=0;i<size;i++) {
            Node * temp = q.front();
            q.pop();
            lvl.push_back(temp->data);
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }
        ans.push_back(lvl);
    }
    return ans;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>>ans = levelOrder(root);
    for(auto it:ans){
        for(auto ita :it){
            cout<<ita<<" ";
        }
    }
    return 0;
}