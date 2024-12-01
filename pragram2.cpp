/*
 Cameron Griffith
 2/23/2023
 this program takes c-style string and counts the number of capital and lowercase numbers in it
 */
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char input[20];
	int capital = 0;
	int lowercase = 0;

	cout << "Input string here: "; 
	cin >> input;

	for (int i = 0; input[i]; i++) {
		if (isupper(input[i])) {
			capital++;
		} else if (islower(input[i])) {
			lowercase++;
		}
	}
	cout << "In this string there are " << capital << 
	" capital letters and " << lowercase << " lowercase letters." << endl;
	return 0;
}
		
