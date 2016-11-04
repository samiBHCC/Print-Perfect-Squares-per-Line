// Print the perfect squares up to a user defined limit n per line
// Perfect Squares to a Limit
// Programmer: Osama A. Elsaeed
// Last Modified: 11/03/2016

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// CMD Formatting
	system("title Perfect Squares to a Limit");
	system("color f4");

	// Definitions
	int limit, perLine;
	const int
		GAP_BANNER = 61,
		GAP_NUM = 8,
		IGNR = 999;

	// Banner
	cout
		<< setw(GAP_BANNER) << "Perfect Squares to a Limit\n"
		<< setw(GAP_BANNER) << "     by Osama Elsaeed     \n";

	while (true) {

		// Input
		cout
			<< endl << endl
			<< "What is the limit: ";
		cin >> limit;
		cin.ignore(IGNR, '\n');

		cout << "How many perfect squares would you like per line: ";
		cin >> perLine;
		cin.ignore(IGNR, '\n');

		// Output
		cout
			<< "Here are the perfect square up to "
			<< limit << ". " << perLine
			<< "  perfect squares per line:\n";

		for (int k = 1, i = 1; k <= limit; k++) {
			if (sqrt(k) == int(sqrt(k))) {
				cout << setw(GAP_NUM) << k;

				if (i%perLine == 0)
					cout << endl;

				i++;
			}
		}

		cout
			<< endl << endl
			<< "   ====================================================================";
	}
}