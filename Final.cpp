/*
 * Cameron Griffith
 * 4/28/2023
 * This program will include a class called processor that tracks
 * uppercase, lowercase, and any other characters.
 */

#include <iostream>
#include <fstream>
using namespace std;


class processor {
	public:
		processor();

		// Methods
		void process(char);

		double getPercentUpper();
		double getPercentLower();
		double getPercentOther();
		void printInfo();

		// Getters/Setters
		int getNumberOfUppers();
		void setNumberOfUppers(int);

		int getNumberOfLowers();
		void setNumberOfLowers(int);

		int getNumberOfOthers();
		void setNumberOfOthers(int);

		int getTotalChar();
		void setTotalChar(int);

	private:
		int numberOfUppers;
		int numberOfLowers;
		int numberOfOthers;
		int totalChar;
};

processor::processor() {
	numberOfUppers = numberOfLowers  = totalChar = numberOfOthers = 0;
}

int processor::getNumberOfUppers() {
	return numberOfUppers;
}
void processor::setNumberOfUppers(int num) {
	if (num < 0) {
		num = 0;
	}

	numberOfUppers = num;
}

int processor::getNumberOfLowers() {
	return numberOfLowers;
}

void processor::setNumberOfLowers(int num) {
	if (num < 0) {
		num = 0;
	}
	numberOfLowers = num;
}

int processor::getNumberOfOthers() {
	return numberOfOthers;
}
void processor::setNumberOfOthers(int num) {
	if (num < 0) {
		num = 0;
	}

	numberOfOthers = num;
}

int processor::getTotalChar() {
	return totalChar;
}
void processor::setTotalChar(int num) {
	if (num < 0) {
		num = 0;
	}

	totalChar = num;
}





void processor::process(char ch) {
	//if is an uppercase, incriment upper, if its lower incriment
	//if it is other incriment
	totalChar++;
	if (isupper(ch)) {
		numberOfUppers++;
	}	else if ( islower(ch)) { 
			numberOfLowers++;
	}
		 else numberOfOthers++;
	
}

double processor::getPercentUpper() {
	if (totalChar == 0) return 0.0;
	return (100.0 * numberOfUppers) / totalChar;	
}

double processor::getPercentLower() {
	if (totalChar == 0) return 0.0;
	return (100.0 * numberOfLowers) / totalChar;	
}

double processor::getPercentOther() {
	if (totalChar == 0) return 0.0;
	return (100.0 * numberOfOthers) / totalChar;	
}



void processor::printInfo() {
	cout << "total Characters: \t" << totalChar << endl;
	cout << endl;
	cout << "total Uppercase: \t" << numberOfUppers << endl;
	cout << "Percent of Uppers: \t" <<
	getPercentUpper() << "%"  << endl;
	cout << endl;
	cout << "total Lowercase: \t" << numberOfLowers << endl;
	cout << "Percent of Lowers: \t" << getPercentLower() << "%" << endl;
	cout << endl;
	cout << "total Others: \t \t" << numberOfOthers << endl;
	cout << "Percent of Others: \t" <<  getPercentOther() << "%" << endl;
}




int main(int argc, char * argv[]) {
	if (argc != 2) {
		cerr << "Invalid number of arguments" << endl;
		cerr << argv[0] << " <fileToProcess>" << endl;
		return 1;
	}

	ifstream reader(argv[1]);	
	if (!reader) {
		cerr << "Error opening " << argv[1] 
			<< " for reading. Exiting." << endl;
		return 2;
	}

	processor myCharCruncher;
	char myChar;	
	while (reader.get(myChar)) {
		myCharCruncher.process(myChar);	
	}

	reader.close();
	myCharCruncher.printInfo();

	return 0;
}














