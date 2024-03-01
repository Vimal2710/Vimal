//#include<iostream>
//using namespace std;
//int main()
//{
//	int a=6,i,j;
//	int n,var;
//	for(i=1;i<=a;i++)
//	{
//		n=i;
//		var=a-1;
//		for(j=1;j<=i;j++)
//		{
//			cout<<n<<" ";
//			n=n+var--;
//		}
//		cout<<"\n";
//	}
//}
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int last,i,j,ans;
	for(i=1;i<=n;i++)
	{ 
	ans=i;
	last=n-1;
	for(j=1;j<=i;j++)
	{
		cout<<ans<<" ";
		ans=ans+last--;
	}
	cout<<"\n";
	}
}
