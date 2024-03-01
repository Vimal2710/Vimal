#include<iostream>
using namespace std;
int ca2(int a[],int s1,int s2)
{
	int i,n=6;
	cout<<s1<<" "<<s2<<"\n";
	for(i=0;i<n;i++)
	{
		if(a[i]==s1)
		{
			cout<<"[ "<<i<<" ,";
		}
		if(a[i]==s2)
		{
			cout<<" "<<i<<" ]";
		}
	}
}
int ca1(int a[],int val,int s)
{
	int i,n=6,s1,s2;
	for(i=0;i<n;i++)
	{
		if(a[i]+val==s)
		{
//			cout<<"ca1 is true "<<a[i]<<"\n";
			ca2(a,a[i],val);
			return 1;
		}
	}
//	cout<<"\n";
}
int ca(int a[],int sum,int s)
{
	int i,n=6,ret=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==sum)
		{
//			cout<<"ca is "<<a[i]<<" ";
			ret=ca1(a,a[i],s);
		}
	}
//	cout<<"ret:"<<ret<<"\n";
	if(ret==1) return 1;
	else return 0;
}
int main()
{
	int a[] = {1,5,3,2,4,6,7,8,9};
	int i,n=6,sum=0,ret=0;
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n";
	int s=11;
	for(i=0;i<n;i++)
	{
		sum=s-a[i];
		ret=ca(a,sum,s);
		if(ret==0)
		{
			ret = ca(a,sum,s);
		}
		else{
			break;
		}
//		cout<<ret<<" ";
//		ca(a,sum,s);
//		cout<<sum<<" "<<s<<"\n";
		sum = 0;
	}
	return 0;
}
