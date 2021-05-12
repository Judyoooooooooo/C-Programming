#include <iostream>
using namespace std;

void hanoi(int,char,char,char);
int main()
{
	int n;
	cout<<"Please enter the height of Hanoi:"<<endl;
	cin>>n;
	hanoi(n,'A','B','C');
	return 0;
} 

void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		cout<<"Move the "<<n<<" disk"<<" from "<< a << " to "<< c <<endl;
	}
	else
	{
		hanoi(n-1,a,c,b);
	    cout<<"Move the "<<n<<" disk"<<" from "<< a << " to "<< c <<endl;
	    hanoi(n-1,b,a,c);
	}

}
