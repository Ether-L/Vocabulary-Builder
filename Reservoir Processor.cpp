#include<bits/stdc++.h>

using namespace std;  

string a[20000],b[20000],e;

long long c,d,f;

int main()  
{  
	cout<<"输入你定义的数组名称："<<"\n"; 
	cin>>e;
	cout<<"输入你想生成的数据，以\"0\"结束输入："<<"\n";
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
