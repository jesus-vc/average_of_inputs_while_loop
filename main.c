//
//  main.c
//
//  Created by Jesus Vasquez-Cipriano on 10/4/20.
//  Copyright © 2020 Jesus Vasquez-Cipriano. All rights reserved.
//

/* ********************************************
* SUMMARY
* Function: int main()
* Input: User inputs an integer repeatedly within a while loop.
* Output: Returns 0 on success.
* Procedure: The while loop repeats as long as the input is a non-negative (positive) integer data type. The average (sum of inputted integers divided by a counter) is displayed to the user upon the loop's termination.
 ******************************************* */

#include <stdio.h>

int main() {
    
    int integer_input = 0;
    int sum = 0;
    int average = 0;
    int counter = 0;
    int positive_integer = 1;
    
    puts("\nHello. This program will start asking you for positive integers to sum them and produce an average (such as 8, 99, 100, 1000).\n\nOnce you wish to quit the program (including from the beginning) to calculate the average of your inputted integers, simply enter a negative integer (such as -8).\n\nYou'll get errors if you input anything other than an integer. No other data types and no special characters (decimal points, commas, etcetera).");
    
    //Warning: Error if input is a non-integer data type, such as a char or float.
    while (positive_integer) {
        printf("\nGive me a number: ");
        scanf("%d",&integer_input);
        if (integer_input >= 0) {
            sum += integer_input;
            counter += 1;
        } else {
            positive_integer = 0;
            printf("\n\nGoodbye. You gave me a negative number: %d.\n",integer_input);
        }
}
    average = sum/counter;
    printf("Average is: %d\n",average);
    return 0;
}
