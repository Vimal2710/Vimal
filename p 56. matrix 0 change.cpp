#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n][n],ii[n],jj[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		ii[i]=0;
		jj[i]=0;
	}
	cout<<"\n\n=================\n";
	for(i=0;i<n;i++)
	{
		cout<<ii[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<jj[i]<<" ";
	}
	cout<<"\n\n=================\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				ii[i]=1;
				jj[j]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<ii[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<jj[i]<<" ";
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ii[i]==1 || jj[j]==1)
			{
				a[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
