#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if(c == '^') {
        return 3;
    }
    else if(c == '/' || c == '*') {
        return 2;
    }
    else if(c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

void infixToPrefix(string s) {
    stack<int>st;
    string result;
    string temp;
    for(int i=0;i<s.size();i++) {
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result += c;
        }
        else if(c == '(') {
            st.push('(');
        }
        else if(c == ')') {
            while (st.top() != '(') {
                temp = st.top();
                temp += result;
                result = temp;
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout<<result<<endl;
}

int main()
{
    return 0;
}