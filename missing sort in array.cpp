#include<iostream>
#include<algorithm>
using namespace std;
int smallest_missing(int arr[],int start,int end)
{
	if(start > end)
	return end+1;
	if(start!=arr[start])
	return start;
	int mid=(start+end)/2;
	if(arr[mid]==mid)
	return smallest_missing(arr,mid+1,end);
	return smallest_missing(arr,start,end);
}
int main()
{
	int arr[100],n,i;
	cout<<"enter the elements";
	cin>>n;
	cout<<"\nenter the elements";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"original array";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"";
	int answer;
	answer=(arr,0,n-1);
	cout<<answer;
	return 0;
}
