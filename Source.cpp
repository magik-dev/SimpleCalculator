/*
 * The purpose of this application is to perform calculations
 * involving multiplication, division, subtraction, and addition.  // Header comments should contain a description of the purpose of the application
 *
 * Author: Willie Carranza
 * Date: November 2, 2023
 */

#include <iostream> // Related items should be grouped together, not separated by an empty line
#include <cctype>   // Added to evaluate characters and check validity of expressions
#include <iomanip>  // Added in order to set precision of decimal point values
using namespace std;

int main() {             // The main method must be declared with a return type of int because the program exits by returning 0.
	                     // Main method's curly braces should be in the style of [ADD STYLE HERE]
	                     // char statement[100]; Not needed
	double op1, op2;     // int changed to double to allow for decimal point values
	char operation;
	char answer = 'Y';   // A char must be assigned a value enclosed by ' ', not " ".
	                     // Added empty line between variable declarations and while loop for improved readability
	while (toupper(answer) == 'Y') { // toupper() used to evaluate for y, regardless of case
		                             // A while loop's curly braces should be in the style of [ADD STYLE HERE]
		                             // Items declared under the scope of another item's curly braces must be indented equally 
		cout << "Enter expression: " << endl; // Related Items should be grouped together, leaving an empty line between groups of items
		cin >> op1 >> operation >> op2;       // Swapped op1 and op2 to reflect the correct sequence of values recieved by user

		if (operation == '+') { // Changed "+" to a char ('+') because equality operator should be used between two values of the same type in "if" statement
				                // Replaced ";" with curly braces for proper "if" syntax
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;  // Placed statement within "if" block
				                                                        // Replaced >> before the " = " in the output to << for proper output syntax
		}
		else if (operation == '-') { // Changed "if" statement to "else if" statement because the operation will only fit one of the four operations
				                     // Replaced ";" with curly braces for proper "else if" syntax
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Replaced >> after "cout" with << for proper output syntax
		}
		else if (operation == '*') { // Changed "if" statement to "else if" statement because the operation will only fit one of the four operations;
				                     // Added curly braces for proper "else if" syntax
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // changed  division symbol in output statement to a multiplication symbol because that is the operation being performed
				                                                       // Added semicolon to the end of the output statment for proper syntax
		}
		else if (operation == '/') { // Changed indentation to align with other "if" and "else if" statements to reflect scope under the while loop
				                     // Added curly braces for proper "else if" syntax
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // changed  multiplication symbol in output statement to a division symbol because that is the operation being performed
		}
		else { // Else statement added to catch invalid operators in expression
			cout << "Invalid expression: Operator must be +, -, *, or /." << endl;
		}

		cout << "\n\nDo you wish to evaluate another expression?" << endl;
		cin >> answer;

		while (toupper(answer) != 'Y' && toupper(answer) != 'N') { // Checks for valid user action ("Y" or "N") regardless of case
			cout << "Invalid user action: Enter \"Y\" or \"N\"." << endl;
			cout << "\n\nDo you wish to evaluate another expression?" << endl;
			cin >> answer; // Gets new input from user
		}
	}

	cout << "Program Finished." << endl; // Is output if user enters 'N', regardless of case
	return 0;                            // Exits program (Not necessary, but good practice)
}






