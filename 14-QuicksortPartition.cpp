#include <bits/stdc++.h>
using namespace std;
void partition1(int a[], int pivot, int n)
{
	int temp[n];
	int i = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[j] < pivot)
		{
			temp[i] = a[j];
			i++;
		}
	}
	temp[i] = pivot;
	i++;
	for (int j = 0; j < n; j++)
	{
		if (a[j] > pivot)
		{
			temp[i] = a[j];
			i++;
		}
	}
	for (int i = 0; i < n; i++)
		a[i] = temp[i];
}
void partition2(int a[], int n) // Lomuto
{
	// consider last element as pivot element
	int pivot = a[n - 1];
	int index = -1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= pivot)
		{
			index++;
			swap(a[index], a[i]);
		}
	}
	swap(a[index + 1], a[n - 1]);
}
int partition3(int a[], int n) // Hoare
{
	// it put all element smaller than pivot on left and element larger or equal on the right side
	// consider first element as pivot element
	// assume smaller on left and larger on right
	// make to pointer one on left and other on right
	// if hypothesis contradicts swap
	int pivot = a[0];
	int i = -1, j = n;
	while (true)
	{
		do
		{
			i++;
		} while (a[i] < pivot);
		do
		{
			j--;
		} while (a[j] > pivot);
		if (i >= j)
			return j;
		swap(a[i], a[j]);
	}
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int pivot;
	cin >> pivot;
	// partition1(a,pivot,n);
	partition2(a, n);
	// int p = partition3(a, n);
	// swap(a[p], a[0]);
	for (int i : a)
		cout << i << '\t';
	return 0;
}