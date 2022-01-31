#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    // naive approach
/************************************************************************/

    // find largest index
    int largest = 0;
    for (int i = 0; i < n; i++)
        if (arr[largest] < arr[i])
            largest = i;

    // find largest again but ignore the largest stored in previous
    // so that this largest would be second largest
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[largest]==arr[i]) continue;
        if(arr[res] < arr[i])
            res = i;
    }

    // if(arr[res]==arr[largest]) cout<<-1;
    // else cout << res;



// optimized approach
/************************************************************************/

    res=-1;
    largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[largest]) continue;
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else
        {
            if(res==-1) res=i;
            else if(arr[i]<=arr[res]) continue;
            else res=i;
        }
    }

    cout<<res;

}