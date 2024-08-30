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
Node *LinkedList(vector<int> arr)
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
void printLL(Node *head)
{
    cout<<"Printing LL"<<endl;
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *InsertAtBeg(Node *head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
    return head;
}
Node *InsertAtEnd(Node *head, int value)
{
    Node *temp = new Node(value);
    Node *mover = head;
    while (mover->next != nullptr)
    {
        mover = mover->next;
    }
    mover->next = temp;
    return head;
}
int main()
{
    Node* A1;
    priority_queue<int>pq;
    vector<int> arr1 = {1, 4, 5};
    vector<int> arr2 = {1, 3, 4};
    vector<int> arr3 = {2, 6};
    Node *L1 = LinkedList(arr1);
    Node *L2 = LinkedList(arr2);
    Node *L3 = LinkedList(arr3);
    // printLL(L1);
    // printLL(L2);
    // printLL(L3);
    vector<Node*>list;
    list.push_back(L1);
    list.push_back(L2);
    list.push_back(L3);
    for(int i=0;i<list.size();i++) {
       Node *temp = list[i];
        while (temp)
        {
            cout << temp->data << " ";
            pq.push(temp->data);
            temp = temp->next;
        }
    }
    cout<<endl;
    while(!pq.empty()) {
        Node *temp = new Node(pq.top());
        temp->next = A1;
        A1 = temp;
        pq.pop();
    }
    cout<<endl;
    printLL(A1);
    // Node *temp = A1;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;
    return 0;
}