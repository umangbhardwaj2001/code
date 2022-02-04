#include<bits/stdc++.h>
using namespace std;
void fun(string s,string c="",int index=0)
{
	if(index==s.length())
		{
			cout<<c<<endl;
			return;
		}
	fun(s,c,index+1);
	fun(s,c+s[index],index+1);
}
int main()
{
	string s;
	cin>>s;

	fun(s);
}