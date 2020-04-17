#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int conv2int(){
    char *p, s[100];
    long n;
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }
    printf("You entered: %ld\n", n);
    return n;
}

