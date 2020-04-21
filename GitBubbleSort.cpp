#include<iostream>
using namespace std;

swap(int *a,int *b)
{
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n;
	cout<<"Enter the number of elements you want to sort : "<<endl;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i < n;i++)
	{
	cout<<"Enter the "<<i+1<<" elements : "<<endl;
	cin>>arr[i];
	}
	
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if(arr[j] > arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
	
	for(int i = 0;i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
}