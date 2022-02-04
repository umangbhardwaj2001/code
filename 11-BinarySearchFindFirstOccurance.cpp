#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n,int x)
{
	int l=0,r=n-1;
	int i=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(arr[mid]==x)
		{
			i=mid;
			break;
		}
		else if(arr[mid]<x) l=mid+1;
		else r=mid-1;
	}
	if(i==-1) return -1;
	while(i>-1&&arr[i]==x) i--;
	return i+1;
}
int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	int x;
	cin>>x;

	cout<<fun(arr,n,x);
}