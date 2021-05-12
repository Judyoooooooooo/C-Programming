#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void insertion_sort(int arr[], int length);
void print_array(int array[],int size);

int main()
{
    int array[] = {81,27,47,53,26,2,33,73,66,91};
    insertion_sort(array,10);
    print_array(array,10); 
    return 0;
}

void insertion_sort(int arr[], int length)
{
    int i,j,tmp;
    for (i = 1; i < length; i++)
	 {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
		{
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array(int array[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<setw(4)<<array[j] ;
    }
}
