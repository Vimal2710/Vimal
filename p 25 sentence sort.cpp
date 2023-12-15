#include<iostream>
#include<bits\stdc++.h>
using namespace std;
string ca0(string b)
{
	int i,l=b.length();
	string s;
	char c;
	for(i=0;i<l;i++)
	{
		if(b[i]=='0') c='0';
		if(b[i]=='1') c='1';
		if(b[i]=='2') c='2';
		if(b[i]=='3') c='3';
		if(b[i]=='4') c='4';
		if(b[i]=='5') c='5';
		if(b[i]=='6') c='6';
		if(b[i]=='7') c='7';
		if(b[i]=='8') c='8';
		if(b[i]=='9') c='9';
	}
	if((b[l-1]==c))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!=c|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!=c || i==l-1) s=s+b[i];
		}
	}
	return s;
}

string ca1(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='1'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='1'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='1' || i==l-1) s=s+b[i];
		}
	}
	return s;
}

string ca2(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='2'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='2'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='2' || i==l-1) s=s+b[i];
		}
	}
	return s;
}

string ca3(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='3'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='3'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='3' || i==l-1) s=s+b[i];
		}
	}
	return s;
}

string ca4(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='4'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='4'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='4' || i==l-1) s=s+b[i];
		}
	}
	return s;
}


string ca5(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='5'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='5'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='5' || i==l-1) s=s+b[i];
		}
	}
	return s;
}
string ca6(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='6'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='6'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='6' || i==l-1) s=s+b[i];
		}
	}
	return s;
}


string ca7(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='7'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='7'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='7' || i==l-1) s=s+b[i];
		}
	}
	return s;
}
string ca8(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='8'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='8'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='8' || i==l-1) s=s+b[i];
		}
	}
	return s;
}
string ca9(string b)
{
	int i,l=b.length();
	string s;
	if((b[l-1]=='9'))
	{
		for(i=0;i<l-1;i++)
		{
			if(b[i]!='9'|| i==l-1) s=s+b[i];
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(b[i]!='9' || i==l-1) s=s+b[i];
		}
	}
	return s;
}

int main()
{
	string a,b,s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
	getline(cin,a);
	int i,j,n=a.length();
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ') b=b+a[i];
		if(a[i]==' ' || i==n-1)
		{
			for(j=0;j<b.length();j++)
			{
				if(b[j]=='0')
				{
					s0=ca0(b);
					b="";
				}
				if(b[j]=='1')
				{
					s1=ca0(b);
					b="";
				}
				if(b[j]=='2')
				{
					s2=ca0(b);
					b="";
				}
				if(b[j]=='3')
				{
					s3=ca0(b);
					b="";
				}
				if(b[j]=='4')
				{
					s4=ca0(b);
					b="";
				}
				if(b[j]=='5')
				{
					s5=ca0(b);
					b="";
				}
				if(b[j]=='6')
				{
					s6=ca0(b);
					b="";
				}
				if(b[j]=='7')
				{
					s7=ca0(b);
					b="";
				}
				if(b[j]=='8')
				{
					s8=ca0(b);
					b="";
				}
				if(b[j]=='9')
				{
					s9=ca0(b);
					b="";
				}
			}
		}
	}
	cout<<s0<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9;
}
