#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers : ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"The Maximum number is : "<<a;
		}
		else
		{
			cout<<"The maximum number is : "<<c;
		}
	}
	else
	if(b>c)
	{
		cout<<"The maximum number is : "<<b;
	}
	else
		cout<<"The maximum number is : "<<c;
	return 0;
}
