#include <bits/stdc++.h>
using namespace std;
bool fun(vector<int> arr, int target, int i)
{
    if (target == 0)
        return true;
    if(i==arr.size())
        return false;
    bool a1 = fun(arr, target, i+1);
    bool a2 = fun(arr, target - arr[i], i+1);
    return a1 or a2;
}
int main()
{
    vector<int> arr = {10, 12, 15, 6, 19, 20};
    int target = 20;
    cout << fun(arr, target, 0);
    cout<<endl<<z;
}