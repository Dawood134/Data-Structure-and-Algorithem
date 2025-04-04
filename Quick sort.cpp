#include <iostream>
using namespace std;

int partition(int*array,int st,int end) {
	int pivot = array[end];
	int index = st - 1;
	for (int i = st; i < end; i++) {
		if (array[i] < pivot) {
			index++;
			swap(array[index], array[i]);
		}
	
	}
	index++;
	swap(array[index], array[end]);
	return index;

}

void quickSort(int * array, int st, int end) {
	if (st < end) {
		int pivotCorrectIndex = partition(array, st, end);
		quickSort(array, st, pivotCorrectIndex - 1);
		quickSort(array, pivotCorrectIndex + 1, end);
	}
}
int main() {
	int size = 0;
	cout << "Enter size of an Array : " ;
	cin >> size;
	int*array = new int[size];
	cout << "Enter numbers in Array :" << endl;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	cout << "unsorted  Array = {";
	for (int i = 0; i < size; i++) {
		cout << array[i];
		if (i != size - 1) cout << ",";
	}
	cout << "}" << endl;
	quickSort(array, 0, size-1);
	cout << "Sorted Array = {";
	for (int i = 0; i < size; i++) {
		cout << array[i];
		if (i != size - 1) cout << ",";
	}
	cout << "}" << endl;
}