#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int l, int h)
{
    int lp = l - 1;
    int hp = h + 1;
    int pivot = arr[l];
    while (true)
    {
        do
        {
            lp++;
        } while (arr[lp] < pivot);
        do
        {
            hp--;
        } while (arr[hp] > pivot);
        if (lp >= hp)
            return hp;
        swap(arr[lp], arr[hp]);
    }
}
void qSort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qSort(arr, l, p);
        qSort(arr, p + 1, h);
    }
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    qSort(arr, 0, n - 1);
    for (int i : arr)
        cout << i << '\t';
}