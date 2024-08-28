#include <bits/stdc++.h>
using namespace std;
int sum = 0;
void fun(int i, int n)
{
    if (i > n)
    {
        return;
    }
    sum += i;
    fun(i + 1, n);
}
int fun1(int i, int n)
{
    if (i > n)
    {
        return sum;
    }
    sum += i;
    sum = fun1(i + 1, n);
    return sum;
}
int fun2(int i)
{
    if (i == 0)
    {
        return sum;
    }
    sum += i;
    sum = fun2(i - 1);
    return sum;
}
int fun3(int i, int sum)
{
    if (i == 0)
    {
        return sum;
    }
    return fun3(i - 1, sum + i);
}
int main()
{
    // fun(0, 5);
    // cout << sum;
    cout << fun3(10, 0);
    return 0;
}












