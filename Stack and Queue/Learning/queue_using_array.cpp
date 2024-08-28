#include<iostream>
using namespace std;
class queue {
        int start;
        int end;
        int *a;
    public:
        queue() {
            a = new int[15];
            start = -1;
            end = -1;
        }
        queue(int max) {
            a = new int[max];
            start = -1;
            end = -1;
        }
        void push(int x){
            if(start == -1){
                start++;
            }
            end++;
            a[end]=x;
        }
        void pop(){
            if(start == end){
                start = -1;
                end = -1;
                cout<<"Queue is now Empty..\n";
            }
            start++;
        }
        int top(){
            return a[start];
        }
        int size(){
            return (end-start+1);
        }
        void printAll(){
            for(int i=start;i<=end;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    queue q;
    q.push(5);
    q.push(3);
    q.push(7);
    q.printAll();
    q.top();
    q.pop();
    q.printAll();
    return 0;
}