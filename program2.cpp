/*
 Cameron Griffith
 3/16/2023
 this program replicates the strlen function
 */
#include <iostream> 
using namespace std;

// prototype
int myStrLen(char * str);

int main() {
	char str[] = "Hello!";
	myStrLen(str);
	return 0;
}

int myStrLen( char * str) {
	int counter = 0; 
	for( char * ptr = str; *ptr; ptr++) {
		counter++;
	}
	cout << counter << endl;
}
