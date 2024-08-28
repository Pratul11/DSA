#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> arr)
{
    int m = arr.size();
    int n = arr[0].size();
    int ans[n][n];
    for (int i = 0; i < m; i++)
    {
        int k = 4;
        for (int j = 0; j < n; j++)
        {
            ans[j][k] = arr[i][j];
        }
        k--;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4, 5},
                               {16, 17, 18, 19, 6},
                               {15, 24, 25, 20, 7},
                               {14, 23, 22, 21, 8},
                               {13, 12, 11, 10, 9}};
    rotateMatrix(arr);
    return 0;
}