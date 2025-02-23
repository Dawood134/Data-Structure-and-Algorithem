#include<iostream>
using namespace std;
void insertNewString(string original, string substring,int index) {
	string result = "";
	for (int i = 0; i < index; i++) {
		result += original[i];
	}
	for (int i = 0; i < substring.length(); i++) {
		result += substring[i];
	}
	for (int i = index; i < original.length(); i++) {
		result += original[i];
	}
	cout << result;
}
int main() {
	string original = "Hello Dawood ";
	string substring = "Handsome ";
	int index =0;
	cout << "Enter index in which you want to insert substring :" << endl;
	cin >> index;
	insertNewString(original, substring, index);
}