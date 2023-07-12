#include<iostream>
using namespace std;
int main()
{
	int getdate,getyear,year,month,lasttwo,add,getday;
	string getmonth;
	cout<<"enter date:";
	cin>>getdate;
	cout<<"enter month:";
	cin>>getmonth;
	cout<<"enter year:";
	cin>>getyear;
	if(getyear>=1600 && getyear <=1699)
	{
		if(getyear==1600)
		year=6;
	}
	else if(getyear>=1700 && getyear<=1799)
	{
		year=4;
	}
	else if(getyear>=1800 && getyear<=1899)
	{
		year=2;
	}
	else if(getyear>=1900 && getyear<=1999)
	{
		year=0;
	}
	else if(getyear>=2000 && getyear<=2099)
	{
		year=6;
	}
	else
	{
		year=0;
	}
	if(getmonth=="jan" || getmonth=="oct")
	{
		month=0;
	}
	else if(getmonth=="feb" || getmonth=="mar" || getmonth=="nov")
	{
		month=3;
	}
	else if(getmonth=="apr" || getmonth=="jul")
	{
		month=6;
	}
	else if(getmonth=="may")
	{
		month=1;
	}
	else if(getmonth=="jun")
	{
		month=4;
	}
	else if(getmonth=="aug")
	{
		month=2;
	}
	else if(getmonth=="sep" || getmonth=="dec")
	{
		month=5;
	}
	if(getyear>=1600 && getyear <=1699)
	{
		lasttwo=getyear-1600;
	}
	else if(getyear>=1700 && getyear<=1799)
	{
		lasttwo=getyear-1700;;
	}
	else if(getyear>=1800 && getyear<=1899)
	{
		lasttwo=getyear-1800;;
	}
	else if(getyear>=1900 && getyear<=1999)
	{
		lasttwo=getyear-1900;;
	}
	else if(getyear>=2000 && getyear<=2099)
	{
		lasttwo=getyear-2000;;
	}
	else
	{
		lasttwo=0;
	}
	//cout<<lasttwo<<" "<<lasttwo/4<<" "<<getdate<<" "<<month<<" "<<year<<" ";
	add=lasttwo+(lasttwo/4)+getdate+month+year;
	//cout<<add;
	getday=add%7;
	if(getyear==1600 && getyear==1700 && getyear==1800 && getyear==1900 && getyear==2000 && getyear==2100)
	{
		getday=getday-1;
	}
	else if(getyear%4!=0)
	{
		getday=getday;
	}
	else
	{
		if(getday==0)
		{
			getday=getday;
		}
		else
		{
			getday=getday-1;
		}
		//getday=getday-1;
	}
	if(getday==0)
	{
		cout<<"the day is sun";
	}
	else if(getday==1)
	{
		cout<<"the day is mon";
	}
	else if(getday==2)
	{
		cout<<"the day is tue";
	}
	else if(getday==3)
	{
		cout<<"the day is wed";
	}
	else if(getday==4)
	{
		cout<<"the day is thu";
	}
	else if(getday==5)
	{
		cout<<"the day is fri";
	}
	else if(getday==7)
	{
		cout<<"the day is sat";
	}
	return 0;
}
