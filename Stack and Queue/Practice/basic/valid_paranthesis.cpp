#include<bits/stdc++.h>
using namespace std;
int main() {
    string str = "[{{()}}]";
    stack<char>st;
    for(int i=0;i<str.size();i++) {
        if(str[i] == '[' || str[i] == '{' || str[i] == '(') {
            st.push(str[i]);
        }
        else {
            if((str[i] == ']' && st.top() == '[' ) ||
               (str[i] == '}' && st.top() == '{' ) ||
               (str[i] == ')' && st.top() == '(' )) {
                st.pop();
               }
        }
    }
    if(st.empty()) {
        cout<<"Valid";
    }
    else {
        cout<<"Invalid";
    }
}