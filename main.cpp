#include <iostream>
#include <iomanip>

int main() {
	//1. array of size 10 & values (0-99)
	int scores[10] = { 73,84,62,88,90,79,94,82,57,79 };
	int size = 10;
	std::cout << "Original scores:";
	for (int i = 0; i < size; i++) {
		std::cout << scores[i] << " ";
	}
	std::cout << "\n";

		//2.Sum
		int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += scores[i];
	}
	std::cout << "Sum: " << sum << "\n";

	//3. average, double so integers aren't truncated
	double average = static_cast <double>(sum) / size; 
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Average: " << average << "\n";

	//4. Count students who passed (score >=70)
	int passingcount = 0;
	for (int i = 0; i < size; i++) {
		if (scores[i] >= 70) {
			passingcount++;
		}
	}
	std::cout << "Students passing (>=70): " << passingcount << "\n";

	//5. Min and max 
	int minScore = scores[0];
	int maxScore = scores[0];
	int minIndex = 0;
	int maxIndex = 0;

	for (int i = 1; i < size; i++) {
		if (scores[i] < minScore) {
			minScore = scores[i];
			minIndex = i;
		}
		if (scores[i] > maxScore) {
			maxScore = scores[i];
			maxIndex = i;
		}
	}
	std::cout << "lowest score: " << minScore << " (at index" << minIndex << " \n";
	std::cout << "Highest score:" << maxScore << " (at index " << maxIndex << " \n ";
		return 0; 
}
