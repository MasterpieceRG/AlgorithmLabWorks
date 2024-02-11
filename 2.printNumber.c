#include <stdio.h>
int main()
{
    int num, count;				//declaring variables
    
    printf("Enter any positive integer: "); 	// User prompt
    scanf("%d", &num); 				// Store user input data

    for (count = 1; count <= num; count++)	// Loop from 1 to the number entered by the user
    {
        printf("%d ", count); 			// Print the current counter value
    }
    printf("\n"); 				// Print a newline character after the loop
    return 0; 					// if the program ends successfully.
}