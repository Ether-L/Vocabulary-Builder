#include<bits/stdc++.h>

using namespace std;  

string a[20000],b[20000],e,s,t,k,j[10],l,x[20000];
long long c,d,f,g,h,m,n,r,q,p[20000],bo[20000];

int main()  
{  

	//Put Your List Here
	//n = the number of the words in the list
	
	cout<<"Choose your study mode:"<<"\n"<<"\n";
	cout<<"a. Spelling Mode"<<"\n";
	cout<<"b. Learning mode"<<"\n";
	cout<<"c. Option mode"<<"\n"<<"\n";
	
	cin>>e;
	srand((unsigned)time(NULL));
	r=0;
	
	if (e=="b")
	{
		cout<<"\n"<<"Type \"EXIT\" to end the programme."<<"\n";
		cout<<"Type \"REVIEW\" to review."<<"\n"<<"\n";
		c=rand()%n+1;
		bo[c]=bo[c]+1;
		cout<<a[c]<<"\n"<<"\n";
		cout<<"1. See Chinese"<<"\n";
		cout<<"2. Next word"<<"\n"<<"\n";
		while (e!="EXIT" and e!="REVIEW")
		{
			cin>>e;
			if (e=="1")
			{
				q=q+1;
				p[q]=c;
				cout<<"\n"<<b[c]<<"\n"<<"\n";
				cout<<"Type \"2\" to continue"<<"\n"<<"\n";
				cin>>e;
			}
			if (e=="2")
			{
				c=rand()%n+1;
				while (bo[c]>0) c=rand()%n+1;
				bo[c]=bo[c]+1;
				cout<<"\n"<<"\n"<<a[c]<<"\n"<<"\n";
				cout<<"1. See Chinese"<<"\n";
				cout<<"2. Next word"<<"\n"<<"\n";
			}
		 }
		 
		if (e=="REVIEW") 
		{
			cout<<"\n"<<"Can you still remember these words?"<<"\n";
			cout<<"Type any key to continue."<<"\n"<<"\n";
			for (int i=1; i<=q;i++)
			{
				cout<<"\n"<<"\n"<<a[p[i]]<<"\n"<<"\n";
				cin>>e;
				cout<<"\n"<<b[p[i]]<<"\n"<<"\n";
				cin>>e;
			}
			cout<<"\n"<<"You have reviewed all the words. Congratulations!"<<"\n"<<"\n";
			cout<<"Type \"EXIT\" to end the programme."<<"\n"<<"\n";
			cin.get();
		}
		

	}
	
	else if (e=="a")
	{
		cout<<"\n"<<"Type \"EXIT\" to end the programme."<<"\n";
		cout<<"Type \"REVIEW\" to review."<<"\n"<<"\n";
		c=rand()%n+1;
		cout<<b[c]<<"\n"<<"\n";
		bo[c]=bo[c]+1;
		cout<<"Can you spell this word?"<<"\n"<<"\n";
		while (e!="EXIT" and e!="REVIEW")
		{
			cin>>e;
			if (e==a[c])
			{
				cout<<"\n"<<"Correct!"<<"\n"<<"\n";
			}
			else if (e!="EXIT" and e!="REVIEW")
			{
				cout<<"\n"<<"Wrong! The correct spelling is "<<a[c]<<"\n"<<"\n";
				q=q+1;
				p[q]=c;
			}
			if (e!="EXIT" and e!="REVIEW")
			{
				c=rand()%n+1;
				while (bo[c]>0) c=rand()%n+1;
				bo[c]=bo[c]+1;
				cout<<"\n"<<b[c]<<"\n"<<"\n";
				cout<<"Can you spell this word?"<<"\n"<<"\n";
			}
		 }
		 if (e=="REVIEW")
			{
				for (int i=1; i<=q;i++)
			{
				cout<<"\n"<<"\n"<<b[p[i]]<<"\n"<<"\n";
				cout<<"Can you spell this word?"<<"\n"<<"\n";
				cin>>e;
				if (e==a[p[i]])
				{
					cout<<"\n"<<"Correct!"<<"\n"<<"\n";
				}
				else if (e!="EXIT")
				{
					cout<<"\n"<<"Wrong! The correct spelling is "<<a[p[i]]<<"\n"<<"\n";
					q=q+1;
					p[q]=p[i];
				}
			}
				cout<<"\n"<<"You have reviewed all the words. Congratulations!"<<"\n"<<"\n";
				cout<<"Type \"EXIT\" to end the programme."<<"\n"<<"\n";
			}
		cin.get();
	}
	
	else if (e=="c")
	{
		cout<<"\n"<<"Type \"EXIT\" to end the programme."<<"\n"<<"\n";
		cout<<"a. Chinese - English"<<"\n"<<"b. English - Chinese"<<"\n"<<"\n";
		while (l!="EXIT")
		{
		
		cin>>k;
		if (k=="a")
		{
			while (l!="EXIT")
			{
			h=h+1;
			c=rand()%n+1;
			while (bo[c]>0) c=rand()%n+1;
			bo[c]=bo[c]+1;
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
			if (f==(int)l[0]-48) 
			{
				cout<<"\n"<<"Correct! ";
				r=r+1;
				m=m+1;
				if (r>2) cout<<r<<" in a row!";
				cout<<"\n"<<"\n";
			} 
			else if (l!="EXIT") 
			{
				cout<<"\n"<<"Wrong! The answer is "<<f<<"\n"<<"\n";
				r=0;
			}
			}
			cout<<"\n"<<"Your score: "<<m<<" out of "<<h-1<<"\n";
		}
		if (k=="b")
		{
			while (l!="EXIT")
			{
			h=h+1;
			c=rand()%n+1;
			while (bo[c]>0) c=rand()%n+1;
			bo[c]=bo[c]+1;
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
			if (f==(int)l[0]-48) 
			{
				cout<<"\n"<<"Correct! ";
				r=r+1;
				m=m+1;
				if (r>2) cout<<r<<" in a row!";
				cout<<"\n"<<"\n";
			} 
			else if (l!="EXIT") 
			{
				cout<<"\n"<<"Wrong! The answer is "<<f<<"\n"<<"\n";
				r=0;
			}
			}
			if (l!="EXIT") cout<<"\n"<<"Your score: "<<m<<" out of "<<h-1<<"\n";
		}
	}
	cin.get(); 
	}
	cin.get();
} 
