#include<iostream>
#include<stack>
using namespace std;
string inverseString(string s) {
	string rev;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == ')') {
			rev += '(';
		}
		else if (s[i] == '(') {
			rev += ')';
		}
		else {
			rev += s[i];
		}
	}
	
	return rev;
}
int prece(char c) {
	if (c == '^'){
		return 3;
	}
	else if (c == '*' || c == '/') {
		return 2;
	}
	else if (c == '+' || c == '-') {
		return 1;
	}
	else {
		return -1;
	}
 }
string infixToPrefix(string s) {
	string res;
	stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			res += c;
}
		else if (c == '(') {
			st.push(c);

		}
		else if (c == ')') {
			while (!st.empty() && st.top() != '(') {
				res += st.top();
				st.pop();
			}
			if (!st.empty()) {
				st.pop();

			}
		}
		else {
			while (!st.empty() &&st.top()!='('&& prece(c) >= prece(st.top())) {
				res += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	
	return res;
}
void displayInfixToPrefix(string s) {
	cout << "Infix to Prefix conversion :";
	
	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}
 }
int main() {
	string s;
	cout << "Enter infix expression :";
	cin >> s;
	string inverted = inverseString( s);

	string postfix = infixToPrefix(inverted);
	string invertedAgain = inverseString(postfix);

	displayInfixToPrefix(invertedAgain);
}