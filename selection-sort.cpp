# include "includeAll.h"
using namespace std;

void sort (int array[], int size) {
	
	int minIndex = 0;
	
	for (int i = 0; i < size-1; ++i) {
		minIndex = i;
		for (int j = i+1; j < size; ++j) {
			if (array[minIndex] > array[j])
				minIndex = j;
		}
		swap (&array[minIndex], &array[i]);
	}
}


int main () {
	
	int size = 0, array[100] = { 0 };
	
	cout << endl << "Enter Size: ";
	cin >> size;
	
	cout << endl << "Enter elements: " << endl;
	for (int i = 0; i < size; ++i)
		cin >> array[i];

	cout << endl << "Array before sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
		
	sort (array, size);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
		
	return 0;
	
}
