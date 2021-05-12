#include <iostream>

using namespace std;

int main()
{
	int temp,degC, degF;
	cout << "Temperature Ranfe Converter";
	cout << "\n1) From degree Celsius to degree \"Fahrenheit";
	cout << "\n2) From degree Fehrenheit to degree \"Celsius";
	cout << "\n0) End";
	do
	{
		cout <<"\nPlease enter the select 1, 2, or 0:";
	    cin >> temp;
	    switch(temp)
	    {
	    	case 1:
			cout << "Please enter the degree Celsius Value:";
			cin >> degC;
			degF=degC*9/5+32;
			cout <<"  "<< degC << " deg.C = " << degF << " deg.F"<< endl;
			break;
			
		    case 2: 
		    cout << "Please enter the degree Fehrenheit Value:";
		    cin >> degF;
			degC=(degF-32)*5/9;
			cout <<"  "<< degF << " deg.F = " << degC << " deg.C"<< endl;
			break;
			
		    default:
			cout << "Thank you" << endl;
			break;
	    	
	    }	
		
	}while(temp!=0);
	return 0;
}
