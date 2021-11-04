#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void bubble_sort(int *arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < (size - i - 1); ++j)
		{
			if(arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
		
	}
}


int main()
{
	int arr[10] = {8,2,12,6,14,1,5,3,4,10};

	bubble_sort(arr, 10);

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}



	return 0;
}