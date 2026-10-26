#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	int Even=0;
	int Odd=0;
	for(int i =1; i<=n; i++)
	{
		if(i % 2 ==0)
		{
			cout<<"Even";
		}
		else
		{
			cout<<"Odd";
		}
	}
	cout<<"Even ="<<Even<<"\n";
	cout<<"Odd ="<<Odd<<"\n";
}
