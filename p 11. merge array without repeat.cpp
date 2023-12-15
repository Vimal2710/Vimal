#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a[]={1,5,6,9,12};
	int b[]={2,3,7};
	n=5;
	m=3;
	int c[m+n];
	//c=n+m;
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j]) c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	while(i<n) c[k++]=a[i++];
	while(j<m) c[k++]=b[j++];
	for(i=0;i<(n+m);i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
