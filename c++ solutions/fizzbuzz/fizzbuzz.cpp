#include <iostream>

using namespace std;

int main(){
	int x = 0, y = 0, n = 0;
	cin >> x;
	cin >> y;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		if(i % x == 0) {
			printf("Fizz");
		}
		if(i % y == 0) {
			printf("Buzz");
		}
		if( i % x != 0 && i % y != 0) {
			printf("%d", i);
		}
		printf("\n");
	}
}