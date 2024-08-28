#include<bits/stdc++.h>
using namespace std;

int area(int n,vector<int>h) {
    vector<int>ans;
    for(int i=0;i<n;i++) {
        bool flag = true;
        int ar = h[i];
        int j = i;
        while(flag == true && j<n-1) {
            j++;
            if(h[j] >= h[i]) {
                ar += h[i];
            }
            else {
                flag = false;
            }
        }
        flag = true;
        j=i-1;
        while(flag == true && j>=0) {
            if(h[j] >= h[i]) {
                ar += h[i];
            }
            else {
                flag = false;
            }
            j--;
        }
        ans.push_back(ar);
    }
    return *max_element(ans.begin(), ans.end());
}

int main()
{
    int n =2;
    vector<int>heights = {2,4};
    cout<< area(n,heights);
    return 0;
}