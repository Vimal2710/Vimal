//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,i,j,s,x,count=0;
//	cin>>a;
//	x=2*a;
//	for(i=1;i<a;i++)
//	{
//		for(s=1;s<=a-i;s++)
//		{
//			cout<<" ";
//		}
//		int x1;
//		count=count+i;
//		x1=count;
//		for(j=1;j<=i;j++)
//		{
//			cout<<x1<<" ";
//			x1--;
//		}
//		cout<<"\n";
//	}
//	for(i=1;i<=a;i++)
//	{
//		for(j=1;j<=a;j++)
//		{
//			if(j>i)
//			{
//				cout<<x<<" ";
//				x--;
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//		cout<<"\n";
//	}
//	
//	
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	int a,i,j,s,s1,count=0;
	cin>>a;
	int x=2*a;
	for(i=1;i<a;i++)
	{
		s=i;
		count=count+i;
		s1=count;
		for(j=1;j<=a;j++)
		{
			if(i+j>a)
			{
				cout<<s1--<<" ";
			}
			else cout<<" ";
		}
		cout<<"\n";
	}
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i<j)
			{
				cout<<x--<<" ";
			}
			else cout<<" ";
		}
		cout<<"\n";
	}
	
}
