#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>>ans;
    int size = original.size();
    if(size != m*n) {
        return ans;
    }
    int k = 0;
    for(int i=0;i<m;i++) {
        vector<int>subAns;
        for(int j=0;j<n;j++) {
            subAns.push_back(original[k]);
            k++;
        }
        ans.push_back(subAns);
    }
    return ans;    
}
int main()
{
    vector<int>original = {1,2,3,4};
    int m =2,n=2;
    vector<vector<int>>ans;
    ans = construct2DArray(original, m, n);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}