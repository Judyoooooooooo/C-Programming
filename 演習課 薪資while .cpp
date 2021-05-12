#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	float salary, sales;
	cout << "Enter sales in dollars ( EOF to end ):";
	cin >> sales;
	
	while((salary=cin.get())!=EOF)
	{
	    salary=sales*0.09;
	    cout << " salary is : " << " $ " << salary <<endl;
	}
	
	return 0;
}
