#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}
	return -1;

}


int main()
{
	int arr[10]={10,9,8,7,6,5,4,3,2,1};

	int index = LinearSearch(arr,10,11);

	if (index != -1)
	{
		cout << "Found" << endl;
		cout << arr[index] << endl;
	}
	else
		cout << "Not found" << endl;

	



	return 0;
}