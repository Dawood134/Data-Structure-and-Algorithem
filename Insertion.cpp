#include<iostream>
using namespace std;
void insertion(int array[],int userNum,int index,int insertedArray[]) {
	for (int i = 0; i < index; i++) {
		insertedArray[i] = array[i];
	}
	insertedArray[index] = userNum;
	for (int i =index+1; i <11; i++) {
		insertedArray[i] = array[i-1];
	}
	for (int i = 0; i < 11; i++) {
		cout<<insertedArray[i]<<endl ;
	}

}
int main() {
	int array[10]={ 10,20,30,40,50,60,70,80,90,100 };
	int insertedArray[11];
	int userNum;
	int index;
	cout << "Enter index number" << endl;
	cin >> index;
	cout << "Enter Number you want to insert" << endl;
	cin >> userNum;
	insertion(array, userNum,index,insertedArray);
}