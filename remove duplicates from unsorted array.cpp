#include <iostream>
using namespace std;
void removesDuplicatesNumber(int array[], int size, int index) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (array[i] == array[j]) {
				array[j] = '-';

			}
		}
	}
	for (int i = 0; i < size; i++) {
		if (array[i] != '-') {
			array[index] = array[i];
			index++;
		}
	}
	cout << "The given array is with removing all duplicates numbers:  " ;

	for (int i = 0; i < index; i++) {
		cout <<" "<< array[i];

	}
}
int main() {
	int size = 10;
	int index = 0;
	int array[] = { 8,3,8,4,3,5,6,7,5,7 };
	removesDuplicatesNumber(array, size, index);
}