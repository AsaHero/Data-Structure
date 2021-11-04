#include <iostream>

using namespace std;

void insertion_sort(int *arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = arr[i];
		int j = i - 1;

		while(key < arr[j] && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}

}

int main()
{
	int arr[10] = {8,2,12,6,14,1,5,3,4,10};

	insertion_sort(arr, 10);

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}