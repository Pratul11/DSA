#include<bits/stdc++.h>
using namespace std;
// vector<int> decToBinary(int n)
// {
//     // int binaryNum[32];
//     vector<int> binaryNum;
//     int i = 0;
//     while (n > 0) {
//         binaryNum.push_back( n % 2);
//         n = n / 2;
//         i++;
//     }
//     return binaryNum;
// }
// int minBitFlips(int start,int goal) {
//     vector<int>startArr = decToBinary(start);
//     vector<int>goalArr = decToBinary(goal);
//     int count = 0;
//     int n;
//     if(startArr.size()>goalArr.size()){
//         n = startArr.size();
//     }
//     else{
//         n = goalArr.size();
//     }
//     for(int i=0;i<n;i++) {
//         if(startArr[i]!=goalArr[i]) {
//             count++;
//         }
//     }
//     return count;
// }


void minBitFlips(int start,int goal) {
    int xorr = start ^ goal;
    cout<<xorr;
    int count = 0;
    while(xorr > 0) {
        count += xorr & 1;
        cout<<count<<" ";
        xorr>>=1;
    }
}
int main()
{
    int start = 10,goal = 7;
    minBitFlips(start,goal);
    return 0;
}

// 011 100
// 1010 0111
//  1101

// Important ques bit manipulation.
