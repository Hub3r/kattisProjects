#include <iostream>

using namespace std;

int main(){
	int x = 0, y = 0;
	cin >> x;
	cin >> y;
	if( x > 0) {
		if(y > 0){
			printf("1");
		} else {
			printf("4");
		}
	} else {
		if(y < 0) {
			printf("3");
		} else {
			printf("2");
		}
	}
}