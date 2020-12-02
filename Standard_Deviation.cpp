// Calculates the standard deviation of a set of data

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

std::vector<std::string> DATA;
std::vector<double> DATA_COPY;
std::string input;
int index = 0;
double MEAN;
double SUM = 0;
int TOTAL_VALUES = 0;
double STANDARD_DEVIATION = 0;

int main() {
	std::cout << "Input values (Input 'd' when finished inputting)\n";

	// Get values
	while (input != "d") {
		std::cin >> input;
		if (input != "d") {
			DATA.push_back(input);
		}
	}

	// Copy string vector to double vector
	for (std::string value : DATA) {
		DATA_COPY.push_back(std::stod(DATA[index]));
		index++;
		TOTAL_VALUES++;
	}

	// Find mean
	for (double value : DATA_COPY) {
		SUM += (value);
	}
	MEAN = (SUM / TOTAL_VALUES);
	SUM = 0;

	// Subtract mean from each value and square and add to sum
	for (double value : DATA_COPY) {
		SUM += pow((value - MEAN), 2);
	}

	STANDARD_DEVIATION = sqrt(SUM / (TOTAL_VALUES - 1));
	std::cout << "\nThe standard deviation is: " << STANDARD_DEVIATION;
}
