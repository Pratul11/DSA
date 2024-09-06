#include<bits/stdc++.h>
using namespace std;
bool isNStraightHand(vector<int>&hand, int groupSize) {
    int n = hand.size();
    if(n % groupSize) {
        return false;
    }
    sort(hand.begin(), hand.end());
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) {
        mp[hand[i]]++;
    }
    for (auto x : mp) {
    cout << x.first << x.second << " "; 
    }
    mp[hand[4]]--;
    cout<<endl;
    for (auto x : mp) {
    cout << x.first << x.second << " "; 
    // cout << x.first << " " << x.second << endl; 
    }
    return true;
}
int main()
{
    vector<int>hand = {1,2,3,4,5,6,7,8,9};
    int groupSize = 3;
    cout<<isNStraightHand(hand, groupSize);
    return 0;
}