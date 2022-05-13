//array1.c
//create an array of size 5 and initializes with 0 as values


#include<stdio.h>


int main(void){

	int array1[5]; //creates an array of integer elements of size 5

	for(size_t i = 0; i <= 4; i++){

		array1[i] = 0;

	}//end for


	//printing a header
	printf("%s%8s\n", "Index", "Value");

	for(size_t i = 0; i <= 4; i++){

		printf("%zu%12d\n", i, array1[i]);

	}//end for

}//end function main

