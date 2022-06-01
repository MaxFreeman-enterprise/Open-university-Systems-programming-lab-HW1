/**
 * @file find_bits_functions.c
 * @author Max Freeman
 * @brief unsigned log type and funtions implementaions of find_bits_functions
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include <stdio.h>
#include "find_bits.h"

/*an explantion is provided in the find_bits.h file*/


int get_turned_on_bits(unsigned long x, unsigned long y){

    int turned_bits = 0;
    unsigned long after_and = x & y;

    while(after_and > 0){

        if(after_and % 2 == 1){  /*an explantion is provided in the find_bits.h file*/
            turned_bits++;
        }
        after_and /= 2;
    }

    return turned_bits;
}

/*
This function prints welcome message to the user
*/
void welcome_message(){
    printf("Welcome to the find_bits project!\nPlease enter the first number: (x): ");
}


/*
This function takes an unsigned long from the user.
@return the input from the user
*/
int get_input(){
    unsigned long input = 0;
    scanf("%lu", &input);
    printf("your input choice is: %lu \n",input);
    return input;
}
