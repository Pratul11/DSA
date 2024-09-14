#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& nums) {
    vector<int>ans;
    int max = INT_MIN;
    for(int i=0;i<nums.size()-1;i++) {
        int bitAnd = nums[i] & nums[i+1];
        ans.push_back(bitAnd);
        if(max<bitAnd) {
            max = bitAnd;
        }
    }
    int count = 0;
    for(auto a:nums) {
        if(a == max) {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>a = {1,2,3,4};
    cout<<longestSubarray(a);
    return 0;
}