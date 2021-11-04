#include <iostream>

using namespace std;

void selection_sort(int arr[], int size)
{
	int min;
	int min_index;
	int temp;

	for (int i = 0; i < size; ++i)
	{
		min = arr[i];
		min_index = i;

		for (int j = i; j < size; ++j)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_index = j;
			}
		}		
		
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}


int main()
{
	int arr[10] = {8,2,12,6,14,1,5,3,4,10};

	selection_sort(arr, 10);

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}