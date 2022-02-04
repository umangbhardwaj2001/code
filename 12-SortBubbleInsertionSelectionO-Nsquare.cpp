#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n) //compare adjacent element
{
	for(int i=0;i<n-1;i++)
	{
		bool swapped=false;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swapped=true;
				swap(arr[j],arr[j+1]);
			}
		}
		if(swapped==false) break;
	}
}
void insertion(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]<arr[i])
		{
			int t=arr[i+1],j=i;
			while(arr[j]>t)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=t;
		}
	}
}

void selection(int arr[],int n) // we find the minimum element and swap it with 1st position
{
	for(int i=0;i<n;i++)
	{
		// find minimum element
		int m=i;
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[m])m=j;
		// swap minimum element with ith position 
		swap(arr[m],arr[i]);
	}
}
int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	bubble(arr,n);
	insertion(arr,n);
	selection(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<'\t';
}