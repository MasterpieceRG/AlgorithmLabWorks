#include <stdio.h>

int main(){

    int year;				// Declaring an variable to store the input year from user.

    printf("Enter any year: ");		// User prompt
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);		// If the year is leap year
    }else {
        printf("%d is not a leap year.\n", year);	// If the year is not leap year.
    }

    return 0;				// if the program ends successfully.
}