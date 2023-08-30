#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	for(i=a;i>=1;i--)
	{
		for(j=a;j>=1;j--)
		{
			if(a%2==0)
			{
				cout<<"0 ";
			}
			else
			{
				cout<<"1 ";
			}
		}
		cout<<"\n";
		a--;
	}
	return 0;
}
