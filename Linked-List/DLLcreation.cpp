#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node *back1)
    {
        data = data1;
        next = nullptr;
        back = back1;
    }
};

Node *DLLcreation(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp1 = new Node(arr[i], temp);
        temp->next = temp1;
        temp = temp1;
    }
    return head;
}

void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *L1 = DLLcreation(arr);
    printDLL(L1);
    return 0;
}