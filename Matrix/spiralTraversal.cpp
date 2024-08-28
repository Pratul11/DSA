#include <bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int>> a)
{
    int top = 0, left = 0, right = 4, bottom = 4;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << a[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << a[i][left] << " ";
        }
        left++;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4, 5},
                               {16, 17, 18, 19, 6},
                               {15, 24, 25, 20, 7},
                               {14, 23, 22, 21, 8},
                               {13, 12, 11, 10, 9}};
    printMatrix(arr);
    return 0;
}