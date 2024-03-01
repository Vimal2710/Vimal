#include<iostream>
using namespace std;
int main()
{
	int i,j,a=6,ans;
	int c=1,c1=1;
	for(i=1;i<=a;i++)
	{
		ans=ans+i;
		c=ans;
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<c<<" ";
				c--;
				c1=c+i+1;
			}
			else
			{
				cout<<c1<<" ";
				c1++;
			}
		}
		cout<<"\n";
	}
	return 0;
}
