#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i<=j)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if((i+j)>a)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}

	return 0;
}


