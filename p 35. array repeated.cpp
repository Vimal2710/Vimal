#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main()
{
	int a[]={1,2,3,1};
	int n=4,i=0,j,temp=0;
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n\n";
	
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			a[i+1]=a[i+2];
		}
	}
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
