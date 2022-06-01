/**
 * @file my_scalar.c
 * @author Max Freeman
 * @its the main file for my_scalar program.
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "my_scalar.h"


int main(){

    int vector_size = 0;
    int vector1[MAX_VECTOR_SIZE];
    int vector2[MAX_VECTOR_SIZE];


    welcome_message();
    vector_size = get_vector_size();

    init_vectors(vector1, vector2, vector_size);
   
    printf("The dot product is %d", scalar_product(vector1,vector2,vector_size));
    return 0;
}
