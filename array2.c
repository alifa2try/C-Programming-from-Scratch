//array2.c
//initializing array elements with an initializer list and accessing the elements


#include<stdio.h>


int main(void){

	int c[5] = {-45, 6, 0, 72, 1543}; //creating and initializing an array c.

	//print out a header
	printf("%s%8s\n", "Index", "Value");

	for(size_t i = 0; i <= 4; i++){

		printf("%zu%12d\n", i, c[i]);

	}//end for

}//end function main