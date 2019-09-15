#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		int value = arr[i];
		int hole = i;
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value;
	}
	
}
int main()
{
	int arr[]={6,8,4,12,2,10};
	insertionsort(arr,6);
	for(int i=0;i<6;i++)
	cout<<arr[i]<<"  ";
}
