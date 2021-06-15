#include <iostream>

using namespace std;

int main() {
	int num_lines = 5;
	int num_scores = 4;
	int total_scores[num_lines];
	int largest = 0;
	int largest_line = 0;
	for(int i = 0; i < num_lines; i++){
		total_scores[i] = 0;
		for(int j = 0; j < num_scores; j++) {
			int current_score = 0;
			cin >> current_score;
			total_scores[i] += current_score;
		}
		if(largest < total_scores[i]) {
			largest = total_scores[i];
			largest_line = i + 1;
		}
	}
	printf("%d %d", largest_line, largest);
}