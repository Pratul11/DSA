#include <bits/stdc++.h>
using namespace std;
// int chalkReplacer(vector<int> &chalk, int k)
// {
//     int i = 0;
//     int n = chalk.size();
//     while (k != 0)
//     {

//         if (k < chalk[i])
//         {
//             return i;
//         }
//         else
//         {
//             k = k - chalk[i];
//             i++;
//             if (i == n)
//             {
//                 i = 0;
//             }
//             // cout << k << " " << i;
//         }
//     }
//     return i;
// }



int chalkReplacer(vector<int> &chalk, int k)
{
    int sum = 0;
    int n = chalk.size();
    for(int i=0;i<n;i++) {
        sum += chalk[i];
    }
    sum = k%sum;
    int i=0;
    while (k != 0)
    {
        if (k < chalk[i])
        {
            return i;
        }
        else
        {
            k = k - chalk[i];
            i++;
            if (i == n)
            {
                i = 0;
            }
        }
    }
    return i;
}
int main()
{
    vector<int> a = {5, 1, 5};
    int k = 22;
    cout << chalkReplacer(a, k);
    return 0;
}