#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int r = 0, e = 0, c = 0;
		cin >> r; //revenue without advertising
		cin >> e; //revenue with advertising
		cin >> c; //cost of said advertising
		if(r == e - c){
			printf("does not matter\n");
		} else if (r < e - c) {
			printf("advertise\n");
		} else {
			printf("do not advertise\n");
		}
	}
}