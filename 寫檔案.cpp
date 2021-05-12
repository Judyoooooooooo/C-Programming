#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
	ofstream file("student.txt", ios::out);
	
	if(!file)
	{
		cerr << "file could not be opened" << endl;
		exit(0);
	}
	
	string id;
	string name;
	double g1;
	double g2;
	double ave;
	
	cout << "enter the ID, name, grade of course 1 and grade of course 2 : " << endl;
	cout << "enter end-of-file to end input \n?";
	
	while(cin >> id >> name >> g1 >> g2)
	{
		ave = (g1+g2)/2; 
		
		
		file<<left<<setw(13)<<"ID"<<setw(13)<<"Name"<<setw(20)<<"Grade of #1"<<setw(20)<<"Grade of #2"
	       <<setw(20)<<"Average"<<endl<<fixed<<showpoint;
	   
	   
		file <<setw(13)<< id <<setw(13)<< name <<setw(20)<< g1 <<setw(20)<< g2 <<setw(20) << ave << endl;
		cout << "?";
	}
}
