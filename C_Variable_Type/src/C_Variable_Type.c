/*
 =========================================================================
 Name        : C_Variable_Type.c
 Author      : Emre Yasin Albayrak
 Version     :
 Copyright   : Your copyright notice
 Description : C Programming Exercises, Practice, Solution : Variable Type
 	 	 	   C Variable Type [18 exercises with solution]
 ==========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "print.h"

void fonksiyonBir(void){
	printf("Here is the message returning from newFunctionOne.\n");
}

void fonksiyonIki(void){
	printf(" Here is the message returning from newFunctionTwo.\n");
}

int main(void) {


log_red("\n1. Write a C program that invokes the command processor to execute a command.\n\n");

//Expected Output :
	//Is command processor available?
	//Command processor available!
	//Executing command DIR
	//00c40280-5e27-11e6-bd4f-71e8825f8ea3
	//01691610-41e1-11e6-901d-35b72ececc72
	//...........
	//ff827330-443a-11e6-9820-23e2f60d924e
	//file.txt
	//logging_example.out
	//test.txt
	//Returned value is: 0.

{	printf("\n\nIs command processor available?\n");
	if (system(NULL))
		printf("Command processor available!\n");
	else
		printf("Command processor not available!\n");

	int x;
	printf("Executing command DIR\n");
	x = system("dir");
	printf("Returned value is: %d.\n", x);
}
log_red("\n2. Write a C program to convert a string to an unsigned long integer.\n\n");

//Test Data and Expected Output :
//Input an unsigned number: 25
//Output: 25

{	char dize[25];
	printf ("Input an unsigned number: ");
	fgets (dize,25,stdin);
	unsigned long ulInt = strtoul (dize,NULL,0);
	printf ("Output: %lu\n",ulInt);
}

log_red("\n3. Write a C program to convert a string to a long integer.\n\n");

//Expected Output :
	//In decimals: 2016, 4235440, -3624422, 5947391.

{	char dize[25];
	printf ("Input an unsigned number: ");
	fgets (dize,25,stdin);
	char * ptr_end;
	long longInt = strtol (dize,&ptr_end, 10);
	printf ("Output: %ld\n",longInt);
}

log_red("\n4. Write a C program to convert a string to a double.\n\n");

//Expected Output :
	//Output= 4.00

{	char dize[25];
	printf ("Input an unsigned number: ");
	fgets (dize,25,stdin);
	char * ptr_end;
	double duble = strtod (dize,&ptr_end);
	printf ("Output: %f\n",duble);
}

log_red("\n5. Write a C program to generate a random number.\n\n");

//Test Data and Expected Output :
	//Guess the number (1 to 10): 6
	//The number is higher
	//Guess the number (1 to 10): 7
	//That is correct!

{	int number, input;
	srand (time(NULL));
	number = rand() % 10 + 1;

	do {
		printf ("\nGuess the number (1 to 10) : ");
		scanf ("%d", &input);
		if (number > input)
			printf("The number is higher\n");
		if (number < input)
			printf("The number is lower\n");
	} while (number != input);

	printf ("That is correct!\n");
}

log_red("\n6. Write a C program to sort the elements of an array.\n\n");

//Test Data and Expected Output :
	//Input the number of elements to be stored in the array :5
	//Input 6 elements in the array :
	//element - 0 : 15
	//element - 1 : 26
	//element - 2 : 42
	//element - 3 : 82
	//element - 4 : 35
	//After sorting the array are :
	//15
	//26
	//35
	//42
	//82

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	} while (eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("element - %d: ", i);
		scanf("%d", &dizi[i]);
	}
	printf("Before sorting the array are : { ");
	for (int j = 0; j < eleman; j++)
		printf("%d ", dizi[j]);
	printf("}\n");

	printf("After sorting the array are  : { ");
	int gecici;
	for(int k = 0; k < eleman - 1;k++) {
		for(int l = k + 1; l < eleman; l++) {
			if(dizi[l] < dizi[k]){
				gecici = dizi[k];
				dizi[k] = dizi[l];
				dizi[l] = gecici;
			}
		}
	}
	for (int m = 0; m < eleman; m++)
		printf("%d ", dizi[m]);
	printf("}\n");
}

log_red("\n7. Write a C program to calculate the integral quotient and remainder of a division.\n\n");

//Test Data and Expected Output :
	//Input numerator   : 2500
	//Input denominator : 235
	//quotient  = 10
	//remainder = 150

{	int numerator = 0;
	printf("Input numerator   : ");
	scanf("%d", &numerator);
	int denominator = 1;
	do {
		printf("Input denominator : ");
		scanf("%d", &denominator);
	} while (denominator == 0);

	printf("quotient  = %d\n", numerator / denominator);
	printf("remainder = %d\n", numerator % denominator);
}

log_red("\n8. Write a C program to return the absolute value of a long integer.\n\n");

//Test Data and Expected Output :
	//Input 1st number (positive or negative) : 25
	//Input 2nd number (positive or negative) : -125
	//The absolute value of 1st number is : 25
	//The absolute value of 2nd number is : 125

{	long birinci = 0, ikinci = 0;
	printf("Input 1st number (positive or negative) : ");
	scanf("%ld", &birinci);
	printf("Input 2nd number (positive or negative) : ");
	scanf("%ld", &ikinci);
	printf("The absolute value of 1st number is : %d\n", abs(birinci));
	printf("The absolute value of 2nd number is : %d\n", abs(ikinci));
}

log_red("\n9. Write a C program to get the environment string.\n\n");

//Expected Output :
	//The set path is: /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin
	//:/bin:/usr/games:/usr/local/games

{	char *PathPtr = getenv ("PATH");
	if (PathPtr!=NULL)
	printf ("\nThe set path is: %s\n\n",PathPtr);
}

log_red("\n10. Write a C program to return the quotient and remainder of a division.\n\n");

//Test Data and Expected Output :
	//Input numerator : 2000
	//Input denominator : 235
	//quotient =  8, remainder = 120.

{	int numerator = 0;
	printf("Input numerator   : ");
	scanf("%d", &numerator);
	int denominator = 1;
	do {
		printf("Input denominator : ");
		scanf("%d", &denominator);
	} while (denominator == 0);

	printf("quotient  = %d\n", numerator / denominator);
	printf("remainder = %d\n", numerator % denominator);
}

log_red("\n11. Write a C program to allocate a block of memory for an array. \n\n");

//Test Data and Expected Output :
	//Input the number of elements to be stored in the array :5
	//Input 5 elements in the array :
	//element 1 : 25
	//element 2 : 30
	//element 3 : 35
	//element 4 : 20
	//element 5 : 40
	//Values entered in the array are :
	//25  30  35  20  40

{	int i, eleman, num;
	int *dizi;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d",&eleman);
	printf("Input %d elements in the array : \n", eleman);
	dizi = (int*) calloc( eleman,sizeof(int) );
	if (dizi==NULL){
		printf (" Requested memory allocation is wrong.");
		exit (1);
	}
	for (i = 0; i < eleman; i++){
		printf ("element %d : ",i + 1);
		scanf ("%d",&dizi[i]);
	}

	printf ("Values entered in the array are : { ");
	for (i = 0; i < eleman; i++)
	printf ("%d ",dizi[i]);
	printf ("}\n");

	free (dizi);
}

log_red("\n12. Write a C program to perform a binary search in an array. \n\n");

//Test Data and Expected Output :
	//Input the number of elements to be stored in the array :5
	//Input 5 elements in the array :
	//element - 1 : 25
	//element - 2 : 20
	//element - 3 : 18
	//element - 4 : 13
	//element - 5 : 15
	//Input a value to search : 18
	//18 is found in the array.

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	} while (eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("element - %d: ", i);
		scanf("%d", &dizi[i]);
	}
	int toBeSearched;
	printf("Input a value to search : ");
	scanf("%d", &toBeSearched);

	int gecici;
	for(int k = 0; k < eleman - 1;k++) {
		for(int l = k + 1; l < eleman; l++) {
			if(dizi[l] < dizi[k]){
				gecici = dizi[k];
				dizi[k] = dizi[l];
				dizi[l] = gecici;
			}
		}
	}
	int result = -1;
	int low = 0, high = eleman - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (dizi[mid] == toBeSearched) {
			result = mid;
			break;
		}

		if (dizi[mid] < toBeSearched)
			low = mid + 1;
		else
			high = mid - 1;
	}

	if (result == -1)
		printf("Element is not present in array");
	else
		printf("Element is present at index %d", result);
}

log_red("\n13. Write a C program to convert a string to an integer. \n\n");

//Test Data and Expected Output :
	//Input a number : 1972
	//The value Input is 1972.

{	int sayi;
	char dize[25];
	printf ("Input a number : ");
	fgets (dize, 25, stdin);
	sayi = atoi (dize);
	printf ("The value Input is %d.\n", sayi);
}

log_red("\n14. Write a C program to convert a string to a double. \n\n");

//Test Data and Expected Output :
	//Input a number : 25
	//The original number is : 25.000000
	//After division by 2 the number is : 12.500000

{	double sayi;
	char dize[25];
	printf ( "\n Input a number : " );
	fgets (dize, 25, stdin);
	sayi = atof (dize);
	printf (" The original number is : %f \n", sayi);
}

log_red("\n15. Write a C program to set a function that will be executed on termination of a program. \n\n");

//Expected Output :
	//This is the message from main function.
	//Here is the message returning from newFunctionTwo.
	//Here is the message returning from newFunctionOne.

{	atexit (fonksiyonBir);
	atexit (fonksiyonIki);
	puts ("\n This is the message from main function.\n");
}

log_red("\n16. Write a C program to return the absolute value of an integer. \n\n");

//Test Data and Expected Output :
	//Input a positive or negative number :-25
	//The absolute value of the given number is : 25

{	int sayi = 0;
	printf("Input a positive or negative number : ");
	scanf("%d", &sayi);
	printf("The absolute value of the given number is : %d", abs(sayi));
}

log_red("\n17. Write a C program to abort the current process. \n\n");

//Expected Output :
	//File does not exist or error, in opening the file.
	//timeout: the monitored command dumped core
	//Aborted

{	FILE * FilePtr;
	FilePtr= fopen ("myfile.txt","r");
	if (FilePtr == NULL){
		fputs ("File does not exist or error, in opening the file.\n",stderr);
		abort();
	}
	fclose (FilePtr);
}

log_red("\n18. Write a C program to demonstrate the working of the keyword long. \n\n");

//Expected Output :
	//The size of int = 4 bytes
	//The size of long = 8 bytes
	//The size of long long = 8 bytes
	//The size of double = 8 bytes
	//The size of long double = 16 byte

{	int 		a;
	long 		b;
	long long 	c;
	double 		e;
	long double f;

	printf(" Demonstrate the working of keyword long \n");
	printf("-----------------------------------------\n");
	printf(" The size of int = %ld bytes \n", sizeof(a));
	printf(" The size of long = %ld bytes\n", sizeof(b));
	printf(" The size of long long = %ld bytes\n", sizeof(c));
	printf(" The size of double = %ld bytes\n", sizeof(e));
	printf(" The size of long double = %ld bytes\n\n", sizeof(f));
}

	return EXIT_SUCCESS;
}
