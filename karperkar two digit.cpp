#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,square,b,c,sum=0,aa,count=0,d;
	cin>>a;
	c=a;
	while(a>0)
	{
		aa=a%10;
		a=a/10;
		count=count+1;
	}
	d=pow(10,count);
	square=c*c;
	cout<<count<<" "<<d<<" "<<square<<" ";
	while(square>0)
	{
		b=square%d;
		sum=sum+b;
		square=square/d;
	}
	if(c==sum)
	{
		cout<<"kaprekar";
	}
	else
	{
		cout<<"not kaprekar";
	}
	return 0;
}
