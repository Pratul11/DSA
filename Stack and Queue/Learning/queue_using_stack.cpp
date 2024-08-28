#include<bits/stdc++.h>
using namespace std;
class Queue {
	stack < int > s1,s2;
	public:
		void Push(int x) {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }

		}
        void Pop() {
            s1.pop();
        }
        int Top() {
            return s1.top();
        }
        int Size() {
            return s1.size();
        }
        void printAll() {
            s2 = s1;
            while(!s2.empty()){
                cout<<s2.top()<<" ";
                s2.pop();
            }
        }
};

int main() {
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);
    q.printAll();
    q.Pop();
    q.printAll();
}