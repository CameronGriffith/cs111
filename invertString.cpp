/*
 Cameron Griffith
 3/10/23
 this program inverts a c-style string
 */
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[] = "This is my string";
	cout << "Origional: " << str << endl;
	cout << "reverse:  ";
	for(int i = strlen(str) - 1; i >= 0; i--) {
		cout << str[i];
		}
	cout << endl;	
	return 0;
}
