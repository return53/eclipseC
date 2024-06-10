/*
 =========================================================================
 Name        : C_Basic_Input_Output.c
 Author      : Emre Yasin Albayrak
 Version     :
 Copyright   : Your copyright notice
 Description : C Programming Exercises, Practice, Solution : Input Output
 	 	 	   C Basic Input Output statement [10 exercises with solution]
 =========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include "print.h"

int main(void) {

log_yellow("\n1. Write a program that converts Centigrade to Fahrenheit.\n\n");
//Expected Output :
	//Input a temperature (in Centigrade): 45
	//113.000000 degrees Fahrenheit.

/*
 * ilk ölçek	çevrilen ölçek	formül
 * Celsius		Fahrenheit		°F = °C × 1.8 + 32
 * Fahrenheit	Celsius			°C = (°F – 32) / 1.8
 * Celsius		Kelvin			°K = °C + 273.15
 * Kelvin		Celsius			°C = °K – 273.15
 */

{	printf("Input a temperature (in Centigrade) : ");
	double celsius = 0;
	scanf("%lf", &celsius);
	double fahrenheit = (celsius * 1.8) + 32;
	printf("%.2f celsius = %.2f fahrenheit.\n", celsius, fahrenheit);
}

log_yellow("\n2. Write a C program that calculates the volume of a sphere.\n\n");
//Expected Output :
	//Input the radius of the sphere : 2.56
	//The volume of sphere is 70.276237.

//V = 4/3 πr³

{	printf("Input the radius of the sphere : ");
	double cap = 0;
	scanf("%lf", &cap);

	double hacim = (M_PI * pow(cap, 3) * 4) / 3;
	printf("The volume of sphere is %.2f\n", hacim);
}

log_yellow("\n3. Write a C program that prints the perimeter of a rectangle using its height and width as inputs.\n\n");
//Expected Output :
	//Input the height of the Rectangle : 5
	//Input the width of the Rectangle : 7
	//Perimeter of the Rectangle is : 24.000000

{	printf("Input the height of the Rectangle : ");
	double height = 0;
	scanf("%lf", &height);
	printf("Input the width of the Rectangle  : ");
	double width = 0;
	scanf("%lf", &width);
	double perimeter = 2 * (height + width);
	printf("Perimeter of the Rectangle is : %.2f\n", perimeter);
}

log_yellow("\n4. Write a C program that converts kilometers per hour to miles per hour.\n\n");
//Expected Output :
	//Input kilometers per hour: 15
	//9.320568 miles per hour

//multiply the speed in km/h by 0.621371

{	printf("Input kilometers per hour : ");
	double kmh = 0;
	scanf("%lf", &kmh);
	double mph = kmh * 0.621371;
	printf("%.2f kmh = %.2f mph.\n", kmh, mph);
}

log_yellow("\n5. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.\n\n");
//Expected Output :
	//Input hours   : 5
	//Input minutes : 37
	//Total         : 337 minutes.

{	int saat = 0, dakika = 0;
	printf("Input hours   : ");
	scanf("%d", &saat);
	printf("Input minutes : ");
	scanf("%d", &dakika);
	int toplam = saat * 60 + dakika;
	printf("Total         : %d minutes.\n", toplam);
}

log_yellow("\n6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.\n\n");
//Expected Output :
	//Input minutes: 546
	//9 Hours, 6 Minutes

{	int dakika = 0;
	printf("Input minutes : ");
	scanf("%d", &dakika);

	int saat = dakika / 60;
	dakika %= 60;
	printf("%d Hours, %d Minutes", saat, dakika);
}

log_yellow("\n7. Write a program in C that reads a forename, surname and year of birth and ");
log_yellow("displays the names and the year one after another sequentially.\n\n");
//Expected Output :
	//Input your firstname     : Tom
	//Input your firstname     : Davis
	//Input your year of birth : 1982
	//Tom Davis 1982

{	char ad[25];
	char soyAd[25];
	int yil = 0;
	printf("Input your firstname     : ");
	scanf("%s", ad);
	printf("Input your firstname     : ");
	scanf("%s", soyAd);
	printf("Input your year of birth : ");
	scanf("%d", &yil);

	printf("%s %s %d\n", ad, soyAd, yil);
}


log_yellow("\n8. Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.\n\n");
//Expected Output :
	//Input three numbers separated by comma : 5,10,15
	//The sum of three numbers : 30

{	int sayi1, sayi2, sayi3;
	int sum;
	char line_text[50];
	printf("Input three numbers separated by comma : ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d, %d, %d", &sayi1, &sayi2, &sayi3);
	sum = sayi1 + sayi2 + sayi3;
	printf("The sum of three numbers : %d\n", sum);
}

log_yellow("\n9. Write a C program to perform addition, subtraction, multiplication and division of two numbers.\n\n");
//Expected Output :
	//Input any two numbers separated by comma : 10,5
	//The sum of the given numbers : 15
	//The difference of the given numbers : 5
	//The product of the given numbers : 50
	//The quotient of the given numbers : 2.000000

{	int sayi1, sayi2;
	char satir[50];
	printf("Input three numbers separated by comma : ");
	fgets(satir, sizeof(satir), stdin);
	sscanf(satir, "%d, %d", &sayi1, &sayi2);
	printf("The sum of the given numbers        : %d\n", sayi1 + sayi2);
	printf("The difference of the given numbers : %d\n", sayi1 - sayi2);
	printf("The product of the given numbers    : %d\n", sayi1 * sayi2);
	printf("The quotient of the given numbers   : %f\n", (float)sayi1 / sayi2);
}

log_yellow("\n10. Write a C program to find the third angle of a triangle if two angles are given.\n\n");
//Expected Output :
	//Input two angles of triangle separated by comma : 50,70
	//Third angle of the triangle                     : 60

{	int aci1, aci2;
	char satir[50];
	printf("Input two angles of triangle separated by comma : ");
	fgets(satir, sizeof(satir), stdin);
	sscanf(satir, "%d, %d", &aci1, &aci2);
	printf("Third angle of the triangle                     : %d\n", 180 - aci1 - aci2);
}


	return EXIT_SUCCESS;
}
