#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int x )
{
	int flag = 1;
	if ( x % 2 == 0 )
	{
		flag = 0;
	}
	return flag;
}
main()
{
	int a;
	cout<<"Please enter a number:"<<endl;
	cin>>a;
	
	if (f(a)==1)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
