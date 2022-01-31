#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int index=0;
	for(int i=0;i<n;i++)
		if(arr[index]<arr[i])
			index=i;
	cout<<index;

	return 0;
}