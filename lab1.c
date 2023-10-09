/*
 * Implement your solution in thi file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    FILE * ex = fopen(fileName,"r");
    char* line = (char *)malloc(MAX_LINE_LEN*sizeof(char));
    fgets(line, MAX_LINE_LEN, ex);
    return line;
}

char* mysteryExplode(const char* s) {
    int n = strlen(s), i = 0, j, k = 0;
    char* t = malloc(n * (n + 1) / 2 + 1);
    if (!t) return NULL;

    for (; i < n; i++)
        for (j = i; j < n; j++)
            t[k++] = s[j];

    t[k] = 0;
    return t;
}
