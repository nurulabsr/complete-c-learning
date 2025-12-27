#include<stdio.h>
void main(){
//	variable name must be include latter, number, underscore ( _ )
// variable will not strat number like 1num, 
// allowed _num, num_1, or numOne
// reserve words are'nt allowed
	int num_1 =99;
	float num_2 = 100.5;
	short num_3 = 100;
	long num_4 = 1000000L;
	unsigned int num_5 = 50;
	signed int num_6 = -50;
	double num_7 = 50000.50;
	char num_8 = '8';
	long double num_9 = 3.141592653589793; 

int *address_of_num_1 = &num_1;  
printf("address of first number: %p\n", (void*)address_of_num_1);  
	
}
