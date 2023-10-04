#include <iostream>
using namespace std;

void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int factorialNum;
	int factorial = 1;

	cout << "Choose a number to take the factorial off: ";
	cin >> factorialNum;

	if (factorialNum <= 0) {
		do {
		cout << "Error: Must be positive number: ";
		cin >> factorialNum;
			} while (factorialNum <= 0);
	}

	if (factorialNum > 0) {
		cout << factorialNum << "! = ";

		for (int i = factorialNum; i > 0; i--) {
			if (i != 1) {
				cout << i << " * ";
			}
			else {
				cout << i;
			}

			factorial *= i; 
		}
		cout << " = " << factorial << "\n";
	}
}
void arithmetic() {
	int startingNum;
	int difference;
	int numOfElements;
	int sum = 0;
	int temp = 0;

	cout << "Choose a number to start with: ";
	cin >> startingNum;

	cout << "Choose a number to add each time: ";
	cin >> difference;

	cout << "Choose the number of elements in the series: ";
	cin >> numOfElements;

	if (numOfElements <= 0) {
		do {
			cout << "Error: Must be positive number: ";
			cin >> numOfElements;
		} while (numOfElements <= 0);
	}

	if (numOfElements > 0) {
		cout << startingNum;

		for (int i = 0; i <= (numOfElements - 1); i++) {
			temp = (startingNum + (difference * i));
			sum += temp;
			if (i != 0) {
				cout << " + " << temp;
			}
		}

		cout << " = " << sum << "\n";
	}
}
void geometric() {
	int startingNum;
	int constant;
	int numOfElements;
	int sum = 0;
	int temp = 0;

	cout << "Choose a number to start with: ";
	cin >> startingNum;

	cout << "Choose a number to multiply each time: ";
	cin >> constant;

	cout << "Choose the number of elements in the series: ";
	cin >> numOfElements;

	if (numOfElements <= 0) {
		do {
			cout << "Error: Must be positive number: ";
			cin >> numOfElements;
		} while (numOfElements <= 0);
	}

	if (numOfElements > 0) {
		cout << startingNum;

		temp = startingNum;
		sum += startingNum;
		for (int i = 1; i <= (numOfElements - 1); i++) {
			temp *= constant;
			sum += temp;
			cout << " + " << temp;
		}

		cout << " = " << sum << "\n";
	}
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}