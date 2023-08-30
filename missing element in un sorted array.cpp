#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *a,n,n1,i,sum=0,sum1=1,res;
	cin>>n;
	n1=n+1;
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	sum1=n1*(n1+1)/2;
	res=sum1-sum;
	cout<<sum<<" "<<sum1<<" "<<res;
	return 0;
}
