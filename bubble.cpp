#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int a=arr.length;
	for(int k=0;k<n-1;k++)
	for(int i=0;i<n-k-1;i++)
	{
		if(arr[i]>arr[i+1]) //compare the next if greater then swap
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
			
		}
	}
}
int main()
{
	int arr[]={6,8,4,12,2,10};
	bubblesort(arr,6);
	for(int i=0;i<6;i++)
	cout<<arr[i]<<"  ";
}
