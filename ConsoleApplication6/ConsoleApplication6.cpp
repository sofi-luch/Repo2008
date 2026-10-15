#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double V, m, m0;
	double const c = 298792.0;
	int WidthBetweenVariables = 15;
	int WidthBetweenValues = 10;
	int NumberOfDigitsAfterPoint = 3;

	//we cin the primary value of the variable
	cout << "V = ";
	cin >> V;

	cout << "m0 = ";
	cin >> m0;

	cout << fixed << setprecision(NumberOfDigitsAfterPoint);
	cout << "\nV" << setw(WidthBetweenVariables) << "m" << endl;

	while (V < 250000.0) {
		m = m0 / sqrt(1.0 - pow((V / c), 2.0));

		cout << V << setw(WidthBetweenValues) << m << endl;

		V += 50000.0;
	}

	do {
		m = m0 / sqrt(1.0 - pow((V / c), 2.0));

		cout << V << setw(WidthBetweenValues) << m << endl;

		V += 10000.0;
	} while (V <= 290000.0);

	return 0;
}