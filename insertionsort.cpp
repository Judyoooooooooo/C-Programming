#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(int[],const int,bool(*)(int,int));
void swap(int *const,int *const);
bool ascending(int,int);
bool descending(int,int);

int main()
{
	const int arraySize=10;
	int order;
	int counter;
	int a[arraySize]={2,6,4,8,10,12,89,68,45,37};
	cout<<"Enter 1 to sort in ascending order,\n"<<"Enter 2 to sort in descending order:";
	cin>>order;
	
	
	if(order==1)
	{
		insertionSort(a,arraySize,ascending);
		cout<<"\nData items in ascending order\n";
	}
	else
	{
		insertionSort(a,arraySize,descending);
		cout<<"\nData items in descending order\n";
	}
	for(counter=0;counter<arraySize;counter++)
	{
		cout<<setw(4)<<a[counter];
	}
	
}

void insertionSort(int work[], const int size, bool(*compare)(int, int))
{
	int min=0;
	int temp=0;
	
	for(int i=0;i<10;i++)
	{
		min=i;
		for(int j=i+1;j<10;j++)
		{
			if((*compare)(work[j],work[min]))
			min=j;
		}
		temp=work[i];
		work[i]=work[min];
		work[min]=temp;
	}
}

void swap(int *const element1Ptr, int *const element2Ptr)
{
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

bool ascending(int a, int b)
{
	return a<b;
}
bool descending(int a, int b)
{
	return a>b;
}



