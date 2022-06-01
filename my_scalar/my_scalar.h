/**
 * @file my_scalar.h
 * @author Max Freeman
 * @brief implementation of all functions of my_scalar program.
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define MAX_VECTOR_SIZE 10000


/*
This function calculates the dot product of two recived vectors.
@param vector1 the first vector 
@param vector2 the second vector 
@param vector_size the length of the two vectors
@return the dot product of the two vectors
*/
int scalar_product(int vector1[], int vector2[], int vector_size);



/*
This function is filling an empty arrays with values from the user.
@param vector1 the first vector to be filed
@param vector2 the second vector to be filed
@param vectorSize the length of the vectors
*/
void init_vectors(int vector1[], int vector2[], int vector_size);




/*
This function prints the welcome message to the user
*/
void welcome_message();



/*
This function receiving the vectors sizes from the user
@param vector the vector to be filled
@param length the length of the vectors
@return user_input
*/
int get_vector_size();
