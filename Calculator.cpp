#include <iostream>
#include <string>
#include <stdexcept>

int main() {
	int output = NULL;

	int firstNumber;
	std::cout << "Please enter the first number.\n";
	std::cin >> firstNumber;
ACTION:
	if (output != NULL) {
		firstNumber = output;
		std::cout << "Using previous result \"" << output << "\" as first number.\n";
	}
	std::cout << "Please enter action\n";
	std::string action;
	std::cin >> action;
	if (action != "+" && action != "-" && action != "/" && action != "*") {
		std::cout << "Unknown action: " << action << "\n";
		goto ACTION;
	}
	int secondNumber;
	std::cout << "Please enter the second number.\n";
	std::cin >> secondNumber;
	if (action == "-") {
		output = firstNumber - secondNumber;
	}
	else if (action == "*") {
		output = firstNumber * secondNumber;
	}
	else if (action == "/") {
		output = firstNumber / secondNumber;
	}
	else {
		output = firstNumber + secondNumber;
	}

	std::cout << "Your result was: " << output << "\n";
	system("pause");
	goto ACTION;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
