#include<bits/stdc++.h>
using namespace std;

// naive
void fun1(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n-i-1;j++)
			if(arr[j]==0) swap(arr[j],arr[j+1]);
}

// efficient
void fun2(int arr[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[c]);
			c++;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	fun2(arr,n);

	for(int i=0;i<n;i++)cout<<arr[i]<<'\t';
	return 0;
}