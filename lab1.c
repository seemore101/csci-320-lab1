/*
 * Implement your solution in thi file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"


char* mysteryExplode(const char* str){
    int len = strlen(str);
    char* newString = (char *)malloc((len * (len + 1) / 2) + 1);

    int index = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= i; j++) {
            newString[index++] = str[j];
        }
    }
    newString[index] = '\0';

    return newString;
}
