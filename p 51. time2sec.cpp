#include<iostream>
using namespace std;
int main()
{
	int hr1,hr2,min1,min2,sec1,sec2;
	cout<<"enter time -> HR1   :	MIN1  :	SEC1: ";
	cin>>hr1>>min1>>sec1;
	cout<<"enter time -> HR2   :	MIN2  :	SEC2: ";
	cin>>hr2>>min2>>sec2;
	if(hr1>12 || hr2>12 || min1>60 || min2>60 || sec1>60 || sec2>60) cout<<"invalid option\n";
	else{
		int hr = hr2 - hr1;cout<<hr<<"\n";
		int min = min2 - min1;cout<<min<<"\n";
		int sec = sec2 - sec1;cout<<sec<<"\n";
		long int total_sec = hr*60*60 + min*60 + sec;cout<<total_sec<<"\n";
		cout<<"INBETWEEN SECONDS BETWEEN THESE TIMING:	"<<total_sec<<"\n";
	}
	return 0;
}
