// print leaf-node;
// condition for leaf-node
// op==cl

#include<bits/stdc++.h>
using namespace std;
void funHelper(int n,int op,int cl,string s)
{
	if(cl>op) return;
	if(op==n and op==cl)
	{
		cout<<s<<endl;
		return;
	}
	if(op<n)funHelper(n,op+1,cl,s+"(");
	if(cl<n)funHelper(n,op,cl+1,s+")");
}
void fun(int n)
{
	string s = "";
	funHelper(n,0,0,s);

}
int main()
{
	int n;
	cin>>n;
	fun(n);
}