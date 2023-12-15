#include<iostream>
using namespace std;
int main()
{
	int n,i,eq,sum=0;
	cin>>n;
	int a[n],sum1=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n%2!=0) eq=n/2+1;
	else eq=n/2;
	for(i=1;i<eq;i++)
	{
		sum=sum+a[i];
	}
	for(i=eq+1;i<=n;i++)
	{
		sum1=sum1+a[i];
	}
	if(sum==sum1) cout<<eq;
	else cout<<"1";
	return 0;
}
