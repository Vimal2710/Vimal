#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,s,a1,a2,s1,ii=0;
	int count=0;
	cin>>a;
	cin>>b;
	if(a<b)
	{
		a1=a;
		a2=b;
	}
	else
	{
		a1=b;
		a2=a;
	}
	cout<<a1<<" "<<a2<<"\n";
	int ss,ss1,ss2;
	for(i=1;i<=(a|b);i++)
	{
		if(a%i==0 && b%i==0) s1=i;
		ss=a1*i;
		for(j=1;j<=(a|b);j++)
		{
			ss1=a2*j;
			if(ss==ss1)
			{
				count=count+1;
			}
		}
	}
	int c[count];
	for(i=1;i<=(a|b);i++)
	{
		ss=a1*i;
		for(j=1;j<=(a|b);j++)
		{
			ss1=a2*j;
			if(ss==ss1)
			{
				//cout<<ss1<<" ";
				c[ii]=ss1;
				ss2=ss1;
				ii++;
			}
		}
	}
	cout<<"lcm of two number is:"<<c[0];
	cout<<"\nhcf of two number is:"<<s1;
	return 0;
}
