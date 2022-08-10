// returning height of perticular nodes
#include <bits/stdc++.h>
using namespace std;
int funHelper(int n, unordered_map<int, int> dp)
{
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    else
    {
        if (dp.find(n) != dp.end())
            return dp[n];
    }
    int la = funHelper(n - 1, dp);
    dp[n] = la;
    int lb = funHelper(n - 2, dp);
    dp[n] = lb;
    int lc = funHelper(n - 3, dp);
    dp[n] = lc;
    return la + lb + lc;
}
int fun(int n)
{
    unordered_map<int, int> dp;
    return funHelper(n, dp);
}
int main()
{
    int n = 4;
    cout << fun(n);
}