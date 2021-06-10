#include <iostream>

using namespace std;

int main() {
	int button_presses = 0;
	cin >> button_presses;
	if(button_presses % 2 != 0){
		printf("still running");
	} else {
		int stops[button_presses] = {0};
		int time_remaining = 0;
		for(int i = 0; i < button_presses; i++) {
			cin >> stops[i];
			if(i % 2 != 0){
				time_remaining += stops[i] - stops[i - 1];
			}
		}
		printf("%d", time_remaining);
	}
}