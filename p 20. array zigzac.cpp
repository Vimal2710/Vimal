#include<iostream>
using namespace std;
int main()
{
	int n,i,c;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
			else
			{
				a[i]=a[i];
				a[i+1]=a[i+1];
			}
		}
		else
		{
			if(a[i]<a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
			else
			{
				a[i]=a[i];
				a[i+1]=a[i+1];
			}
		}
	}
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
