/**
 * @file find_bits.c
 * @author Max Freeman
 * @its the main file for find_bits program.
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "find_bits.h"

int main(){

    unsigned long x = 0;
    unsigned long y = 0;


    welcome_message();
    x= get_input();
    
    printf("please enter the second number: (y): ");
    y = get_input();



    printf("There are %d turned on bits that we found from the two inputs.\n", get_turned_on_bits(x, y));
    return 0;
}

