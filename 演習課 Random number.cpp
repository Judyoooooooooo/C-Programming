#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int iSecret, input ;
	srand(time(NULL));
	iSecret=rand()%100+1;
	cout << "Guess the number (1 to 100)" << endl;
	
	int flag=0;
	
	while(flag!=1)
	{
	    cin >> input;
		if(input > iSecret)
		{
			flag=2;
	        cout << "Too high! Try again"<< endl;
		}
	    else if(input < iSecret)
	    {
	    	flag=2;
	        cout << "Too Low! Try again"<< endl;
	    }
	    else if(input == iSecret)
	    {
	    	flag=1;
	        cout << "Congratulations!"<< endl;
	    }
	}
	cout << "Secret number is: " << iSecret << endl;
	return 0;
}
