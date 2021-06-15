#include <iostream>

using namespace std;

int main(){
	string input = "";
	cin >> input;
	for(string::iterator it = input.begin(); it != input.end(); ++it) {
		printf("%c", *it);
		if(*it == 'e') {
			printf("%c", *it);
		}
	}
}