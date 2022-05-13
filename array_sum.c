//compute the sum of elements of an array


#include<stdio.h>


int main(void){

	int c[5] = {-45, 6, 0, 72, 1543}; //creating and initializing an array c.

	int sum = 0; //to hold the sum of the elements
	

	for(size_t i = 0; i <= 4; i++){

		sum += c[i];

	}//end for

	printf("[+] The sum of the elements of the array c is: %d", sum);

}//end function main