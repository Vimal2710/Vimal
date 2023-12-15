/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseword(string &a)
{
	string b;
	int c,i,j;
	c=a.length();
	for(i=c-1;i>=0;i--)
	{
		if(a[i]!=' ')
		{
			b=b+a[i];
		}
		if(a[i]==' ' || i==0)
		{
			for(j=b.length()-1;j>=0;j--)
			{
				cout<<b[j];
			}
			cout<<" ";
			b="";
		}
	}
	
}
int main()
{
	string a;
	getline(cin,a);
	reverseword(a);
	cout<<"*";
	return 0;
}*/
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverse(string a)
{
	
}
int main()
{
	string a;
	getline(cin,a);
	reverse(a);
}*/
#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	string a,c;
	getline(cin,a);
	int n,i,j;
	n=a.length();
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=' ')
		{
			c=c+a[i];
		}
		if(a[i]==' ' || i==0)
		{
			for(j=c.length()-1;j>=0;j--)
			{
				cout<<c[j];
			}
			cout<<" ";
			c="";
		}
	}
	return 0;
}
