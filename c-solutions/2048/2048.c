#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int left = 0;
  int up = 1;
  int right = 2;
  int down = 3;
  int gameboard[4][4];
  int command = -1;
  for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 4; j++) {
		scanf("%d", &gameboard[i][j]);
	}
  }
  scanf("%d", &command);
  if(command == left) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			for(int k = 1; k < 4; k++) {
				if(gameboard[i][k] == gameboard[i][k - 1]) {
					gameboard[i][k] = 0;
					gameboard[i][k - 1] *= 2;
				}
				if(gameboard[i][k] != 0 && gameboard[i][k - 1] == 0) {
					gameboard[i][k - 1] = gameboard[i][k];
					gameboard[i][k] = 0;
				}
			}
		}
	}
  }
  else if(command == up) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			for(int k = 1; k < 4; k++) {
				if(gameboard[k][j] == gameboard[k - 1][j]) {
					gameboard[k][j] = 0;
					gameboard[k - 1][j] *= 2;
				}
				if(gameboard[k][j] != 0 && gameboard[k - 1][j] == 0) {
					gameboard[k - 1][j] = gameboard[k][j];
					gameboard[k][j] = 0;
				}
			}
		}
	}
  }
  else if(command == right) {

  }
  else if(command == down) {

  }
  else {
	  return EXIT_FAILURE;
  }
  for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 4; j++) {
		printf("%d ", gameboard[i][j]);
	}
	printf("\n");
  }
  return EXIT_SUCCESS;
}
