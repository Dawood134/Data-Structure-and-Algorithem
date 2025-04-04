#include <iostream>
#include <stack>
using  namespace std;
int prece(char c) {
	if (c == '^') {
		return 3;
	}
	else if (c == '*'||c=='/') {
		return 2;
	}
	else if (c == '+'||c=='-') {
		return 1;
	}
	else {
		return -1;
	}
  }
string infixToPosfix(string s) {
	stack<char>st;
	string res;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			res += s[i];
		}
		else if (s[i] == '(') {
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			while (!st.empty() && st.top() != '(') {
				res += st.top();
				st.pop();
			}
			if (!st.empty()) {
				st.pop();
			}
		}
		else {
			while (!st.empty() && prece(st.top()) >= prece(s[i])){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);

		}
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	return res;
 }
void displayPostfixString(string s) {
	cout << "Postfix Expression is:";
	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}
}

int main() {

	string infix;
	cout << "Enter infix string :";
	cin >> infix;
	string postfix = infixToPosfix(infix);
	displayPostfixString(postfix);


}