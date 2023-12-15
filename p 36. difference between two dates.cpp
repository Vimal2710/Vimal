#include<iostream>
using namespace std;
int year(int y)
{
	if(y%400==0) return 366;
	else if(y%100==0) return 365;
	else if(y%4==0) return 366;
	else return 365;
}
int ca(int d[])
{
	int mon=0,i;
	for(i=1;i<d[1];i++)
	{
		if(i==1 || i%2!=0 || i==8)
		{
			mon=mon+31;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
		}
		if(i!=2 && i%2==0 && i!=8)
		{
			mon=mon+30;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
			
		}
		if(i==2)
		{
			mon=mon+28;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
		}
	}
	return mon+d[0];
}
int main()
{
	int n=3,d1[n],d2[n],i;
	for(i=0;i<n;i++) cin>>d1[i];
	for(i=0;i<n;i++) cin>>d2[i];
	cout<<"\n\n";
	for(i=0;i<n;i++) cout<<d1[i]<<" ";
	cout<<"|||||| ";
	for(i=0;i<n;i++) cout<<d2[i]<<" ";
	cout<<"\n\n";
	if(d1[2]-d2[2]!=0)
	{
	int date1=ca(d1);
	int date2=ca(d2);
	cout<<"\n";
	
	int y1=year(d1[2]);
	int y2=year(d2[2]);
	
	cout<<"date 1 is "<<date1<<" and date 2 is "<<date2<<"\n";
	
	
	int dd1=y1-date1;
	cout<<"\nyear 1 is equal to "<<dd1<<" (y1 - date1) ("<<y1<<" - "<<date1<<")\n";
	int le=0;
	if(y2==366 && d2[1]>2) le=1;
	else le=0;
	//cout<<le<<"\n";
	int dd2=date2+le;
	cout<<"\nyear 2 is equal to "<<dd2<<" y2 "<<y2<<"\n";
	
	int total=dd1+dd2,yeartotal=0;
	cout<<"\ntotal is dd1 "<<dd1<<" + dd2 "<<dd2<<" and sum is "<<total<<"\n";
	if(d2[2]-d1[2]>1)
	{
	for(i=d1[2]+1;i<d2[2];i++)
	{
		yeartotal=yeartotal+year(i);
		cout<<"year is "<<i<<" and sum is "<<yeartotal<<"\n";
	}
}
	cout<<"\n"<<"sum of year is "<<total+yeartotal<<"\n";
	}
	
	
	if(d2[2]-d1[2]==0)
	{
		int mon=0;
		if(d1[1]==d2[1] && d1[0]==d2[0]) cout<<mon;
		else if(d1[0]!=d2[0] && d1[1]==d2[1])
		{
			cout<<mon;
		}
		else
		{
		cout<<d1[1]<<" "<<d2[1]<<"\n";
		for(i=d1[1]+1;i<d2[1];i++)
		{
			if(i==1 || i%2!=0 || i==8)
		{
			mon=mon+31;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
		}
		if(i!=2 && i%2==0 && i!=8)
		{
			mon=mon+30;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
			
		}
		if(i==2)
		{
			mon=mon+28;
			cout<<"i is "<<i<<" and month is "<<mon<<"\n";
		}
		}
		int date1,date2;
		if(d1[1]==1 || d1[1]%2!=0 || d1[1]==8) date1=31;
		if(d1[1]!=2 && d1[1]%2==0 && d1[1]!=8) date1=30;
		if(d1[1]==2)
		{
			int y=year(d1[2]);
			if(y==366) date1=29;
			else date1=28;
		}
		
		int date=date1-d1[0];
		mon=mon+date+d2[0];
		cout<<mon<<"\n";
	}
		
	}
	return 0;
	
}
