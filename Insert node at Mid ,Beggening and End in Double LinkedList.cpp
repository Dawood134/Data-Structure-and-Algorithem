#include<iostream>
using namespace std;
struct List {
	int data;
	List* previousNodeAddress;
	List* nextNodeAddress;

}*first = NULL, * temp = NULL, * node = NULL;
void InsertNodeEnd() {
	if (first == NULL) {
		cout << "Enter data for first node :" << endl;
		List* node = new List();
		cin >> node->data;
		node->previousNodeAddress = NULL;
		node->nextNodeAddress = NULL;
		first = node;
	}
	else {
		temp = first;
		while (temp->nextNodeAddress != NULL) {
			temp = temp->nextNodeAddress;
		}
		cout << "Enter data for next node :" << endl;
		List* node = new List();
		cin >> node->data;
		node->previousNodeAddress = temp;
		node->nextNodeAddress = NULL;
		temp->nextNodeAddress = node;
	}
}
void InsertNodeMid() {
	int value=0;
	cout << "Enter value at which you want to Insert Node :" << endl;
	cin >> value;
	temp = first;
	while (temp != NULL&&value != temp->data) {
		temp = temp->nextNodeAddress;
	}
	if (temp == NULL) {
		cout << "Value not found in the list." << endl;
		return;
	}
	List* node = new List();
	cout << "Enter data for Mid Node :" << endl;
	cin >> node->data;

	node->nextNodeAddress = temp->nextNodeAddress;
	node->previousNodeAddress = temp;

	if (temp->nextNodeAddress != NULL) {
		temp->nextNodeAddress->previousNodeAddress = node;

	}
	temp->nextNodeAddress = node;

}
void InsertNodeBiggening() {
	if (first->previousNodeAddress == NULL) {
		List* node = new List();
		cout << "Enter data for Biggening Node :" << endl;
		cin >> node->data;
		node->previousNodeAddress =	NULL;
		node->nextNodeAddress = first;
		first = node;

	}
}
void PrintList() {
	temp = first;
	cout << "List: ";
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->nextNodeAddress;
	}
	cout << endl;
}

int main() {
	InsertNodeEnd(); 
	InsertNodeEnd();
	InsertNodeEnd();
	InsertNodeEnd();
	PrintList();
	InsertNodeMid();
	PrintList();
	InsertNodeBiggening();
	PrintList();

	return 0;
}