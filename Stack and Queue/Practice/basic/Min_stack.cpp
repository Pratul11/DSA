#include<bits/stdc++.h>
using namespace std;
class minStack {
    stack<pair<int,int>>st;
    public:
    void Push(int x) {
        int min;
        if(st.empty()){
            min = x;
        }
        else {
            min = st.top().second;
            if(min>x){
                min = x;
            }
        }
        st.push({x,min});
    }
    void pop() {
        st.pop();
    }
    int top() {
        return (st.top().first);
    }
    int min() {
        return st.top().second;
    }

};
int main()
{
    minStack m;
    m.Push(4);
    m.Push(3);
    m.Push(2);
    m.Push(1);
    cout<<"Top element is " <<m.top()<<endl;
    cout<<"Min element is " <<m.min()<<endl;
    m.pop();
    cout<<"Min element is " <<m.min()<<endl;
    return 0;
}