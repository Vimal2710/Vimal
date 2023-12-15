#include<iostream>
using namespace std;
int main()
{
	float a,b,i,j;
	cin>>a;
	int s1,s2,q,r;
	for(i=1;i<99;i++)
	{
		for(j=1;j<99;j++)
		{
				if(float(i/j)==a)
				{
					s1=i;
					s2=j;
				}
		}
	}
	cout<<"given value is "<<float(a)<<"\ni value is "<<s1<<"\nj value is "<<s2<<"\n";
	q=s1/s2;
	r=s1%s2;
	cout<<q<<" "<<r<<"/"<<s2;
	return 0;
}


