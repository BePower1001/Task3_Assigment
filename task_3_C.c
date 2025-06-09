// Created by adria on 09/04/2025.
#include <stdio.h>

int main(void) {
    char loop;
    float result;
    float weight;
    float distance;
    int hour;
    int minutes;
    int conversions = 0;
    float pounds;
    int menu;

    // Fixed typo: "Kilomiters" to "Kilometers"
    printf("Select a conversion type:\n 1: Length (Kilometers to Miles)\n 2: Weight (Kilograms to Pounds)\n 3: Time (Hours to Minutes)\n Enter your choice:\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1: {
            do {
                // Fixed typo: "KILOMITERS" to "KILOMETERS"
                printf("KILOMETERS - MILES CONVERTER\n");
                printf("Please enter the distance: \n");
                scanf("%f", &distance);
                result = distance * 0.621371;
                printf(" %.2f KILOMETERS IS %.2f MILES\n", distance, result);
                conversions++;
                printf("Do you want to convert another distance?: \n");
                getchar(); // Clear input buffer
                scanf("%c", &loop);
            } while (loop == 'y' || loop == 'Y');
            printf("You performed %d conversions\n", conversions);
            break;
        }
        case 2: {
            do {
                printf("KILOGRAMS TO POUNDS CONVERTER\n");
                printf("Please enter the weight: \n");
                scanf("%f", &weight);
                pounds = weight * 2.20462;
                printf(" %.2f KILOGRAMS IS %.2f POUNDS\n", weight, pounds);
                conversions++;
                printf("Do you want to convert another weight?: \n");
                getchar(); // Clear input buffer
                scanf("%c", &loop);
            } while (loop == 'y' || loop == 'Y');
            printf("You performed %d conversions\n", conversions);
            break;
        }
        case 3: {
            do {
                printf("HOURS TO MINUTES CONVERTER\n"); // Fixed title for clarity
                printf("Please enter the time in hours: \n");
                scanf("%d", &hour);
                minutes = hour * 60;
                printf(" %d HOURS IS %d MINUTES\n", hour, minutes);
                conversions++;
                printf("Do you want to convert another time?: \n");
                getchar(); // Clear input buffer
                scanf("%c", &loop);
            } while (loop == 'y' || loop == 'Y');
            printf("You performed %d conversions\n", conversions);
            break;
        }
        default: { // Added default case for invalid menu input
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            return 1; // Terminate with error
        }
    }

    return 0; // Added to ensure proper termination
}