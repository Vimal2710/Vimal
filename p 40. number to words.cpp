#include<iostream>
using namespace std;
int cathousand(int b)
{
	if(b==1) cout<<"onethousand_";
	else if(b==2) cout<<"twothousand_";
	else if(b==3) cout<<"threethousand_";
	else if(b==4) cout<<"fourthousand_";
	else if(b==5) cout<<"fivethousand_";
	else if(b==6) cout<<"sixthousand_";
	else if(b==7) cout<<"seventhousand_";
	else if(b==8) cout<<"eightthousand_";
	else if(b==9) cout<<"ninethousand_";
	else if(b==0) cout<<"zerothousand_";
}
int cahundred(int b)
{
	if(b==1) cout<<"onehundred_";
	else if(b==2) cout<<"twohundred_";
	else if(b==3) cout<<"threehundred_";
	else if(b==4) cout<<"fourhundred_";
	else if(b==5) cout<<"fivehundred_";
	else if(b==6) cout<<"sixhundred_";
	else if(b==7) cout<<"sevenhundred_";
	else if(b==8) cout<<"eighthundred_";
	else if(b==9) cout<<"ninehundred_";
	else if(b==0) cout<<"zerohundred_";
}

int caone(int b)
{
	if(b==1) cout<<"oneone_";
	else if(b==2) cout<<"twenty_";
	else if(b==3) cout<<"thirty_";
	else if(b==4) cout<<"forty_";
	else if(b==5) cout<<"fifty_";
	else if(b==6) cout<<"sixty_";
	else if(b==7) cout<<"seventy_";
	else if(b==8) cout<<"eighty_";
	else if(b==9) cout<<"ninety_";
	else if(b==0) cout<<"zeroo_";
}
int ca(int b)
{
	if(b==1) cout<<"one ";
	else if(b==2) cout<<"two ";
	else if(b==3) cout<<"three ";
	else if(b==4) cout<<"four ";
	else if(b==5) cout<<"five ";
	else if(b==6) cout<<"six ";
	else if(b==7) cout<<"seven ";
	else if(b==8) cout<<"eight ";
	else if(b==9) cout<<"nine ";
	else if(b==0) cout<<"zero ";
}
int ca0(int a)
{
	int count=0;
	while(a>0)
	{
		a=a/10;
		count=count+1;
	}
	return count;
}
int ca1(int b)
{
	if(b==11) cout<<"eleven ";
	else if(b==12) cout<<"twele ";
	else if(b==13) cout<<"thirteen ";
	else if(b==14) cout<<"fourteen ";
	else if(b==15) cout<<"fifteen ";
	else if(b==16) cout<<"sixteen ";
	else if(b==17) cout<<"seventeen ";
	else if(b==18) cout<<"eighteen ";
	else if(b==19) cout<<"nineteen ";
}
int main()
{
	int a,b,val=1,count=0,i;
	cin>>a;
	b=a;
	if(a==11 || a==12 || a==13 || a==14 || a==15 || a==16 || a==17 || a==18 || a==19) ca1(a);
	else
	{
	while(a>0)
	{
		count=ca0(a);
		//cout<<"count is "<<count<<"\n";
		for(i=1;i<count;i++) val=val*10;
		//cout<<"count is "<<count<<"val is "<<val<<"\n";
		int a1=a/val;
		if(val==1000) cathousand(a1);
		else if(val==100) cahundred(a1);
		else if(val==10) caone(a1);
		else ca(a1);
		//cout<<"\n";
		int b1=a-(a1*val);
		//cout<<b1<<"\n";
		a=b1;
		val=1;
	}
}
	
	return 0;
}
