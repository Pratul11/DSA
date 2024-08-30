#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={20, 15, 26, 2, 98, 6};
    int N = 6;
    vector<int>::iterator it;
    vector<int>ans,sorted;
    for(int i=0;i<N;i++) {
        ans.push_back(arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=1;i<N;i++){
        if(ans[i]!=ans[i-1]) {
            sorted.push_back(ans[i-1]);
        }
        if(i == N-1){
            sorted.push_back(ans[i]);
        }
    }
    int a;
    for(int i=0;i<N;i++) {
        it = find(sorted.begin(),sorted.end(), arr[i]);
        int a = it - sorted.begin() + 1;
        
    }
    
    return 0;
}