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
float *address_of_num_2 = &num_2;
short *address_of_num_3 = &num_3;
long *address_of_num_4 = &num_4;
unsigned *address_of_num_5 = &num_5;
signed *address_of_num_6 = &num_6;
double *address_of_num_7 = &num_7;
char *address_of_num_8 = &num_8;
long double *address_of_num_9 = &num_9;

printf("address of first number: %p\n", (void*)address_of_num_1);  
printf("address of second number: %p\n", (void*)address_of_num_2); 
printf("address of third number: %p\n", (void*)address_of_num_3); 
printf("address of forth number: %p\n", (void*)address_of_num_4); 
printf("address of fifth number: %p\n", (void*)address_of_num_5); 
printf("address of sixth number: %p\n", (void*)address_of_num_6); 
printf("address of seven number: %p\n", (void*)address_of_num_7); 
printf("address of eight number: %p\n", (void*)address_of_num_8); 
printf("address of nine number: %p\n", (void*)address_of_num_9); 

	
}
