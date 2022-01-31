#include<bits/stdc++.h>
using namespace std;

// naive: use auxillary array
void removeDuplicate(int arr[],int n)
{
	int temp[n];
	temp[0]=arr[0];
	int res=1;

	for(int i=0;i<n;i++)
	{
		if(temp[res-1]!=arr[i])
		{
			temp[res]=arr[i];
			res++;
		}
	}

	for(int i=0;i<res;i++)cout<<temp[i]<<'\t';
}


// optimised : on same array
int removeDuplicate2(int arr[],int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	// removeDuplicate(arr,n);
	int res=removeDuplicate2(arr,n);

	for(int i=0;i<res;i++)cout<<arr[i]<<'\t';

}