#include <iostream>
#include <stdlib.h>
#include <string>
#include <set>

using namespace std;

int main() {
	string line = "";
	set<string> x;
	while(cin >> line){
		if(!x.count(line)){
			x.insert(line);
		} else {
			printf("no\n");
			exit(EXIT_SUCCESS);
		}
	}
	printf("yes\n");
}