#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,c;
	getline(cin,a);
	int b,i,j;
	b=a.length();
	for(i=0;i<b;i++)
	{
		if(a[i]!=' ')
		{
			c=c+a[i];
		}
		//if(i==0 || a[i]==' ')
		else
		{
			for(j=c.length();j>=0;j--)
			{
				cout<<c[j];
			}
			cout<<" ";
			c.clear();
		
	}
}
	//c.clear();
	return 0;
}
