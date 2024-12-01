/*
  Cameron Griffith
  2/2/2023
  The purpose of this program is to convert Inches to Longways
*/
#include <iostream>

using namespace std;

int main() {
	double Inches;
	double Longways;

	cout << "enter the length in inches: " ;
	cin >> Inches ; 

	Longways = Inches / 30 ;
	cout << Inches << " Inches is " << Longways << " Longways. ";

	return 0;
}
