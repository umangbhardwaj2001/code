#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void fun(int n,string input,string output,int i)
{
	if(i==n)
	{
		ans.push_back(output);
		return;
	}
	for(int j=i;j<n;j++)
	{
		swap(input[i],input[j]);
		fun(n,input,output+input[i],i+1);
	}
}
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	fun(n,s,"",0);
	sort(ans.begin(),ans.end());
	for(string a : ans)
		cout<<a<<endl;
}