#include <iostream>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	double q = 0, y = 0;
	double qaly = 0;
	for(int i = 0; i < n; i++){
		cin >> q;
		cin >> y;
		qaly += q * y;
	}
	printf("%f", qaly);
}