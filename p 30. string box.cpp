#include<iostream>
using namespace std;
int ca(string a,int n,string a1,int n2,int m,int l)
{
	int u=0,i,j,temp=0,count=1,count1,m1,m2=m-1;
	string s,s2;
	for(i=0;i<n-n2+1;i++)
	{
		for(j=i;j<i+n2;j++)	s=s+a[j];
//		cout<<a1<<" is "<<s<<" \n";
//		s="";
		if(s==a1)
		{
			s2=s;
			count=1;
			m1=i;
			break;	
		}
		else 
		{
			s="";
			count1=2;
		}
	}
	//cout<<s2;
	if(s2==a1)
	{
		for(i=0;i<n2;i++)
		{
			if(s2[i]==a1[i])
			{
				if(l==1) cout<<"("<<m-1<<","<<m1++<<") ";
				if(l==2) cout<<"("<<m1++<<","<<m-1<<") ";
				if(l==0) cout<<"("<<m++<<","<<m1++<<") ";
				if(l==3) cout<<"("<<m1++<<","<<m2--<<") ";
			}
		}
		return count;
	}
	else return count1;
}
int main()
{
	int i,j;
		int n=5;
	string a[n+1][n+1],s[n+1],s1[n+1],s2,s3;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"**********************\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"**********************\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			s[i]=s[i]+a[i][j];
			s1[i]=s1[i]+a[j][i];
			if(i==j) s2=s2+a[i][j];
			if((i+j)==n+1) s3=s3+a[i][j];
		}
	}
	string a1;
	int val,k=0,m=5,m1=3;
	cin>>a1;
	int n2=a1.length(),l=1,r=2;
	for(i=1;i<=n;i++)
	{
		if(val!=1) val=ca(s[i],n,a1,n2,i,l);
		if(val==1) break;
	}
	int val1,val2,val3;
	if(val==1) cout<<"true\n";
	if(val==2)
	{
		for(i=1;i<=n;i++)
		{
			if(val1!=1)val1=ca(s1[i],n,a1,n2,i,r);
			if(val==1) break;
		}
	}
	if(val1==1) cout<<"true";
	if(val1==2) val2=ca(s2,n,a1,n2,k,k);
	if(val2==1) cout<<"true";
	if(val2==2) val3=ca(s3,n,a1,n2,m,m1);
	if(val3==1) cout<<"true";
	if(val3==2) cout<<"not defined";
	return 0;
}
