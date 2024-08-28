#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>nums, int k) {
    vector<int>ans;
    for(int i=0;i<nums.size()-k+1;i++) {
        int max = 0;
        for(int j=0;j<k;j++) {
            if(max < nums[i+j]) {
                max = nums[i+j];
            }
        }
        ans.push_back(max);
    }
    return ans;
}
int main()
{
    vector<int> a = {4,0,-1,3,5,3,6,8};
    int k = 3;
    vector<int>ans = maxSlidingWindow(a,k);
    for(auto it:ans) {
        cout<<it<<" ";
    }
    return 0;
}