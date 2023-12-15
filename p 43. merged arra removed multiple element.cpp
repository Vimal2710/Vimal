#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int ca(int s[],int n)
{
	int i,count=0;
//	cout<<"\n";
//		for(i=0;i<n;i++)
//		{
//			cout<<s[i]<<" ";
//		}
	for(i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			count=1;
			s[i+1]=s[i+2];
		}
	}
	if(count==1) 
	{
		n--;
		return n;
	}
	else 
	{
		n=n;
		cout<<"\n the remaining array is:";
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		return 0;
	}
	
		
}
int main()
{
	int a[]={1,2,5,3,9,7,5};
	int b[]={2,8,6,1};
	int n1=7,n2=4;
	int i,j,temp=0;
	cout<<"array 1 has:";
	for(i=0;i<n1;i++) cout<<a[i]<<" ";
	cout<<"\n";
	cout<<"array 2 has:";
	for(i=0;i<n2;i++) cout<<b[i]<<" ";
	cout<<"\n";
	sort(a,n1+a);
	cout<<"array 1 after sorting:";
	for(i=0;i<n1;i++) cout<<a[i]<<" ";
	cout<<"\n";
	sort(b,n2+b);
	cout<<"array 2 after sorting:";
	for(i=0;i<n2;i++) cout<<b[i]<<" ";
	cout<<"\n";
	int s[n1+n2];
	cout<<"the merged array is:";
	for(i=0;i<n1;i++)
	{
		s[i]=a[i];
	}
//	for(i=0;i<n1;i++)
//	{
//		cout<<s[i]<<" ";
//	}
	cout<<"\n";
	int l=0;
	for(i=n1;i<n1+n2;i++)
	{
		//cout<<"i is "<<i<<" and b is "<<b[l]<<"\n";
		s[i]=b[l];
		l++;
	}
	cout<<"\n";
	for(i=0;i<n1+n2;i++)
	{
		cout<<s[i]<<" ";
	}
	sort(s,s+(n1+n2));
	int n=n1+n2,n11;
	for(i=0;i<n;i++)
	{
		if(n11==0) break;
		else
		{
			n11=ca(s,n);
			n=n11;
		}
	}
	return 0;
}
