#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int lvl(Node *root) {
    int level = 0;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i=0;i<size;i++){
            Node *temp = q.front();
            q.pop();
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }
        level++;
    }
    return level;

}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->right->left = new Node(4);
    root->right->right = new Node(6);
    root->right->left->left = new Node(5);
    root->right->left->left->right = new Node(7);
    cout<<lvl(root);
    return 0;
}