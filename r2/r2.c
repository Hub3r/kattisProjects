#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valueOne = 0;
    int mean = 0;
    scanf("%d %d", &valueOne, &mean);
    int valueTwo = (mean * 2) - valueOne;
    printf("%d\n", valueTwo);
}
