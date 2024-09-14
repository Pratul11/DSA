#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        bool ans = false;
        for (int j = 0; j < words[i].size(); j++)
        {
            ans = false;
            for (int k = 0; k < allowed.size(); k++)
            {
                if (words[i][j] == allowed[k])
                {
                    ans = true;
                    cout << ans << " ";
                    break;
                }
            }
            if (ans == true)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<string> w = {"ad", "bd", "aaab", "baa", "badab"};
    // vector<string>w = {"aaab"};
    string a = "ab";
    cout << countConsistentStrings(a, w);
    return 0;
}