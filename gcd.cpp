#include <iostream>
using namespace std;

int gcd (int,int);

int main()
{
	int x=0,y=0;
	cout<<"Enter two integers:";
	cin>>x>>y;
	cout<<gcd(x,y)<<endl;
	return 0;
}

int gcd(int a,int b)
{
	if(a%b!=0)
	{
		return gcd(b,a%b);
	}
	else if(a%b==0)
	return b;	
	
}
