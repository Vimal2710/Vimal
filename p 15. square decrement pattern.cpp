#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n;
	m=2*n-1;
	int m1=m;
	int l=0;
	int c[m][m];
	while(n>0)
	{
		for(i=l;i<m;i++)
		{
			for(j=l;j<m;j++)
			{
				if(i==l || i==m-1 || j==l || j==m-1)
				{
					c[i][j]=n;
				}
			}
		}
		l=l+1;
		m=m-1;
		n=n-1;
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{
			cout<<c[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
