#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int temp[], int  low,
		int mid, int high)
{
	int i, j, k;
	int invc = 0;

	i =  low;
	j = mid;
	k =  low;
	while ((i <= mid - 1) && (j <= high)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
			invc+=(mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];
	while (j <= high)
		temp[k++] = arr[j++];

	for (i =  low; i <= high; i++)
		arr[i] = temp[i];

	return invc;
}
int _mergeSort(int a[], int t[], int low, int high)
{
	int mid, invc = 0;
	if (high > low) {

		mid = (low + high) / 2;

		invc += _mergeSort(a, t,low, mid);
		invc += _mergeSort(a,t, mid + 1, high);
		invc += merge(a,t,low, mid + 1, high);
	}
	return invc;
}
int main()
{
	int n ;cin>>n;int a[n],t[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout << _mergeSort(a,t,0,n-1)<<endl;
}
