#include<iostream>
using namespace std;
int main()
{
	int a,n,b=0,i,j,c[10][10],d;
	cin>>a;
	d=a;
	if((a%2)!=0)
	{
		n=(a/2)+1;
	}
	else
	{
		n=a/2;
	}
	while(n>0)
	{
	for(i=b;i<a;i++)
	{
		for(j=b;j<a;j++)
		{
			if(i==b||j==b||i==a-1||j==a-1)
			{
				c[i][j]=n;
			}
		}
		cout<<"\n";
	}
	b=b+1;
	a=a-1;
	n=n-1;
	
}
for(i=0;i<d;i++)
{
	for(j=0;j<d;j++)
	{
		cout<<c[i][j];
	}
	cout<<"\n";
}
	return 0;
}
