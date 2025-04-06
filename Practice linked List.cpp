#include<iostream>
using namespace std;
struct List {
	int data;
	List* address;
}*first=NULL, *Next=NULL;
void insertEnd() {
	if (first == NULL) {
		List* node = new List();
		cout << "Enter data in node 1" << endl;
		cin >> node->data;
		node->address = NULL;
		first = node;
	}
	else {
		Next = first;
		while (Next->address != NULL) {
			Next = Next->address;
		}
		List* node = new List();
		cout << "Enter data in node next" << endl;
		cin >> node->data;
		Next->address = node;
		node->address = NULL;
	}
}
void insertStart() {
	if (first != NULL) {
		List* node = new List();
		cout << "Enter data for first node" << endl;
		cin >> node->data;
		node->address = first;
		first = node;
	}
}
void display() {
	if (first != NULL) {
		Next = first;
		while (Next->address != NULL) {
			cout << Next->data;
			Next = Next->address;
		}
			cout << Next->data;

	}
}
void insertKeyBefore() {
	cout << "Enter  key " << endl;
	int key;
	cin >> key;
	Next = first;
	while (Next->address!=NULL&&Next->address->data != key) {
		Next = Next->address;
		
	}
	if (Next->address == NULL) {
		cout << "key not found" << endl;
		return;
	}
	List* node = new List();
	cout << "Enter data for key Before node" << endl;
	cin >> node->data;
	 node->address=Next->address;
	 Next->address = node;
}
void insertKeyAfter() {
	cout << "Enter  key " << endl;
	int key;
	cin >> key;
	Next = first;
	while (Next->address != NULL&&Next->data != key) {
		Next = Next->address;
	}
	if (Next->address == NULL) {
		cout << "key not found" << endl;
		return;
	}
	List* node = new List();
	cout << "Enter data for key After node" << endl;
	cin >> node->data;
	node->address = Next->address;
	Next->address = node;
}
int main() {
	insertEnd();
	insertEnd();
	insertEnd();
	insertEnd();
	insertStart();
	display();
	insertStart();
	display();

	insertEnd();
	display();
	
	insertKeyBefore();
	insertKeyAfter();

	display();


}