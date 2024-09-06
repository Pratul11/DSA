#include<bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    int l =0,r=0;
    while(l<s.size() && r<g.size()){
        if(s[l]>=g[r]){
            r++;
        }
        l++;
    }
    return r;        
}
int main()
{
    vector<int>a = {1,5,3,3,4};
    vector<int>b = {4,2,1,2,1,3};
    cout<<findContentChildren(a,b);
    return 0;
}