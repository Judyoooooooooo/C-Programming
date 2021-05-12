#include <iostream>

using namespace std;

int main()
{
	int x=1, y=1, a=1, gcd;
	while(x!=1 || y!=0)
	{
		cout << "Enter two integers:" << endl;
		cin >> x >> y;
		
		if(x==0)
		cout << "Stop";
		while(a<=y)
		{
			if((x%a==0)&&(y%a==0))
			gcd=a;
			a=a+1;
		}
		cout <<"gcd is :" << gcd << endl;
	} 
	return 0;
}
