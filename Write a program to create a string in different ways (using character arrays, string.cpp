#include<iostream>
using namespace std;
int main() {
	string words;
	char arr[50] = { 'h','e','l','l','o',' ','W','o','r','l','d'};
	cout <<"string from char array :"<< arr << endl;
	const char* stringLiteral = "Hello Dawood"; 
	cout << "String from literal: " << stringLiteral<<endl;

	string strObject = "Hello kysy hooo";
	cout << "String from string object: " << strObject<<endl ;
	return 0;

}