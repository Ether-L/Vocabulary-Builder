#include<bits/stdc++.h>

using namespace std;  

string a[20000],b[20000],e,s,t,k,j[10],l;
long long c,d,f,g,h,m,n;

int main()  
{  

	//Put Your List Here 
	//n = the number of the words in the list
	
	cout<<"Choose your study mode:"<<"\n"<<"\n";
	cout<<"a. Spelling Mode"<<"\n";
	cout<<"b. Learning mode"<<"\n";
	cout<<"c. Option mode"<<"\n"<<"\n";
	
	cin>>s;
	e="";
	srand((unsigned)time(NULL));
	
	if (s=="b")
	{
		cout<<"\n"<<"Type \"exit\" to end the programme."<<"\n"<<"\n";
		c=rand()%n+1;
		cout<<a[c]<<"\n"<<"\n";
		cout<<"1. See Chinese"<<"\n";
		cout<<"2. Next word"<<"\n"<<"\n";
		while (e!="exit")
		{
			cin>>e;
			if (e=="1")
			{
				cout<<"\n"<<b[c]<<"\n"<<"\n";
				cout<<"Type \"2\" to continue"<<"\n"<<"\n";
			}
			else if (e=="2")
			{
				c=rand()%n+1;
				cout<<"\n"<<a[c]<<"\n"<<"\n";
				cout<<"1. See Chinese"<<"\n";
				cout<<"2. Next word"<<"\n"<<"\n";
			}
		 }
	}
	
	else if (s=="a")
	{
		cout<<"\n"<<"Type \"exit\" to end the programme."<<"\n"<<"\n";
		c=rand()%n+1;
		cout<<b[c]<<"\n"<<"\n";
		cout<<"Can you spell this word?"<<"\n"<<"\n";
		while (e!="exit")
		{
			cin>>e;
			if (e==a[c])
			{
				cout<<"\n"<<"Correct!"<<"\n"<<"\n";
			}
			else if (e!="exit")
			{
				cout<<"\n"<<"Wrong! The correct spelling is "<<a[c]<<"\n"<<"\n";
			}
			if (e!="exit")
			{
			c=rand()%n+1;
			cout<<b[c]<<"\n"<<"\n";
			cout<<"Can you spell this word?"<<"\n"<<"\n";
			}
		 }
	}
	
	else if (s=="c")
	{
		cout<<"\n"<<"Type \"exit\" to end the programme."<<"\n"<<"\n";
		cout<<"a. Chinese-English"<<"\n"<<"b. English-Chinese"<<"\n"<<"\n";
		while (l!="exit")
		{
		
		cin>>k;
		if (k=="a")
		{
			while (l!="exit")
			{
			c=rand()%n+1;
			cout<<"\n"<<b[c]<<"\n"<<"\n";
			cout<<"What is the English of this word?"<<"\n"<<"\n";
			f=rand()%4+1;
			j[f]=a[c];
			for (int i=1; i<=4; i++)
			{
				if (i==f) i=i+1;
				j[i]=a[rand()%n+1];
				while (j[i]==j[f])  j[i]=a[rand()%n+1];
			}
			for (int i=1; i<=4; i++)
			cout<<i<<". "<<j[i]<<"\n"<<"\n";
			cin>>l;
			if (f==(int)l[0]-48) cout<<"\n"<<"Correct!"<<"\n";
			else if (l!="exit") cout<<"\n"<<"Wrong! The answer is "<<f<<"\n";
			}
		}
		if (k=="b")
		{
			while (l!="exit")
			{
			c=rand()%n+1;
			cout<<"\n"<<a[c]<<"\n"<<"\n";
			cout<<"What is the Chinese of this word?"<<"\n"<<"\n";
			f=rand()%4+1;
			j[f]=b[c];
			for (int i=1; i<=4; i++)
			{
				if (i==f) i=i+1;
				j[i]=b[rand()%n+1];
				while (j[i]==j[f])  j[i]=b[rand()%n+1];
			}
			for (int i=1; i<=4; i++)
			cout<<i<<". "<<j[i]<<"\n"<<"\n";
			cin>>l;
			if (f==(int)l[0]-48) cout<<"\n"<<"Correct!"<<"\n";
			else if (l!="exit") cout<<"\n"<<"Wrong! The answer is "<<f<<"\n";
			}
		}
	}
	}
} 
