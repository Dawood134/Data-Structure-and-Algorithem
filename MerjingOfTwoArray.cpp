#include<iostream>
using namespace std;
void combineArray(int array1[], int array2[], int merjedArray[],int size) {
	cout << "The Merjed Array is :" << endl;
	for (int i = 0; i < size; i++) {
		merjedArray[i] = array1[i];
	}
	for (int i = size; i < size * 2; i++) {
		merjedArray[i] = array2[i - 5];
	}
	for (int i = 0; i < size * 2; i++) {
		cout << merjedArray[i] << endl;
	}
}
void sortedArray(int merjedArray[], int size) {
	int arraySorted[10];
	int temp;
	for (int i = 0; i <10; i++) {
		for (int j = 0; j < 9; j++) {
			if (merjedArray[i] < merjedArray[j]) {
				temp = merjedArray[i];
				merjedArray[i] = merjedArray[j];
				merjedArray[j] = temp;
			}
			
		}

	}
	cout << "Sortd MerjegArray" << endl;
	for (int i = 0; i < size * 2; i++) {
		cout << merjedArray[i] << endl;
	}
}
int main() {
	const int size = 5;
	int array1[size],array2[size],merjedArray[size*2];
	cout << "Enter number for Array1 :" << endl;
	for (int i = 0; i < size; i++) {
		cin >> array1[i];
	}
	cout << "Enter number for Array2 :" << endl;
	for (int i = 0; i < size; i++) {
		cin >> array2[i];
	}
	combineArray(array1, array2, merjedArray, size);
	sortedArray(merjedArray, size);
	return 0;

}