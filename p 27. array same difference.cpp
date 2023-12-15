#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,c=0,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	int b=a[1]-a[0];
	cout<<b<<" \n";
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]==b)
		{
			cout<<a[i]<<" "<<a[i+1]<<" ";
		}
	}
	return 0;
}
