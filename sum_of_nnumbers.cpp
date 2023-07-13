#include<iostream>
using namespace std;
int main()
{
	int a,i,sum=0;
	cout<<"enter number to find sum of n numbers:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	cout<<"sum of n numbers is:"<<sum;
	return 0;
}
