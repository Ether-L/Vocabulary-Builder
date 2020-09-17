#include<bits/stdc++.h>

using namespace std;  

string a[20000],b[20000],e;

long long c,d,f;

int main()  
{  
	cout<<"Input the name of the array:"<<"\n"; 
	cin>>e;
	cout<<"Input the all the data and end with \"0\":"<<"\n";
	int i=0;
    while (a[i]!="0")
	{
		i++;
		getline(cin,a[i]);
	 }
	 cout<<"\n";
	for (int j=2;j<=i-1;j++)
	{
		cout<<e<<"["<<j-1<<"]"<<"="<<"\""<<a[j]<<"\""<<";";
		cout<<"\n";
	}
	cin.get(); 
} 
