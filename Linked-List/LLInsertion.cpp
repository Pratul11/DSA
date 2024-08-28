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
    vector<int> arr = {1, 3, 2, 5, 7, 6};
    Node *L1 = LinkedList(arr);
    printLL(L1);
    L1 = InsertAtBeg(L1, 5);
    printLL(L1);
    L1 = InsertAtEnd(L1, 4);
    printLL(L1);
    return 0;
}