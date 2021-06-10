#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int iterations = 0;
	int points = 2;
	cin >> iterations;
	for(int i = 0; i < iterations; i++) {
		points += points - 1;
	}
	printf("%d\n", (int)pow(points, 2));
}