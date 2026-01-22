// Function to reverse the characters of a string, recursive
#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << reverse(str) << endl;
}

string reverse (const string& s) {
	static int count = 0;
count++;
cout << "count: " << count << endl;
	if (s.size() > 1)
		return reverse(s.substr(1)) + s.substr(0, 1);
	return s;
}