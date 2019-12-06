#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    int testCases;
    int inputCode = scanf("%d", &testCases);
    
    int expRevWithout;
    int expRevWith;
    int costOfAd;

    for(int i = 0; i < testCases; i++) {
        int returnCode = scanf("%d %d %d", &expRevWithout, &expRevWith, &costOfAd);
        int p = expRevWith - costOfAd;
        if(expRevWithout == p)
            printf("does not matter\n");
        else if(expRevWithout > p)
            printf("do not advertise\n");
        else
            printf("advertise\n");
    }

    return EXIT_SUCCESS;
}
