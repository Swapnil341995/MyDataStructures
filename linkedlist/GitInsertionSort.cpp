#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements you want to sort : "<<endl;
	cin>>n;
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		cout<<"Enter the "<<i+1<<" element : "<<endl;
		cin>>arr[i];
	}
	
	for(int i = 1;i < n;i++)
	{
		int key;
		key = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
	
	for(int i = 0;i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
}