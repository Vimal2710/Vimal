/*#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	int sum1=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]%2==0 && a[j]%2!=0)
			{
				sum1=sum-a[j];
			}
		}
	}
	cout<<sum1;
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	int sum1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]%2==0 && a[j]%2!=0)
			{
				sum1=sum-a[j];
			}
		}
	}
	cout<<sum1;
	return 0;
}
