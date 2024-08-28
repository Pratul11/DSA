#include<iostream>
using namespace std;
struct stackNode {
    int data;
    stackNode *next;
    int size;
    stackNode(int d) {
        data = d;
        next = NULL;
    }
};
struct stack {
    stackNode *top;
    int size;
    stack() {
        top = NULL;
        size = 0;
    }
    void Push(int x) {
        stackNode *element = new stackNode(x);
        element -> next = top;
        top = element;
        size++;
    }
    void Pop() {
        if(top == NULL) {
            cout<<"Stack is already empty...";
        }
        stackNode *temp = top;
        top = top-> next;
        delete temp;
        size--;
    }
    void printStack() {
        stackNode * current = top;
        while (current != NULL) {
            cout << current -> data << " ";
            current = current -> next;
        }
    }
};
int main() {
    stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.printStack();
}