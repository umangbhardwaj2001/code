#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    /*
    if (arr[i]>arr[j]) then store arr[j] in temp variable
    then right shift all emements [a[i],a[j])
    then a[i]=temp;
    */
    for (int i = l, j = m + 1; i <= m, j <= r; i++)
    {
        if (arr[i] > arr[j])
        {
            int t = j, temp = arr[j];
            while (t > i)
            {
                arr[t] = arr[t - 1];
                t--;
            }
            arr[t] = temp;
            j++;
        }
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\t';
}