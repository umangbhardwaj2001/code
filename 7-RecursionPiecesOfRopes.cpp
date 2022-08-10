// https://www.geeksforgeeks.org/maximum-number-segments-lengths-b-c/

#include <bits/stdc++.h>
using namespace std;
int fun(int n, int a, int b, int c)
{
	if (n == 0)
		return 0;
	if (n < 0)
		return -1;
	int res = max(max(fun(n - a, a, b, c), fun(n - b, a, b, c)), fun(n - c, a, b, c));
	if (res == -1)
		return -1;
	return res + 1;
}

int fun2(int n,int a,int b,int c)
{
	if(n==0) return 0;
	if(n<0) return -1;
	int na=fun(n-a,a,b,c);
	int nb=fun(n-b,a,b,c);
	int nc=fun(n-c,a,b,c);
	int res=max(max(na,nb),nc);
	if(res==-1) return -1;
	return res+1;
}
int main()
{
	int n;
	int a, b, c;
	cin >> n >> a >> b >> c;
	cout << fun(n, a, b, c);
}