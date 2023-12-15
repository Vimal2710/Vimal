#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	int a[n],c,count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
	if(a[0]<a[n-1]) c=a[0];
	else c=a[n-1];
	cout<<c<<"\n";
	for(i=1;i<n-1;i++)
	{
		if(a[i]<c)
		{
		while(a[i]<c)
		{
			a[i]=a[i]+1;
			count=count+1;
		}
		}
		else
		{
			count=0;
		}
	}
		cout<<count;
	return 0;
}
