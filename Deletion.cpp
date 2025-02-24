#include<iostream>
using namespace std;
void deletion(int array[], int index) {
	for (int i = index; i <10; i++) {
		array[i] = array[i + 1];
	
  }
	for (int i = 0; i < 9; i++) {
		cout << array[i] << endl;
	}
}
int main() {
	int array[10] = {10,20,30,40,50,60,70,80,90,100};
	int index;
	cout << "Enter index number" << endl;
	cin >> index;

	deletion(array, index);

return 0;
}