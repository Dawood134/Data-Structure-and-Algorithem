#include<iostream>
using namespace std;
void secondMaximumNumber(int array[], int maxNum, int secondMaxNum) {
	for (int i = 0; i < 10; i++) {
		if (array[i] > maxNum) {
			secondMaxNum = maxNum;
			maxNum = array[i];
		}
		else if (array[i] > secondMaxNum && array[i] != maxNum) {
			secondMaxNum = array[i];
		}

	}

	cout << "The second maximum number of the given array is :  "<<secondMaxNum;
 }
int main() {
	int maxNum=0;
	int secondMaxNum = 0;
	int array[10] = {12,32,50,49,23,4,55,545,511,2};
	secondMaximumNumber(array, maxNum, secondMaxNum);
	
}