#include<iostream>
using namespace std;
int main()
{
	int a,i,sum;
	cout<<"enter number to find factorial of the number:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		sum=sum*i;
	}
	cout<<"factorial of the number is:"<<sum;
	return 0;
}
