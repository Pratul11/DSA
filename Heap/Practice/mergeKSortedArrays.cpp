#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>arr = {{1,2,3,4},{2,2,3,4},{5,5,6,6},{7,8,9,9}};
    int k = 4;
    priority_queue<int>pq;
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<k;i++) {
        for(int j=0;j<k;j++) {
            pq.push(arr[i][j]);
        }
    }
    for(int i=0;i<k*k;i++) {
        st.push(pq.top());
        pq.pop();
    }
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    for(auto it:ans) {
        cout<<it<<" ";
    }
    return 0;
}