#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cout<<"Enter number";
	cin>>max;
	for(int i = 1; i<=10; i++)
	{
		cin>>n;
		if(n>max)
		max=n;
	}
	cout<<"The largest number is"<<max;
}
