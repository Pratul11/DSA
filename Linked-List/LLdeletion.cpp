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
Node *DeleteAtLast(Node *head)
{
    Node *temp = head;
    Node *temp1 = temp;
    while (temp->next != nullptr)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = nullptr;
    return head;
}
Node *DeleteAtBeg(Node *head)
{
    head = head->next;
    return head;
}
int main()
{
    vector<int> arr = {1, 3, 2, 5, 7, 6};
    Node *L1 = LinkedList(arr);
    printLL(L1);
    L1 = DeleteAtLast(L1);
    printLL(L1);
    L1 = DeleteAtBeg(L1);
    printLL(L1);
    return 0;
}