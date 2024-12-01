
/*
	Cameron Griffith
	2/13/23
	This program converts the case of letters
*/
#include <iostream>

using namespace std;

int main () {

	char Cheese = 'z';
	int counter = 0; 
	while ( Cheese != '.')  {
		cin >> Cheese ;

		if (Cheese >= 'A' && Cheese <= 'Z') {
			cout << (char)(Cheese + ' ') << endl;
			counter++;
		}else if (Cheese >= 'a' && Cheese <= 'z') {
			cout << (char)(Cheese - ' ') << endl;
			counter++;
		} else if (Cheese != '.'){
			cout << Cheese << endl;}
	} 
	cout << "durring this iteration, the program switched " << counter << " letters" << endl;
	return 0;
}
