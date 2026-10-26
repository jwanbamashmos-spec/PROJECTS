#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter number";
	cin>>n;
	for(int i = 1; i<=n; i+=2)
	{
		s=s+i;
		cout<<i<<"+";
	}
	cout<<s<<"=";
	for(int i = 2; i<=n; i+=2)
	{
		s=s+i;
		cout<<i<<"+";
	}
	cout<<s<<"=";
	for(int i = 1; i<=n; i++)
	{
		s=s+i;
		cout<<i<<"+";
	}
	cout<<s<<"=";
}
