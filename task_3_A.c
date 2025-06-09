//
// Created by adria on 29/04/2025.
//
#include <stdio.h>

int main(void) {
    float result;
    float distance;
    printf("KILOMITERS - MILES CONVERTER\n");
    printf("Please enter the distance: \n");
    scanf("%f", &distance);
    result = distance*0.621371;
    printf(" %.2f KILOMETERS IS %.2f MILES\n",distance, result);
    return 0;
}