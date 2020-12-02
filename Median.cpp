// Program will take in data then calculate the median

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> VALUES;
std::vector<double> VALUES_COPY;
std::string input;
int index = 0;
int count = 0;
int middle_1_location = 0;
double middle_1 = 0;
int middle_2_location = 0;
double middle_2 = 0;
int median_location = 0;
double MEDIAN;

int main() {
	std::cout << "Input values (Input 'd' when finished inputting)\n";
	
	// Get values
	while (input != "d") {
		std::cin >> input;
		if (input != "d") {
			VALUES.push_back(input);
		}
	}
	
	// Get number of values
	for (std::string value : VALUES) {
		count++;
	}

	// Copy vector of strings to vector of doubles
	for (std::string value : VALUES) {
		VALUES_COPY.push_back(std::stod(VALUES[index]));
		index++;
	}

	// Sort from lowest to highest
	std::sort(VALUES_COPY.begin(), VALUES_COPY.end());

	// If number is even
	if (count % 2 == 0) {
		middle_1_location = ((count / 2) - 1);
		middle_2_location = middle_1_location + 1;
		middle_1 = VALUES_COPY[middle_1_location];
		middle_2 = VALUES_COPY[middle_2_location];
		MEDIAN = ((middle_1 + middle_2) / 2);
	}
	// If number is odd
	else {
		median_location = ((count + 1) / 2);
		MEDIAN = VALUES_COPY[median_location - 1];
	}

	std::cout << "\nThe median is: " << MEDIAN;
}
