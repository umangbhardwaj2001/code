#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int l, int h)
{
    int index = l - 1;
    int pivot = arr[h];
    for (int i = l; i < h; i++)
    {
        if (arr[i] < pivot)
        {
            index++;
            swap(arr[index], arr[i]);
        }
    }
    swap(arr[index + 1], arr[h]);
    return index + 1;
}
void qSort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qSort(arr, l, p - 1);
        qSort(arr, p + 1, h);
    }
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    qSort(arr, 0, n - 1);
    for (int i : arr)
        cout << i << '\t';
}