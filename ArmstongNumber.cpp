#include <iostream>

using namespace std;

int main()
{
	int ArmstongNumber, digit1, digit2, digit3, digit4, sum, k;
	cout << "請輸入四位數的整數:" ;
	cin >> ArmstongNumber;
	k=ArmstongNumber;
	
	
	
	digit1=ArmstongNumber/1000;
	ArmstongNumber= ArmstongNumber-(digit1*1000);
		
	digit2=ArmstongNumber/100;
	ArmstongNumber= ArmstongNumber-(digit2*100); 
		
	digit3=ArmstongNumber/10;
	ArmstongNumber= ArmstongNumber-(digit3*10);
		
	digit4=ArmstongNumber; 
		
	sum=digit1*digit1*digit1*digit1 + digit2*digit2*digit2*digit2 + digit3*digit3*digit3*digit3 + digit4*digit4*digit4*digit4;
		
	if(k==sum)
	{
		cout << "yes";
	}
	else
	{
		cout <<"no";
	}
	
}
