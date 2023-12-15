/*#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,n,m;
	cin>>a;
	b=a;
	n=(a+1)/2;
	m=n-1;
	for(i=1;i<=a;i++)
	{
	for(j=1;j<=a;j++)
	{
		if(i==j)
		{
			if(i<n)
			{
				cout<<b;
				b--;
			}
			else
			{
				cout<<i;
			}
		}
		else if(i+j==a+1)
		{
			if(i<n)
			{
				cout<<i;
			}
			else
			{
				cout<<m;
				m--;
			}
		}
		else
		{
			cout<<" ";
		}
	}
	cout<<"\n";
}
return 0;
}*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,i,j;
//	cin>>a;
//	int a1=a;
//	int n;
//	n=(a+1)/2;
//	int n1=n-1;
//	for(i=1;i<=a;i++)
//	{
//		for(j=1;j<=a;j++)
//		{
//			if(i==j)
//			{
//				if(i<n)
//				{
//					cout<<a1;
//					a1--;
//				}
//				else
//				{
//					cout<<i;
//				}
//			}
//			else if(i+j==a+1)
//				{
//					if(i<n)
//					{
//						cout<<i;
//					}
//					else
//					{
//						cout<<n1;
//						n1--;
//					}
//				}
//				else
//				{
//					cout<<" ";
//				}
//			}
//			cout<<"\n";
//		}
//		return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	int s=a,s1=a/2;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i==j)
			{
				if(i<=(a/2)+1)
				{
					cout<<s<<" ";
					s=s-1;
				}
				if(i>(a/2)+1)
				{
					cout<<i<<" ";
				}
			}
			else if(i+j==a+1)
			{
				if(i<(a/2)+1) cout<<i<<" ";
				else
				{
					cout<<s1<<" ";
					s1=s1-1;
				}
			}
			else cout<<"  ";
		}
		cout<<"\n";
	}
}
