#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int n=a.length();
	int i,b=1,s,count=0;
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			count=count+1;
		}
			if(count>=b) cout<<a[i+1];
	}
	return 0;
}
