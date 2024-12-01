/*
 Cameron Griffith
 4/4/2023
 this program uses a menu and determines the price per cubic inch of piza
 I worked with Ethan
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void printMenu();
int getMenuChoice();
double intakeValue();
double calcEff();

int main() {
	int choice;
	do {
		printMenu();
		choice = getMenuChoice();
		if (choice == 1) {
			cout <<"your cost per inch^3 is: " << calcEff() << endl;
		}else if (choice == 2) {
			break;
		}

		} while (choice != 2);
		cout << "thankyou for using my program!" << endl;
		return 0;
}


// this function prints the menu 
void printMenu() {
	cout <<"**************************" << endl;
	cout <<"1.Calculate Efficiency" << endl;
	cout <<"2.Quit" << endl;
	cout <<"**************************" << endl;
}

// this function intakes the menue choice
// and determines if it is a proper value
// @return value
int getMenuChoice() {
	int choice;
	cout <<"Enter choice: " << endl;
	cin >> choice;
	
	while (choice < 1 || choice > 2) {
		cout <<"invalid entry. enter a 1 or a 2: " << endl;
		cin >> choice;
	}
	return choice;
	}


// this function intakes a value and
// makes sure it is a positive, non-zero number
// @return val
double intakeValue() {
	double value;
	cin >> value;
	while(value < 0.01) {
		cout <<"Please give me a positive number: " << endl;
		cin >> value;
	}
	return value;
}
// this function uses the intake values to calculate the efficiency
// @return eff
double calcEff() {
	double radius;
	double thick;
	double cost;
	double eff;
	cout <<"enter cost: ";
	cost = intakeValue();
	cout <<"enter radius: ";
	radius = intakeValue();
	cout<<"enter thickness: ";
	thick = intakeValue();
	eff = (cost / (((radius * radius) * 3.14) * thick)); 
	return eff;
	}
