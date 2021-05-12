#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int Arr(int);
int x, y;
int main()
{
	int number, pos,i=0;
	int fre1=0, fre2=0, fre3=0, fre4=0;
	
	unsigned seed;
	cin>>seed;
	srand(seed);

	for(i=0; i<100 ; i++)
	{
		pos = 0+rand()%9;
		number=Arr(pos);
		cout<<number;
		if(number==1)
		fre1++;
		if(number==2)
		fre2++;
	    if(number==3)
		fre3++;
		if(number==4)
		fre4++;
	}	
    cout<<"\n1:"<<fre1;
    cout<<"\n2:"<<fre2;
    cout<<"\n3:"<<fre3;
    cout<<"\n4:"<<fre4;
	
    return 0;
}

int Arr(int x)
{
	int y;
	if(x==0)
	  y=1;
	else if(x==1||x==2)
	  y=2;
	else if(x>=3 && y<=9)
	  y=3;
	else y=4;
	return y;
}
