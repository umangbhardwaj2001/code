#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>> arr,int i,int j,int k)
{
	// check in row and column
	for(int x=0;x<9;x++)
		if(arr[i][x]==k or arr[x][j]==k)
			return false;
	i = (i/3)*3;
	j = (j/3)*3;
	// check in sub sudoku
	for(int x = i;x<i+3;x++)
	{
		for(int y=j;y<j+3;y++)
			if(arr[x][y]==k)
				return false;
	}
	return true;
}
bool fun(vector<vector<int>> &arr,int i,int j,int n)
{
	if(i==n) return true;
	if(j==n)
		return fun(arr,i+1,0,n);
	if(arr[i][j]==0)
	{
		for(int k = 1;k<=9;k++)
		{
			if(check(arr,i,j,k))
			{
				arr[i][j]=k;
				if(fun(arr,i,j+1,n))
					return true;
				else
					arr[i][j]=0;
			}
		}
		return false;
	}
	else
	{
		return fun(arr,i,j+1,n);
	}
}
int main()
{
	vector<vector<int>> arr;
	for(int i=0;i<9;i++)
	{
		vector<int> temp(9,0);
		for(int j=0;j<9;j++)
			cin>>temp[j];
		arr.push_back(temp);
	}
	bool ans = fun(arr,0,0,9);
	if(ans == false) cout<<"false";
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
			cout<<arr[i][j]<<' ';
		cout<<endl;
	}
}