#include<iostream>
using namespace std;
int main()
{
	int i,a[]={1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<n<<" \n";
	a[n-1]=a[n-1]+1;
	cout<<a[n-1]<<"\n";
	for(i=n-1;i>=0;i--)
	{
		if(a[i]==9 && n==1)
		{
			a[i]=0;
			a[i+1]=1;
			n++;
		}
		else
		{
			a[i]=a[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
