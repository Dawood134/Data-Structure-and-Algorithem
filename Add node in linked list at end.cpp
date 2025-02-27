#include<iostream>
using namespace std;
struct List {
	int data;
	List* address;
}*first = NULL, * Next = NULL,*current=NULL,*node=NULL;

void insertEnd() {
	if (first == NULL) {
	     List*node = new List();
		 cout << "Enter number you want to insert" << endl;
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
			cout << "enter number you want to insert" << endl;
			cin >> node->data;
			Next->address = node;
			node->address = NULL;
		
	}
	
}
void deleteEnd() {
	if (first == NULL) {
		cout << "No Node exist" << endl;
	}
	else {
		Next = current = first;
		while (Next->address != NULL) {
			current = Next;
			Next = Next->address;
		}
		cout << "Value Deleted" << Next->data << endl;
		current->address = NULL;
		delete Next;
	}
}
int main() {
	insertEnd();
	insertEnd();
	insertEnd();
	insertEnd();
 deleteEnd();
		deleteEnd();


	return 0;

}