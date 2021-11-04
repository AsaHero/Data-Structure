#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int value)
{
	int lower = 0;
	int upper = size - 1;

	while(lower <= upper)
	{
		int mid = lower + (upper - lower) / 2;

		if (arr[mid] == value)
			return mid;
		
		if (value < arr[mid])
			upper = mid - 1;
		
		else
			lower = mid + 1;
		
	}
	return -1;
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	int index = BinarySearch(arr,10,11);

	if (index != -1)
	{
		cout << "Found" << endl;
		cout << arr[index] << endl;
	}
	else
		cout << "Not found" << endl;
	return 0;
}
