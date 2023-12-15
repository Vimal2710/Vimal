/*#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	string a,b;
	char temp;
	cin>>a;
	int n,i,x=0;
	n=a.length();
	for(i=0;i<n;i++)
	{
		if(isalpha(a[i]))
		{
			temp=a[i];
		}
		else if(!isalpha(a[i]))
		{
			x=(x*10)+(a[i]-48);
			if(isalpha(a[i+1]) || i==n-1)
			{
			while(x--)
			{
				b=b+temp;
			}
			x=0;
		}
		}
	}
	cout<<b;
	return 0;
}*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	char temp;
	cin>>a;
	int n,i,j,x=0;
	n=a.length();
	for(i=0;i<n;i++)
	{
		if(isalpha(a[i]))
		{
			temp=a[i];
		}
		else if(!isalpha(a[i]))
		{
			x=(x*10)+(a[i]-48);
			if(isalpha(a[i+1]) || i==n-1)
			{
				while(x--)
				{
					b=b+temp;
				}
				x=0;
			}
		}
	}
	cout<<b;
	return 0;
}
