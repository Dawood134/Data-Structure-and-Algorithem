#include<iostream>
using namespace std;
void traversing(int array[]) {
	cout << "Traversing of array" << endl;
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
	}
}
int main() {
	int array[10] = { 10,15,20,25,30,35,40,45,50,55 };
	traversing(array);
	return 0;
}