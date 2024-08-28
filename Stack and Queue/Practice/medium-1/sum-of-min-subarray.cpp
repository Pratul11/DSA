#include<bits/stdc++.h>
using namespace std;
int minSub(vector<int>a) {
    int sum =0;
    for(int i=0;i<a.size();i++) {
        vector<int>subArray;
        for(int j=i;j<a.size();j++) {
            subArray.push_back(a[j]);
            int min = INT_MAX;
            for(auto it:subArray) {
                if(it<min) {
                    min = it;
                }
            }
            sum += min;
        }
        
    }
    return sum;
}
int main() {
    vector<int> a = {11,81,94,43,3};
    cout<<minSub(a);
}