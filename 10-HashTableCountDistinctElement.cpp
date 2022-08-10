#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n)
{
	unordered_set<int> ht;
	for(int i=0;i<n;i++) 
		ht.insert(arr[i]);
	return ht.size();
}
void countFrequency(int arr[],int n)
{
	unordered_map<int,int> hm;
	for(int i=0;i<n;i++)
		hm[arr[i]]++;
	for(auto i:hm)
		cout<<i.first<<':'<<i.second<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	// cout<<fun(arr,n);
	countFrequency(arr,n);
	return 0;
}