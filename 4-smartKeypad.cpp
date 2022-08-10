#include<bits/stdc++.h>
using namespace std;
unordered_map<int,string> hm;
void fun(int n,vector<int> arr,int i,string s)
{
	if(i==n)
	{
		cout<<s<<endl;
		return;
	}
	for(int j=0;j<hm[arr[i]].size();j++)
		fun(n,arr,i+1,s+hm[arr[i]][j]);
}
int main()
{
	
	hm.insert({2,"abc"});
	hm.insert({3,"def"});
	hm.insert({4,"ghi"});
	hm.insert({5,"jkl"});
	hm.insert({6,"mno"});
	hm.insert({7,"pqrs"});
	hm.insert({8,"tuv"});
	hm.insert({9,"wxyz"});

	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)cin>>arr[i];

	fun(n,arr,0,"");
}