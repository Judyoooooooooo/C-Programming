#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int draw ()
{
	int x,y;
	y = rand()%10;
	if(y==0)
	  x=1;
	else if(y==1||y==2)
	  x=2;
	else if(y>=3 && y<=5)
	  x=3;
	else x=4;
	return x;
}

int main()
{
	int a,b ,c,d ,e, i;
	srand(time(NULL));
	b=0,c=0,d=0,e=0;
	for(i=0; i<100 ; i++)
	{
		a=draw();
		if(a==1)
		b=b+1;
		if(a==2)
		c=c+1;
		if(a==3)
		d=d+1;
		if(a==4)
		e=e+1;
		
	}
	cout<<"1:"<<b<<endl;
    cout<<"2:"<<c<<endl;
    cout<<"3:"<<d<<endl;
    cout<<"4:"<<e<<endl;
    system("pause");
    return 0;
}
