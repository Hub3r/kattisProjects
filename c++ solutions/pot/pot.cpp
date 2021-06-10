#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int current = 0, sum = 0;
	for(int i = 0; i < n; i++){
		cin >> current;
		int power = current % 10;
		current /= 10;
		sum += pow(current, power);
	}
	printf("%d\n", sum);
}