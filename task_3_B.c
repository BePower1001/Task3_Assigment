//
// Created by adria on 30/04/2025.
//
#include <stdio.h>

int main(void) {
    char loop;
    float result;
    float distance;
    int conversions=0;
    do {
        printf("KILOMITERS - MILES CONVERTER\n");
        printf("Please enter the distance: \n");
        scanf("%f", &distance);
        result = distance*0.621371;
        printf(" %.2f KILOMETERS IS %.2f MILES\n",distance, result);
        conversions++;
        printf("Do you want to convert another distance?: \n");
        getchar();
        scanf("%c", &loop);
    }
    while (loop=='y'||loop=='Y');
    printf("You performed %d conversions",conversions);
}
