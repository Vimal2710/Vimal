/*#include<iostream>
using namespace std;
int main()
{
	int n,b=0;
	cin>>n;
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
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
	int l=0;
	int r=n-1;
	while(l<=r)
	{
	for(i=l;i<r;i++)
	{
		cout<<l<<" "<<i<<" is "<<a[l][i]<<" \n";
	}
	for(i=l;i<r;i++)
	{
		cout<<i<<" "<<r<<" is "<<a[i][r]<<" \n";
	}
	for(i=r;i>=l;i--)
	{
		cout<<r<<" "<<i<<" is "<<a[r][i]<<" \n";
	}
	for(i=r-1;i>l;i--)
	{
		cout<<i<<" "<<l<<" is "<<a[i][l]<<" \n";
	}
	l=l+1;
	r=r-1;
}
	return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
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
	cout<<"\n";
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		for(i=l;i<r;i++)
		{
			cout<<a[l][i]<<" ";
		}
		for(i=l;i<r;i++)
		{
			cout<<a[i][r]<<" ";
		}
		for(i=r;i>=l;i--)
		{
			cout<<a[r][i]<<" ";
		}
		for(i=r-1;i>l;i--)
		{
			cout<<a[i][l]<<' ';
		}
		l=l+1;
		r=r-1;
	}
	return 0;
}
