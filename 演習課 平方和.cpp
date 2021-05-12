#include <iostream>
#include <cmath>
using namespace std;

int sq(int x, int y)
{
	int sum=0;
	sum = x*x+y*y;
	return sum;
}
int main()
{
	int a, b ,sum=0;
	cout << "Enter the number one: " ;
	cin>> a;
	cout << "Enter the number two:" ;
	cin>>b;
	
	//cout << a << "^2 + " << b << "^2 = " << sum <<endl;
	cout << a << "^2 + " << b << "^2 = " << sq(a,b) <<endl;
	return 0;
}
