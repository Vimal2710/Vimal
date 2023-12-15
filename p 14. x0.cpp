#include<iostream>
using namespace std;
int main()
{
	int n,nm,i,j,m,n1,n2,l=0;
	cin>>n>>nm;
	n1=n;
	n2=nm;
	char x='x';
	char a[n][n];
	m=(n+1)/2;
	while(m>0)
	{
		for(i=l;i<nm;i++)
		{
			for(j=l;j<n;j++)
			{ 
				if(i==l || i==nm-1 || j==l || j==n-1)
				{
					a[i][j]=x;
				}
			}
		}
		l=l+1;
		nm=nm-1;
		n=n-1;
		m=m-1;
		if(x=='x')x='o';
		else x='x';
	}
	for(i=0;i<n2;i++)
		{
			for(j=0;j<n1;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
}
