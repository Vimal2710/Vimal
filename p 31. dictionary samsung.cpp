#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	string s,s1,b,a="i, like, sam, sung, samsung, mobile, ice";
	//cout<<a;
	int i,j,n=a.length();
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ' && a[i]!=',') s=s+a[i];
	}
cout<<s<<"\n";
int n1=s.length();
cin>>b;
int n2=b.length();
for(i=0;i<n1-n2+1;i++)
{
	for(j=i;j<i+n2;j++)
	{
		s1=s1+s[j];
	}
	//cout<<s1<<"\n";
	if(s1==b)
	{
		cout<<"true";
		break;
	}
	else s1="";
}
	return 0;
}
