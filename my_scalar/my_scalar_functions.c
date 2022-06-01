/**
 * @file my_scalar_functions.c
 * @author Max Freeman
 * @brief we have the funtions implementaions of my_scalar_functions here
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include "my_scalar.h"

/*the explanation of all function are in the h file*/

int scalar_product(int vector1[], int vector2[], int vectorSize){

    int dot_product = 0;
    int i = 0;
    for(i = 0; i < vectorSize; i++){
        dot_product += (vector1[i] * vector2[i]);
    }
    return dot_product;

}


void init_vectors(int vector1[], int vector2[], int vector_size){

    int i = 0;
	
    printf("Please enter elements of vector1\n please enter the first vector's values one by one:\n");

    for(i = 0; i < vector_size; i++){
        scanf("%d", &vector1[i]);

    }
    printf("Great!\nnow please enter the second vector's values one by one:\n");
    
    for(i = 0; i < vector_size; i++){
        scanf("%d", &vector2[i]);

    }
}


void welcome_message(){

    printf("Please enter the size of the vectors: (up to %d) ", MAX_VECTOR_SIZE);

}


int get_vector_size(){
    int user_input = 0;
    scanf("%d", &user_input);
    return user_input;
}
