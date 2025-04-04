#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& array, int st, int mid, int end) {
	vector<int>temp;
	int i = st;
	int j = mid + 1;
	while (i <= mid && j <= end) {
		if (array[i] <= array[j]) {
			temp.push_back(array[i]);
			i++;
		}
		else {
			temp.push_back(array[j]);
			j++;
		}
	}
	while (i <= mid) {
		temp.push_back(array[i]);
		i++;
	}
	while (j <= end) {
		temp.push_back(array[j]);
		j++;
	}
	for (int index = 0; index < temp.size(); index++) {
		array[index + st] = temp[index];
	}
}
void mergeSort(vector<int>& array, int st, int end) {
	if (st < end) {
		int mid = st + (end - st) / 2;
		mergeSort(array, st, mid);
		mergeSort(array, mid + 1, end);
		merge(array, st, mid, end);

	}
}


int main() {
	vector <int> array;
	cout << "Enter integers in array (if you want to stop enter -1) :" << endl;
	int input;


	while (true) {
		cin >> input;
		if (input == -1) {
			break;
		}
		array.push_back(input);

	}
	cout << "unsorted array :" << endl;
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	mergeSort(array, 0, array.size()-1);
	cout << "sorted array is :" << endl;
	for (int i = 0; i <array.size(); i++) {
		cout << array[i] << " ";

	}
}