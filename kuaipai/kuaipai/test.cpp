#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>

using namespace std;

const int N = 10010;

int arr[N];
void my_sort(int arr[] , int l,int r)
{
	if(l >= r)return ;
	int x = arr[(l+r)/2],i = l-1,j = r+1;
	while(i < j)
	{
		do ++i; while(arr[i] < x);
		do --j; while(arr[j] > x);
		if(i < j)swap(arr[i],arr[j]);
	}
	my_sort(arr,l,j);
	my_sort(arr,j+1,r);
}
int main()
{
	int n;
	cin >> n;
	
	for(int i = 0;i<n;i++)cin >> arr[i];
	
	my_sort(arr,0,n-1);
	
	for(int i = 0;i<n;i++)printf("%d ",arr[i]);
	return 0;
} 