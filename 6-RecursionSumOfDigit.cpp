#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
	if(n==0) return 0;
	return fun(n/10)+n%10;
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
}