#include <iostream>

using namespace std;

int main(){
	double n = 0, k = 0;
	cin >> n;
	cin >> k;
	double working_total = 0, current_score = 0;
	for(int i = 0; i < k; i++){
		cin >> current_score;
		working_total += current_score;
	}
	double lowest_score = (working_total + (-3 * (n - k)))/n;
	double highest_score = (working_total + (3 * (n - k)))/n;
	printf("%f %f", lowest_score, highest_score);
}