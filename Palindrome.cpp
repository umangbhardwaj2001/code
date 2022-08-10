#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s,int l, int r)
{
	if(l>=r) return true;

/*

	if(s[l]==s[r])
	{
		return isPalindrome(s,l+1,r-1);
	}
	else return false;

*/
	return (s[l]==s[r]&&isPalindrome(s,l+1,r-1));
}
int main()
{
	string s="abcdcba";
	cout<<isPalindrome(s,0,6);
}