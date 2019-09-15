#include<iostream>
using namespace std;
void selectsort(int arr[])
{
	int n=sizeof(arr);
	for(int i=0;i<n-1;i++)
	{
		int iMin=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[iMin])
			iMin=j;
		}
			int temp=arr[iMin];
			arr[iMin]=arr[i];
			arr[i]=temp;
			
	}
	
}
int main()
{
	int arr[]={6,8,4,12,2,10};
	selectsort(arr);
	for(int i=1;i<6;i++)
	cout<<arr[i]<<" : ";
	
}
