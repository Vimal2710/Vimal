#include<iostream>
using namespace std;
int ca(int n,int r)
{
	int i,s1=1,s2=1,sum;
	//cout<<n<<" "<<r<<"\n";
	for(i=1;i<=r;i++)
	{
		s1=s1*n;
		n--;
	}
	for(i=1;i<=r;i++) s2=s2*i;
	//cout<<"\n"<<s1<<" "<<s2<<"\n";
	sum=s1/s2;
	if(sum!=0) return sum;
	else return 1;
}
int main()
{
	int a,i,j,s,l=1;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(s=a;s>i;s--) cout<<" ";
			for(j=1;j<=i;j++)
			{
				cout<<ca(i-1,j-1)<<" ";
			}
		cout<<"\n";
	}
	return 0;
}
