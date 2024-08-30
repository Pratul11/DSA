#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={7,10,4,3,20,15};
    int k = 3;
    priority_queue<int>pq;
    int n = 0;
    for(int i=0;i<arr.size();i++) {
        pq.push(arr[i]);
        n++;
    }
    n = n - k;
    while(n!=0) {
        pq.pop();
        n--;
    }
    cout<<pq.top();
    return 0;
}