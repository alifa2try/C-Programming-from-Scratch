//recursive fibonacci function


#include<stdio.h>


unsigned long long int fibonacci(int n); //function prototype


int main(void){

	//calculate and display fibonacci(number) for 0-10
	for(int number = 0; number <= 10; number++){

		printf("Fibonacci:(%d) = %llu\n", number, fibonacci(number));

	}//end for

	printf("Fibonacci(20) = %llu\n", fibonacci(20));
	printf("Fibonacci(30) = %llu\n", fibonacci(30));
	printf("Fibonacci(40) = %llu\n", fibonacci(40));

}//end main


//recursive definition of function fibonacci
unsigned long long int fibonacci(int n){

	if(0 == n || 1 == n){ //base case

		return n;

	}//end if

	else{

		return fibonacci(n-1) + fibonacci(n-2);
	
	}//else
	
}//end function fibonacci