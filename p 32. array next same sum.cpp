#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0,s1,l=0;
	n=9;
	int a[n],s[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int r=n-1;
	for(i=0;i<n;i++)
	{
		s1=i;
		if(a[i]==a[i+1])
		{
			s[l]=a[i]+a[i+1];
			cout<<"l is "<<l<<" and i is "<<i<<" and answer s[l] is "<<s[l]<<"\n";
			i=s1+1;
			//if(a[i]!=a[i+1]) s[l+1]=a[i];
			l++;
			count=count+1;
		}
		else if(a[i]!=a[i+1] && a[i]!=0)
		{
			s[l]=a[i];
			cout<<"l is "<<l<<" and i is "<<i<<" and answer s[l] is "<<s[l]<<"\n";
			l++;
			count=count+1;
		}
	}
	for(i=0;i<count;i++)
	{
		cout<<s[i]<<" ";
	}
	for(i=0;i<n-count;i++) cout<<0<<" ";
//cout<<count;
	return 0;
}
