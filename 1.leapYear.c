#include <stdio.h>

int main(){

    // Declaring an variable to store the input year from user.
    int year;

    // Showing user to enter a year.
    printf("Enter any year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);		// If the year is leap year
    }else {
        printf("%d is not a leap year.\n", year);	// If the year is not leap year.
    }

    // if the program ends successfully.
    return 0;
}