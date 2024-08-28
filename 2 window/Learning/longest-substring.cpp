#include<bits/stdc++.h>
using namespace std;
void longestSubstring(string a) {
    int n = a.size();
    int c = 1;
    for(int i=1;i<n;i++) {
        int x = i-1;
        while(x>=0) {
            if(a[x] != a[i]) {
                c++;
                x--;
            }
        }
    }
}
int main()
{
    string s = "abcabcdd";
    longestSubstring(s);
    return 0;
}