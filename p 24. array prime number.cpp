#include<iostream>
using namespace std;
int ca(int a)
{
	int i,count=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0) count=count+1;
	}
	if(count==2)
	{
		cout<<a;
		count=0;
	}cout<<" ";
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		ca(a[i]);
	}
	return 0;
}
