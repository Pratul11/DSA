#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums = {3,2,1,5,6,4};
    int k = 2;
    priority_queue<int>pq;
    for(int i=0;i<nums.size();i++) {
        pq.push(nums[i]);
    }
    while(k>1){
        pq.pop();
        k--;
    }
    cout<<pq.top();
    return 0;
}