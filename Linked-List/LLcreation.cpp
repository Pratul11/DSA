#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *ConvertArr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void PrintLL(Node *head)
{
    Node *mover = head;
    while (mover)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 6, 3};
    Node *L1 = ConvertArr2LL(arr);
    PrintLL(L1);
    return 0;
}