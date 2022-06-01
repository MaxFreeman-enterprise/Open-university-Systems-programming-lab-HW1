/**
 * @file find_bits.h
 * @author Max Freeman
 * @brief implementation of all functions of find_bits program.
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>


/*
This function is used to calculate how many turned bits are there for the two given numbers
The function does it by getting the new number after being & with the two numbers, then, we will iterate until its zero, just like how we transfer a base10 number to a binary number,
but this time, instead of saving the 'num % 2' at the side, we use it to check if we need to increment the varibale that stored all the ones
@param x the first number
@param y the second number
*/
int get_turned_on_bits(unsigned long x, unsigned long y);


/*
This function prints the welcome message to the user
*/
void welcome_message();


/*
This function takes an unsigned long int number from the user.
@return the input from the user
*/
int get_input();
