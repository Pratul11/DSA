#include<bits/stdc++.h>
using namespace std;
vector<int>prevSmaller(vector<int> &A) {
    vector<int>G;
    for(int i=0;i<A.size();i++) {
        bool flag = false;
        int j = i-1;
        while(j>=0) {
            if(A[i] > A[j]) {
                G.push_back(A[j]);
                flag = true;
                break;
            }
            j--;
        }
        if(flag == false){
            G.push_back(-1);
        }
    }
    return G;
}
 

int main()
{
    vector<int>a={1};
    vector<int>ans = prevSmaller(a);
    for(auto it: ans) {
        cout<<it<<" ";
    }
    return 0;
}