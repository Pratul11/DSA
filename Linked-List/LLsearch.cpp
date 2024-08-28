#include <bits/stdc++.h> // Don't know why its not working but code is correct.
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
int search(Node *head, int element) // One way to search the element
{
    int ans = 0;
    Node *temp = head;
    while (temp)
    {
        if (temp->data == element)
        {
            ans = 1;
        }
    }
    return ans;
}
int checkifPresent(Node *head, int desiredElement) // TUF way to search an element
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == desiredElement)
            return 1;
        temp = temp->next;
    }

    return 0;
}
int main()
{
    vector<int> arr = {1, 3, 2, 5, 7, 6};
    Node *L1 = LinkedList(arr);
    printLL(L1);
    int ans = search(L1, 1);
    int ans1 = checkifPresent(L1, 2);
    cout << ans;
    cout << ans1;
    return 0;
}