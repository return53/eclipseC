#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#include <limits.h>
#include <float.h>
#include "src/print.h"

// #define TRUE 1;
// #define FALSE 0;

enum Bool {
  FALSE,
  TRUE
}flag;

int main(){

log_cyan("\n1. Write a C program to print your name, date of birth, and mobile number.\n\n");

//Expected Output:
//
//Name   : Emre
//DOB    : **.**.****
//Mobile : 0 (***) *** ****

{	char ad[] = "Emre";
	char dogumTarihi[] = "**.**.****";
	char telefon[] = "0 (***) *** ****";

	printf("ad           : %s\n", ad);
	printf("doğum tarihi : %s\n", dogumTarihi);
	printf("telefon      : %s\n", telefon);
}

log_cyan("\n2. Write a C program to get the C version you are using.\n\n");

//Expected Output:
//
//We are using C18!

	#if __STDC_VERSION__ >=  201710L
        printf("We are using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else
        printf("We are using C89/C90!\n");
    #endif


log_cyan("\n3. Write a C program to print a block F using the hash (#), ");
log_cyan("where the F has a height of six characters and width of five and four characters. ");
log_cyan("And also print a very large 'C'.\n\n");

//Expected Output:
//
//######
//#
//#
//#####
//#
//#
//#
//    ######
//  ##      ##
// #
// #
// #
// #
// #
//  ##      ##
//    ######

	printf("######\n#\n#\n#####\n#\n#\n#\n\n");
	printf("    ######\n  ##      ##\n #\n #\n #\n #\n #\n  ##      ##\n    ######\n");

log_cyan("\n4. Write a C program to print the following characters in reverse.\n\n");

//Test Characters: 'X', 'M', 'L'
//Expected Output:
//The reverse of XML is LMX

{	char e = 'E';
	char y = 'Y';
	char a = 'A';

	printf("harf dizisi %c%c%c'nin tersi %c%c%c'dir.\n",e,y,a, a,y,e);
}

log_cyan("\n5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.\n\n");

//Expected Output:
//Perimeter of the rectangle = 24 inches
//Area of the rectangle = 35 square inches

{	int height = 7;
	int width = 5;

	printf("yükseliği 7 genişliği 5 olan dikdörtgenin çevresi : %i\n", 2 * (height + width));
	printf("yükseliği 7 genişliği 5 olan dikdörtgenin alanı   : %i\n", (height * width));
}
log_cyan("\n6. Write a C program to compute the perimeter and area of a circle with a given radius.\n\n");

//Expected Output:
//Perimeter of the Circle = 37.680000 inches
//Area of the Circle = 113.040001 square inches

{	int radius = 6;
	float perimeter, area;
	perimeter = 2 * M_PI * radius;
	area = M_PI * pow(radius,2);


	printf("yarıçapı 6 olan dairenin çevresi : %.2f\n", perimeter);
	printf("yarıçapı 6 olan dairenin alanı   : %.2f\n", area);
}
log_cyan("\n7. Write a C program to display multiple variables.\n\n");

//Sample Variables :
//a + c, x + c, dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
//Declaration :
//int a = 125, b = 12345;
//long ax = 1234567890;
//short s = 4043;
//float x = 2.13459;
//double dx = 1.1415927;
//char c = 'W';
//unsigned long ux = 2541567890;

{	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;

	printf("a + c           : %d\n", a + c);
	printf("x + c           : %f\n", x + c);
	printf("dx + x          : %f\n", dx + x);
	printf("((int) dx) + ax : %ld\n", ((int) dx) + ax);
	printf("a + x           : %f\n", a + x);
	printf("s + b           : %d\n", s + b);
	printf("ax + b          : %ld\n", ax + b);
	printf("s + c           : %hd\n", s + c);
	printf("ax + c          : %ld\n", ax + c);
	printf("ax + ux         : %lu\n", ax + ux);
}

log_cyan("\n8. Write a C program to convert specified days into years, weeks and days.\n\n");

//Note: Ignore leap year.
//
//Test Data :
//Number of days : 1329
//Expected Output :
//Years: 3
//Weeks: 33
//Days: 3

{	int numberOfDays = 0;

	printf("toplam gün sayısını girin : ");
	scanf("%d", &numberOfDays);

	int year = numberOfDays / 365;
	int week = (numberOfDays % 365) / 7;
	int day  = (numberOfDays % 365) % 7;

	printf("years : %d\n", year);
	printf("weeks : %d\n", week);
	printf("days  : %d\n", day);
}

log_cyan("\n9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.\n\n");

//Test Data :
//Input the first integer: 25
//Input the second integer: 38
//Expected Output:
//Sum of the above two integers = 63

{	int sayi01 = 0;
	int sayi02 = 0;

	printf("Toplama İşlemi\n");
	printf("ilk sayısı girin    : ");
	scanf("%d", &sayi01);
	printf("ikinci sayıyı girin : ");
	scanf("%d", &sayi02);

	printf("%d ile %d'nin toplamı : %d\n", sayi01, sayi02, sayi01 + sayi02);
}

log_cyan("\n10. Write a C program that accepts two integers from the user and calculates the product of the two integers.\n\n");

//Test Data :
//Input the first integer: 25
//Input the second integer: 15
//Expected Output:
//Product of the above two integers = 375

{	int sayi01 = 0;
	int sayi02 = 0;

	printf("Çarpma İşlemi\n");
	printf("ilk sayısı girin    : ");
	scanf("%d", &sayi01);
	printf("ikinci sayıyı girin : ");
	scanf("%d", &sayi02);

	printf("%d ile %d'nin çarpımı : %d\n", sayi01, sayi02, sayi01 * sayi02);
}

log_cyan("\n11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.\n\n");

//Test Data :
//Weight - Item1: 15
//No. of item1: 5
//Weight - Item2: 25
//No. of item2: 4
//Expected Output:
//Average Value = 19.444444

{	double weightItem1 = 0.0, weightItem2 = 0.0;
	int numberItem1 = 0, numberItem2 = 0;

	printf("Weight - item #1 : ");
	scanf("%lf", &weightItem1);

	printf("No. of item #1   : ");
	scanf("%d", &numberItem1);

	printf("Weight - item #2 : ");
	scanf("%lf", &weightItem2);

	printf("No. of item #2   : ");
	scanf("%d", &numberItem2);

	printf("Average Value = %lf\n", (((weightItem1 * numberItem1) + (weightItem2 * numberItem2)) / (numberItem1 + numberItem2)));
}

log_cyan("\n12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. ");
log_cyan("Print the ID and salary (with two decimal places) of the employee for a particular month.\n\n");

//Test Data :
//Input the Employees ID(Max. 10 chars): 0342
//Input the working hrs: 8
//Salary amount/hr: 15000
//Expected Output:
//Employees ID = 0342
//Salary = U$ 120000.00

{	char empID[10];
	int workHour = 0;
	float salary = 0;

	printf("Input the Employees ID(Max. 10 chars) : ");
	scanf("%s", empID);
	printf("Input the working hrs : ");
	scanf("%d", &workHour);
	printf("Salary amount/hr : ");
	scanf("%f", &salary);

	printf("Employees ID = %s\nSalary = U$ %.2f\n",  empID, salary * workHour);
}

log_cyan("\n13. Write a C program that accepts three integers and finds the maximum of three.\n\n");

//Test Data :
//Input the first integer: 25
//Input the second integer: 35
//Input the third integer: 15
//Expected Output:
//Maximum value of three integers: 35

{	int a = 0, b = 0, c = 0;

	printf("Input the first integer : ");
	scanf("%d", &a);
	printf("Input the second integer: ");
	scanf("%d", &b);
	printf("Input the third integer : ");
	scanf("%d", &c);

	if ((a > b) && (a > c))
		printf("girilen rakamlardan en büyüğü : %d\n", a);
	else if ((b > a) && (b > c))
		printf("girilen rakamlardan en büyüğü : %d\n", b);
	else
		printf("girilen rakamlardan en büyüğü : %d\n", c);
}

log_cyan("\n14. Write a C program to calculate a bike’s average consumption ");
log_cyan("from the given total distance (integer value) travelled (in km) and spent fuel (in litters, ");
log_cyan("float number – 2 decimal points).\n\n");

//Test Data :
//Input total distance in km: 350
//Input total fuel spent in liters: 5
//Expected Output:
//Average consumption (km/lt) 70.000

{	int distance = 0;
	int spentFuel = 0;

	printf("Input total distance in km : ");
	scanf("%d", &distance);
	printf("Input total fuel spent in liters   : ");
	scanf("%d", &spentFuel);

	printf("Average consumption (km/lt) %.2lf\n", (double)distance / spentFuel);
}

log_cyan("\n15. Write a C program to calculate the distance between two points.\n\n");

//Test Data :
//Input x1: 25
//Input y1: 15
//Input x2: 35
//Input y2: 10
//Expected Output:
//Distance between the said points: 11.1803

{	int x1, x2, y1, y2;
	printf("Input x1 : ");
	scanf("%d", &x1);
	printf("Input x2 : ");
	scanf("%d", &x2);
	printf("Input y1 : ");
	scanf("%d", &y1);
	printf("Input y2 : ");
	scanf("%d", &y2);

	double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1),2));
	printf("Distance between the said points : %.2lf\n", distance);
}

log_cyan("\n16. Write a C program to read an amount (integer value) and ");
log_cyan("break the amount into the smallest possible number of bank notes.\n\n");

//Test Data :
//Input the amount: 375
//Expected Output:
//There are:
//3 Note(s) of 100.00
//1 Note(s) of 50.00
//1 Note(s) of 20.00
//0 Note(s) of 10.00
//1 Note(s) of 5.00
//0 Note(s) of 2.00
//0 Note(s) of 1.00

{	int amount = 0;
	printf("Input the amount : ");
	scanf("%d", &amount);

	printf("There are:\n");
	printf("%d Note(s) of 200.00\n", amount / 200);
	printf("%d Note(s) of 100.00\n", (amount % 200) / 100);
	printf("%d Note(s) of 50.00\n" , ((amount % 200) % 100) / 50);
	printf("%d Note(s) of 20.00\n" , (((amount % 200) % 100) % 50) / 20);
	printf("%d Note(s) of 10.00\n" , ((((amount % 200) % 100) % 50) % 20) / 10);
	printf("%d Note(s) of 5.00\n"  , (((((amount % 200) % 100) % 50) % 20) % 10) / 5);
	printf("%d Note(s) of 1.00\n"  , (((((amount % 200) % 100) % 50) % 20) % 10) % 5);
}

log_cyan("\n17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.\n\n");

//Test Data :
//Input seconds: 25300
//Expected Output:
//There are:
//H:M:S - 7:1:40

{	int saat, dakika, saniye;
	printf("Input seconds : ");
	scanf("%d", &saniye);

	saat = saniye / 3600;
	saniye %= 3600;
	dakika = saniye / 60;
	saniye %= 60;
	printf("There are:\nH:M:S - %d:%d:%d\n", saat, dakika, saniye);
}
log_cyan("\n18. Write a C program to convert a given integer (in days) to years, months and days, ");
log_cyan("assuming that all months have 30 days and all years have 365 days.\n\n");

//Test Data :
//Input no. of days: 2535
//Expected Output:
//6 Year(s)
//11 Month(s)
//15 Day(s)

{	int yil, ay, gun;

	printf("Input no. of days : ");
	scanf("%d", &gun);

	yil = gun / 365;
	gun %= 365;
	ay = gun / 30;
	gun %= 30;

	printf("%d Year(s)\n%d Month(s)\n%d Day(s)\n", yil, ay, gun);
}

log_cyan("\n19. Write a C program that accepts 4 integers p, q, r, s from the user ");
log_cyan("where q, r and s are positive and p is even. If q is greater than r and s is greater than p and ");
log_cyan("if the sum of r and s is greater than the sum of p and q print \"Correct values\", otherwise print \"Wrong values\".\n\n");

//Test Data :
//Input the first integer: 25
//Input the second integer: 35
//Input the third integer: 15
//Input the fourth integer: 46
//Expected Output:
//Wrong values

{	int p, q, r, s;

	printf("Input the first integer  : ");
	scanf("%d", &p);
	printf("Input the second integer : ");
	scanf("%d", &q);
	printf("Input the third integer  : ");
	scanf("%d", &r);
	printf("Input the fourth integer : ");
	scanf("%d", &s);

	if( (q > r) && (s > p) && ((r + s) > (p + q)) && (p % 2 == 0))
		printf("Correct values\n");
	else
		printf("Wrong values\n");
}

log_cyan("\n20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. ");
log_cyan("Display a message if it is not possible to find the roots.\n\n");

//Test Data :
//Input the first number(a): 25
//Input the second number(b): 35
//Input the third number(c): 12
//Expected Output:
//Root1 = -0.60000
//Root2 = -0.80000

{	int a, b, c;
	printf("Input the first number(a)  : ");
	scanf("%d", &a);
	printf("Input the second number(b) : ");
	scanf("%d", &b);
	printf("Input the third number(c)  : ");
	scanf("%d", &c);

	double pr1;
	pr1 = (b*b) - (4*(a)*(c)); // Calculate discriminant

	if(pr1 > 0 && a != 0) { // Check conditions for real roots
		double x, y;
		pr1 = sqrt(pr1); // Calculate square root of discriminant
		x = (-b + pr1)/(2*a); // Calculate first root
		y = (-b - pr1)/(2*a); // Calculate second root
		printf("Root1 = %.5lf\n", x);
		printf("Root2 = %.5lf\n", y);
	}
	else
		printf("\nImpossible to find the roots.\n");
}

log_cyan("\n21. Write a C program that reads an integer and checks the specified range to which it belongs. ");
log_cyan("Print an error message if the number is negative and greater than 80.\n\n");

//Test Data :
//Input an integer: 15
//Expected Output:
//Range [0, 20]
//Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]

{	int i = 0;

	printf("Input an integer : ");
	scanf("%d", &i);

	if (i >= 0 && i <= 20)
		printf("Range [%d, %d]\n", 0, 20);
	else if (i > 20 && i <= 40)
		printf("Range [%d, %d]\n", 20, 40);
	else if (i > 40 && i <= 60)
		printf("Range [%d, %d]\n", 40, 60);
	else if (i > 60 && i <= 80)
		printf("Range [%d, %d]\n", 60, 80);
	else
		printf("Girilen değer %d [0, 80] aralık dışında\n", i);
}

log_cyan("\n22. Write a C program that reads 5 numbers and sums all odd values between them.\n\n");

//Test Data :
//Input the first number: 11
//Input the second number: 17
//Input the third number: 13
//Input the fourth number: 12
//Input the fifth number: 5
//Expected Output:
//Sum of all odd values: 46

{	int sayi[5];
	int toplam = 0;

	for (int i = 0; i < 5; i++) {
		printf("Lütfen %d. sayıyı girin : ", i + 1);
		scanf("%d", &sayi[i]);
	}

	for (int i = 0; i < 5; i++)
		printf("sayi[%d] : %d\n", i, sayi[i]);

	for (int i = 0; i < 5; i++)
		if (sayi[i] % 2 != 0) toplam = toplam + sayi[i];

	printf("Sum of all odd values : %d\n", toplam);
}

log_cyan("\n23. Write a C program that reads three floating-point values and ");
log_cyan("checks if it is possible to make a triangle with them. ");
log_cyan("Determine the perimeter of the triangle if the given values are valid.\n\n");

//Test Data :
//Input the first number: 25
//Input the second number: 15
//Input the third number: 35
//Expected Output:
//Perimeter = 75.0

{	int kenar[3];
	int cevre = 0;
	int eleman = sizeof(kenar)/sizeof(kenar[0]);

	for (int i = 0; i < eleman; i++) {
		printf("Lütfen %d. kenarı girin : ", i + 1);
		scanf("%d", &kenar[i]);
	}

	if ((kenar[0] + kenar[1] > kenar[2]) &&
		(kenar[1] + kenar[2] > kenar[0]) &&
		(kenar[2] + kenar[0] > kenar[1]) ){
		for (int i = 0; i < eleman; i++) {
			cevre += kenar[i];
		}
		printf("Perimeter = %d\n", cevre);
	}else
		printf("verilen değer ile üçgen çizilemez!\n");
}

log_cyan("\n24. Write a C program that reads two integers and checks whether they are multiplied or not.\n\n");

//Test Data :
//Input the first number: 5
//Input the second number: 15
//Expected Output:
//Multiplied!

{	int sayi1, sayi2;

	printf("Input the first number  : ");
	scanf("%d", &sayi1);
	printf("Input the second number : ");
	scanf("%d", &sayi2);

	if ((sayi2 > sayi1) && (sayi2 % sayi1 == 0))
		printf("Multiplied!\n");
	else if ((sayi1 > sayi2) && (sayi1 % sayi2 == 0))
		printf("Multiplied!\n");
	else
		printf("Not multiplied!\n");
}

log_cyan("\n25. Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.\n\n");

//Test Data :
//Input a number between 1 to 12 to get the month name: 8
//Expected Output:
//August

int ay = 0;

printf("Input a number between 1 to 12 to get the month name : ");
scanf("%d", &ay);

switch (ay) {
	case 1: printf("Ocak\n"); break;
	case 2: printf("Şubat\n"); break;
	case 3: printf("Mart\n"); break;
	case 4: printf("Nisan\n"); break;
	case 5: printf("Mayıs\n"); break;
	case 6: printf("Haziran\n"); break;
	case 7: printf("Temmuz\n"); break;
	case 8: printf("Ağustos\n"); break;
	case 9: printf("Eylül\n"); break;
	case 10: printf("Ekim\n"); break;
	case 11: printf("Kasım\n"); break;
	case 12: printf("Aralık\n"); break;
	default: printf("hatalı ay girildi!");break;
}

log_cyan("\n26. Write a C program that prints all even numbers between 1 and 50 (inclusive).\n\n");

//Test Data :
//Even numbers between 1 to 50 (inclusive):
//Expected Output:
//2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50

	for (int i = 2; i <= 50; i += 2) {
		printf("%d ", i);
	}
	printf("\n");

log_cyan("\n27. Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.\n\n");

//Test Data :
//Input the first number: 5
//Input the second number: -4
//Input the third number: 10
//Input the fourth number: 15
//Input the fifth number: -1
//Expected Output:
//Number of positive numbers: 3
//Number of negative numbers: 2

{	int number[5];

	for (int i = 0;i < sizeof(number)/sizeof(number[0]);i++) {
		printf("Lütfen %d. sayıyı girin.", i + 1);
		scanf("%d", &number[i]);
	}
	short positive, negative;
	for (int i = 0; i < sizeof(number)/sizeof(number[0]); i++) {
		if (number[i] >= 0)
			positive++;
		else
			negative++;
	}
	printf("Number of positive numbers : %d\n", positive);
	printf("Number of negative numbers : %d\n", negative);
}

log_cyan("\n28. Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.\n\n");

//Test Data :
//Input the first number: 5
//Input the second number: 8
//Input the third number: 10
//Input the fourth number: -5
//Input the fifth number: 25
//Expected Output:
//Number of positive numbers: 4
//Average value of the said positive numbers: 12.00

{	int number[5];

	for (int i = 0;i < sizeof(number)/sizeof(number[0]);i++) {
		printf("Lütfen %d. sayıyı girin.", i + 1);
		scanf("%d", &number[i]);
	}
	int toplam = 0;
	short sayac = 0;
	for (int i = 0; i < sizeof(number)/sizeof(number[0]); i++) {
		if (number[i] >= 0){
			toplam += number[i];
			sayac++;
		}
	}
	float ortalama = (double)toplam / sayac;
	printf ("Pozitif sayı adedi : %d\n"
			"Ortalaması         : %.2f\n"
			"Toplamı            : %d\n", sayac, ortalama, toplam);
}

log_cyan("\n29. Write a C program that read 5 numbers and sum of all odd values between them.\n\n");
log_cyan("22. soru ile aynı\n");

//Test Data :
//Input the first number: 5
//Input the second number: 7
//Input the third number: 9
//Input the fourth number: 10
//Input the fifth number: 13
//Expected Output:
//Sum of all odd values: 34

{	int sayi[5];
	int toplam = 0;

	for (int i = 0; i < 5; i++) {
		printf("Lütfen %d. sayıyı girin : ", i + 1);
		scanf("%d", &sayi[i]);
	}

	for (int i = 0; i < 5; i++)
		printf("sayi[%d] : %d\n", i, sayi[i]);

	for (int i = 0; i < 5; i++)
		if (sayi[i] % 2 != 0) toplam = toplam + sayi[i];

	printf("Sum of all odd values : %d\n", toplam);
}

log_cyan("\n30. Write a C program to find and print the square of all the even values from 1 to a specified value.\n\n");

//Test Data :
//List of square of each one of the even values from 1 to a 4 :
//Expected Output:
//2^2 = 4
//4^2 = 16

	int girilenSayi = 0;

	printf("Bir tam sayı girin : ");
	scanf("%d", &girilenSayi);
	printf("List of square of each one of the even values from 1 to a %d\n", girilenSayi);

	for (int i = 2; i <= girilenSayi; i += 2) {
		printf("%d ** %d = %d\n",i , i, i * i );
	}

log_cyan("\n31. Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. ");
log_cyan("Print even if the number is 0.\n\n");

//Test Data :
//Input an integer: 13
//Expected Output:
//Positive Odd

	girilenSayi = 0;

	printf("Bir tam sayı girin : ");
	scanf("%d", &girilenSayi);

	if (girilenSayi > 0) {
		printf("Pozitif ");
		if (girilenSayi % 2 == 0){
			printf("çift\n");
		}else
			printf("tek\n");
	}else if (girilenSayi < 0){
		printf("Negatif ");
		if (girilenSayi % 2 == 0){
			printf("çift\n");
		}else
			printf("tek\n");
	}else
		printf("girilen sayı: 0");

log_cyan("\n32. Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.\n\n");

//Test Data :
//Input an integer: 25
//Expected Output:
//3
//28
//53
//78

	girilenSayi = 0;

	printf("Bir tam sayı girin : ");
	scanf("%d", &girilenSayi);

	for (int i = 0; i <= 100; i++) {
		if (i % girilenSayi == 3){
			printf("%d\n", i);
		}
	}

log_cyan("\n33. Write a C program that accepts some integers from the user and finds the highest value and the input position.\n\n");

//Test Data :
//Input 5 integers:
//5
//7
//15
//23
//45
//Expected Output:
//Highest value: 45
//Position: 5

{	int sayi[5];


	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Lütfen %d. sayıyı girin : ", i + 1);
		scanf("%d", &sayi[i]);
	}
	int maks = sayi[0];
	int indeks = 0;

	for (int i = 1; i < sizeof(sayi)/sizeof(sayi[0]); i++)
		if (sayi[i] > sayi[i - 1]){
			maks = sayi[i];
			indeks = i;
		}
	printf("Highest value : %d\nPosition      : %d\n", maks, indeks + 1);
}

log_cyan("\n34. Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.\n\n");
//Test Data :
//Input a pair of numbers (for example 10,2):
//Input first number of the pair: 10
//Input second number of the pair: 2
//Expected Output:
//List of odd numbers: 3
//5
//7
//9
//Sum=24

{	int bas, bit, toplam;
	int sayi[2];

	printf("Lütfen 2 adet sayı girin : ");
	scanf("%d %d", &sayi[0], &sayi[1]);

	if (sayi[0] < sayi[1]){
		bas = sayi[0];
		bit = sayi[1];
	}else{
		bas = sayi[1];
		bit = sayi[0];
	}

	if (bas % 2 == 0)
		bas++;

	printf("List of odd numbers :\n");
	for (int i = bas; i <= bit; i+=2) {
		printf("%d\n", i);
		toplam += i;
	}
	printf("toplam : %d\n", toplam);
}

log_cyan("\n35. Write a C program to check if two numbers in a pair are in ascending order or descending order.\n\n");
//Test Data :
//Input a pair of numbers (for example 10,2 : 2,10):
//Input first number of the pair: 10
//Expected Output:
//Input second number of the pair: 2
//The pair is in descending order!

{	int sayi[2];
	printf("Lütfen 2 adet sayı girin : ");
	scanf("%d %d", &sayi[0], &sayi[1]);

	if (sayi[0] < sayi[1])
		printf("The pair is in ascending order!\n");
	else
		printf("The pair is in descending order!\n");
}

log_cyan("\n36. Write a C program to read a password until it is valid. ");
log_cyan("For wrong password print \"Incorrect password\" and ");
log_cyan("for correct password print, \"Correct password\" and quit the program. The correct password is 1234.\n\n");
//Test Data :
//Input the password: 1234
//Expected Output:
//Correct password

{	const int parola = 1234;
	flag = FALSE;
	int sifre;

	do {
		printf("Input the password :");
		scanf("%d", &sifre);
		if(sifre == parola){
			printf("Correct password\n");
			flag = TRUE;
		}
	}while (!flag);
}
//string için aynı kodları düznliyorum

{	const char parola[] = "1234";
	flag = FALSE;
	char sifre[8];

	do {
		printf("Input the password :");
		scanf("%s", sifre);
		if(!strcmp(sifre, parola)){
			printf("Correct password\n");
			flag = TRUE;
		}
	}while (!flag);
}

log_cyan("\n37. Write a C program to read the coordinates (x, y) (in the Cartesian system) and ");
log_cyan("find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).\n\n");

//Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane
//by a pair of numerical coordinates.
//These are often numbered from 1st to 4th and denoted by Roman numerals:
//I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
//Test Data :
//Input the Coordinate(x,y):
//x: 25
//y: 15
//Expected Output:
//Quadrant-I(+,+)

{	int x, y;

	printf("Input the Coordinate(x,y): \n");
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	if(x > 0 && y > 0)
		printf("Quadrant-I(+,+)\n");
	else if(x < 0 && y > 0)
		printf("Quadrant-II(-,+)\n");
	else if(x < 0 && y < 0)
		printf("Quadrant-III(-,-)\n");
	else if(x > 0 && y < 0)
		printf("Quadrant-IV(+,-)\n");
}

log_cyan("\n38. Write a program that reads two numbers and divides the first number by the second number. ");
log_cyan("If division is not possible print \"Division is not possible\".\n\n");

//Test Data :
//Input two numbers:
//x: 25
//y: 5
//Expected Output: 5.0

{	int x, y;
	float div_result;

	// Prompt for user input
	printf("Input two numbers: ");
	printf("\nx: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	// Check if division is possible
	if(y != 0) {
		div_result = (double)x / y;
		printf("%.1f\n", div_result);
	} else
		printf("Division not possible.\n");
}

log_cyan("\n39. Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.\n\n");

//Test Data :
//Input the first integer: 50 Input the second integer: 99
//Expected Output:
//Sum: 3521

{	int toplam = 0;
	int sayi[2];

	printf("Lütfen 2 adet sayı girin : ");
	scanf("%d %d", &sayi[0], &sayi[1]);

	for(int i = sayi[0]; i <= sayi[1]; i++){
		if(i % 17 == 0)
			continue;
		toplam += i;
	}
	printf("toplam : %d\n", toplam);
}

log_cyan("\n40. Write a C program that finds all integer numbers that divide by 7 and ");
log_cyan("have a remainder of 2 or 3 between two given integers.\n\n");

//Test Data :
//Input the first integer: 25
//Input the second integer: 45
//Expected Output:
//30
//31
//37
//38
//44
//45

{	int sayi[2];

	printf("Lütfen 2 adet sayı girin : ");
	scanf("%d %d", &sayi[0], &sayi[1]);
	printf("%d ile %d arasında yer alan ve 7 ile bölümünden 2 ve 3 kalan verenler :\n",sayi[0], sayi[1]);

	for(int i = sayi[0]; i <= sayi[1]; i++){
		if ((i % 7 == 2) || (i % 7 == 3))
			printf("%d\n", i);
	}
}

log_cyan("\n41. Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. ");
log_cyan("Accept the number of lines (n, integer) from the user.\n\n");

//Test Data :
//Input number of lines: 5
//Expected Output:
//1 2 3
//4 5 6
//7 8 9
//10 11 12
//13 14 15

{	int sayi = 0;
	printf("Lütfen bir sayı girin : ");
	scanf("%d", &sayi);

	for (int i = 1; i <= sayi * 3; i += 3) {
		printf("%d\t%d\t%d\n", i, i + 1, i + 2);
	}
}

log_cyan("\n42. Write a C program to print a number, its square and cube, starting with 1 and printing n lines. ");
log_cyan("Accept the number of lines (n, integer) from the user.\n\n");

//Test Data :
//Input number of lines: 5
//Expected Output:
//1 1 1
//2 4 8
//3 9 27
//4 16 64
//5 25 125

{	int sayi = 0;
	printf("Lütfen bir sayı girin : ");
	scanf("%d", &sayi);

	for (int i = 1; i <= sayi; i++) {
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}
}

log_cyan("\n43. Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.\n\n");

//Test Data :
//Input number of lines: 5
//Number of characters in a line: 6
//Expected Output:
//1 2 3 4 5 6
//7 8 9 10 11 12
//13 14 15 16 17 18
//19 20 21 22 23 24
//25 26 27 28 29 30

{	int line = 0;
	int column = 0;
	int sayi = 1;

	printf("Input number of lines : ");
	scanf("%d", &line);
	printf("Number of characters in a line : ");
	scanf("%d", &column);

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			printf("%d\t", sayi);
			sayi++;
		}
		printf("\n");
	}
}

log_cyan("\n44. Write a C program to calculate the average mathematics marks of some students. ");
log_cyan("Input 0 (excluding to calculate the average) or a negative value to terminate the input process.\n\n");

//Test Data :
//Input Mathematics marks (0 to terminate):
//10
//15
//20
//25
//0
//Expected Output:
//Average marks in Mathematics: 17.50

{	int sayi[20];
	int i = 0, toplam = 0;

	do {
		printf("Input Mathematics marks (0 to terminate) : ");
		scanf("%d", &sayi[i]);
		if (sayi[i] <= 0)
			break;
		i++;
	} while (!(sayi[i - 1] == 0));

	for (int j = 0; j < i; j++) {
		toplam += sayi[j];
	}
	float average = (float)toplam / (float)i;

	printf("Average marks in Mathematics : %.2f\n", average);

}

log_cyan("\n45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.\n\n");

//Expected Output:
//Value of S: 4.50

{	double S = 1;

	for (double i = 2; i <= 50; i++) {
		S += 1 / i;
	}
	printf("Value of S : %.2f", S);
}

log_cyan("\n/46. Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.\n\n");

//Expected Output:
//Value of series: 4.62

{	double S = 1;

	for (double i = 2; i <= 50; i+=2) {
		S += (i + 1)/ i;
	}
	printf("Value of series : %.2f\n", S);

	printf("Value of series : %.2f\n", (float)1 + (float)3/2 + (float)5/4 + (float)7/8);
	printf("Value of series : %.2f\n", 1.0 + 3.0/2 + 5.0/4 + 7.0/8);

}

log_cyan("\n47. Write a C program that finds all the divisors of an integer.\n\n");

//Test Data:
//Input an integer: 45
//Expected Output:
//All the divisor of 45 are:
//1
//3
//5
//9
//15
//45

{	int girilenSayi = 0;
	printf("Input an integer : ");
	scanf("%d", &girilenSayi);
	printf("All the divisor of %d are : \n", girilenSayi);

	for (int i = 1; i <= girilenSayi; i++) {
		if (girilenSayi % i == 0)
			printf("%d\n", i);
	}
}

log_cyan("\n48. Write a C program that reads and prints the elements of an array of length 5. ");
log_cyan("Before printing, replace every negative number, zero, with 100.\n\n");

//Test Data:
//Input the 5 members of the array:
//25
//45
//35
//65
//15
//
//Expected Output:
//Array values are:
//n[0] = 25
//n[1] = 45
//n[2] = 35
//n[3] = 65
//n[4] = 15

{	int sayi[5];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Input the %d/%ld. members of the array : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%d", &sayi[i]);
		if (sayi[i] <= 0)
			sayi[i] = 100;
	}
	printf("Array values are : \n");
	for (int j = 0; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		printf("sayi[%d] : %d\n", j, sayi[j]);
	}
}

log_cyan("\n49. Write a C program to read and print the elements of an array with length 5. ");
log_cyan("Before printing, insert the triple of the previous position, starting from the second position.\n\n");

//For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
//Test Data:
//Input the first number of the array: 5
//Expected Output:
//n[0] = 5
//n[1] = 15
//n[2] = 45
//n[3] = 135
//n[4] = 405

{	int sayi[5];

	printf("Input the first number of the array : ");
	scanf("%d", &sayi[0]);

	for (int i = 1; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		sayi[i] = sayi[i - 1] * 3;
	}

	for (int j = 0; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		printf("sayi[%d] : %d\n", j, sayi[j]);
	}
}

log_cyan("\n50. Write a C program to read an array of length 5 and ");
log_cyan("print the position and value of the array elements of value less than 5.\n\n");

//Test Data:
//Input the 5 members of the array:
//15
//25
//4
//35
//40
//Expected Output:
//A[2] = 4.0

{	int sayi[5];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Input the %d/%ld. members of the array : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%d", &sayi[i]);
	}

	for (int j = 0; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		if (sayi[j] < 5)
			printf("sayi[%d] : %d\n", j, sayi[j]);
	}
}

log_cyan("\n51. Write a C program to read an array of length 6, change the first element by the last, ");
log_cyan("the second element by the fifth and the third element by the fourth. ");
log_cyan("Print the elements of the modified array.\n\n");

//Test Data:
//Input the 5 members of the array:
//15
//20
//25
//30
//35
//40
//
//Expected Output:
//array_n[0] = 40
//array_n[1] = 35
//array_n[2] = 30
//array_n[3] = 25
//array_n[4] = 20
//array_n[5] = 15

{	int sayi[6];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Input the %d/%ld. members of the array : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%d", &sayi[i]);
	}
	int temp = 0;
	//0 -> 5 & 5 -> 0
	temp = sayi[0];
	sayi[0] = sayi[5];
	sayi[5] = temp;

	//1 -> 4 & 4 -> 1
	temp = sayi[1];
	sayi[1] = sayi[4];
	sayi[4] = temp;

	//2 -> 3 & 3 -> 2
	temp = sayi[2];
	sayi[2] = sayi[3];
	sayi[3] = temp;

	for (int j = 0; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		printf("sayi[%d] : %d\n", j, sayi[j]);
	}
}

log_cyan("\n52. Write a C program to read an array of length 6 and find the smallest element and its position.\n\n");

//Test Data:
//Input the length of the array: 5 Input the array elements:
//25
//35
//20
//14
//45
//Expected Output:
//Smallest Value: 14
//Position of the element: 3

{	int sayi[6];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Input the %d/%ld. members of the array : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%d", &sayi[i]);
	}
	int min = sayi[0];
	int indeks = 1;

	for (int j = 1; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		if (sayi[j] < min){
			min = sayi[j];
			indeks = j + 1;
		}
	}
	printf("Smallest Value          : %d\nPosition of the element : %d\n", min, indeks);
}

log_cyan("\n53. Write a C program that accepts the principle, rate of interest, ");
log_cyan("and time and calculates simple interest.\n\n");

//Test Data:
//Input Data: p = 10000, r = 10% , t = 12 year
//Expected Output:
//Input principle, Rate of interest & time to find simple interest:
//Simple interest = 12000

{	int p, r, t;

	printf("Input Data p, r & t :");
	scanf("%d %d %d", &p, &r, &t);
	printf("Input principle, Rate of interest & time to find simple interest : \n");
	printf("Simple interest = %.2f TL\n", (float)p * (float)r * (float)t / 100);
}

log_cyan("\n54. Write a C program that accepts a distance in centimeters ");
log_cyan("and prints the corresponding value in inches.\n\n");

//Test Data:
//Input Data: 500cms
//Input the distance in cm:
//Distance of 500.00 cms is = 196.85 inches
//Note: 1 inch = 2.54 cm.

{	float cm = 0;
	printf("Input the distance in cm : ");
	scanf("%f", &cm);
	printf("Distance of %.2f cms is = %.2f\n", cm, cm / 2.54);

}

log_cyan("\n55. Write a C program that swaps two numbers without using a third variable.\n\n");

//Input value for x & y:
//Before swapping the value of x & y: 5 7
//After swapping the value of x & y: 7 5

{	int x, y;
	printf("Input value for x & y : ");
	scanf("%d %d", &x, &y);

	printf("Before swapping the value of x %d y: %d\n", x, y);
	x += y;
	y = x - y;
	x = x - y;
	printf("After swapping the value of  x %d y: %d\n", x, y);
}

log_cyan("\n56. Write a C program to shift given data by two bits to the left.\n\n");

//Input value : 2
//Read the integer from keyboard :
//Integer value = 2
//The left shifted data is = 16

{	int a;
	printf("Read the integer from keyboard : ");
	scanf("%d",&a);

	printf("Integer value = %d\n",a);
	a <<= 2;
	printf("The left shifted data is = %d\n",a);

}

log_cyan("\n57. Write a C program to reverse and print a given number.\n\n");

//Input a number:
//The original number = 234
//The reverse of the said number = 432

{	int sayi, tersi = 0;

	printf("Input a number : ");
	scanf("%d", &sayi);
	printf("The original number = %d\n", sayi);

	while (sayi != 0) {
		tersi = tersi * 10;
		tersi = tersi + sayi % 10;
		sayi = sayi / 10;
	}

	printf("The reverse of the said number = %d\n", tersi);
}

log_cyan("\n58. Write a C program that accepts 4 real numbers from the keyboard and ");
log_cyan("prints out the difference between the maximum and minimum values of these four numbers.\n\n");

//Input four numbers: 1.54 1.236 1.3625 1.002
//Difference is 0.5380

{	float sayi[4];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Input the %d/%ld. number : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%f", &sayi[i]);
	}

	float min = sayi[0];
	float maks = sayi[0];
	int minIndeks = 1;
	int maksIndeks = 1;

	for (int j = 1; j < sizeof(sayi)/sizeof(sayi[0]); j++) {
		if (sayi[j] < min){
			min = sayi[j];
			minIndeks = j + 1;
		}
		if (sayi[j] > maks){
			maks = sayi[j];
			maksIndeks = j + 1;
		}
	}
	printf("Smallest Value          : %f\nPosition of the element : %d\n", min, minIndeks);
	printf("Biggest Value           : %f\nPosition of the element : %d\n", maks, maksIndeks);

	float difference = maks - min;
	printf("Difference between biggest and the smallest value is : %f", difference);
}

log_cyan("\n59. Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.\n\n");

//Input any number: 1 + 1/0
//Sum = 1/0

{	int sayi = 0;
	float toplam = 0;
	printf("Input any number : ");
	scanf("%d", &sayi);

	for (int i = 1; i <= sayi; i++) {
		toplam += (1.0 / i);
	}

	printf("Sum = %f\n", toplam);
}

log_cyan("\n60. Write a C program to create enumerated data types for 7 days and ");
log_cyan("display their values in integer constants.\n\n");

//Sun = 0
//Mon = 1
//Tue = 2
//Wed = 3
//Thu = 4
//Fri = 5
//Sat = 6

{	enum daysOfWeek {Pts, Sal, Car, Per, Cum, Cts, Pzr};
	printf("Pts = %d\n", Pts);
	printf("Sal = %d\n", Sal);
	printf("Car = %d\n", Car);
	printf("Per = %d\n", Per);
	printf("Cum = %d\n", Cum);
	printf("Cts = %d\n", Cts);
	printf("Pzr = %d\n", Pzr);
}

log_cyan("\n/61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) ");
log_cyan("using 4-decimal places.\n\n");

//Input value of x: .6235
//Value of sin(1/x) is 0.9995

{   float sayi = 0;
    printf("Input value of x : ");
    scanf("%f", &sayi);
    if(sayi != 0){
        float valuOfSin = sin(1/sayi);
        printf("Value of sin(1/%.2f) is : %.4f\n", sayi, valuOfSin);
    }else
        printf("1/0 : number divided by zero is undefined\n");
}

log_cyan("\n62. Write a C program that accepts a positive integer less than 500 and ");
log_cyan("prints out the sum of the digits of this number.\n\n");

//Input a positive number less than 500:
//Sum of the digits of 347 is 14

{	int sayi = 0;
	int toplam = 0;

	do {
		printf("Input a positive number less than 500 and 3 digit : ");
		scanf(" %d", &sayi);
	} while (sayi > 500 || sayi < 100);

	printf("Sum of the digits of %d ", sayi);
	while(sayi != 0){
		toplam = toplam + sayi % 10;
		sayi /= 10;
	}
	printf("is : %d", toplam);
}

log_cyan("\n63. Write a C program that accepts a positive integer n less than 100 from the user. ");
log_cyan("It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. ");
log_cyan("In this case, m is less than or equal to n. Print an appropriate message.\n\n");

//Input a positive number less than 100: 68
//Sum of the series is 37361622

{	int sayi = 0;
	int artis = 0;
	long toplam = 0;

	do {
		printf("Input a positive number less than 100 : ");
		scanf("%d", &sayi);
	} while (sayi > 100 || sayi < 1);

	for (int i = 1; i <= sayi; i++) {
		artis += 10 * i - 10;
		toplam = toplam + 14 + artis;
		printf("Sum of the series is : %ld\n", toplam);
	}
}

log_cyan("\n64. Write a C program that accepts integers from the user until a zero or a negative number, ");
log_cyan("displays the number of positive values, the minimum value, the maximum value, and the average value.\n\n");

//Input a positive integer:
//Input next positive integer: 15
//Input next positive integer: 25
//Input next positive integer: 37
//Input next positive integer: 43
//Number of positive values entered is 4
//Maximum value entered is 43
//Minimum value entered is 15
//Average value is 30.0000

{	int sayi[4];
	int toplam = 0;
	int sayac = 0;
	int eleman = sizeof(sayi) / sizeof(sayi[0]);
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%ld. number : ", i + 1, sizeof(sayi)/sizeof(sayi[0]));
		scanf("%d", &sayi[i]);

		if (sayi[i] > 0)
			sayac++;
	}

	int min = sayi[0];
	int maks = sayi[0];

	for (int j = 1; j < eleman; j++) {
		if (sayi[j] < min)
			min = sayi[j];
		if (sayi[j] > maks)
			maks = sayi[j];
	}

	for (int k = 0; k < eleman; k++) {
		toplam += sayi[k];
	}

	printf("Number of positive values entered is %d\n", sayac);
	printf("Maximum value entered is : %d\n", maks);
	printf("Minimum value entered is : %d\n", min);
	float average = (float)toplam / eleman;
	printf("Average value is %.2f\n", average);
}

log_cyan("\n65. Write a C program that prints out the prime numbers between 1 and 200. ");
log_cyan("The output should be such that each row contains a maximum of 20 prime numbers.\n\n");

//Expected output:
//The prime numbers between 1 and 199 are:
//2 3 5 7 11 13 17 19 23 29
//31 37 41 43 47 53 59 61 67 71
//73 79 83 89 97 101 103 107 109 113
//127 131 137 139 149 151 157 163 167 173
//179 181 191 193 197

{	for (int i = 2; i <= 200; i++) {
		int flag = 0;

		for (int j = 2; j <= i / 2; j++) {
			if(i % j == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		printf("%d is a prime number.\n", i);
	}
}

log_cyan("\n66. Write a C program that generates 50 random numbers between -0.5 and 0.5 and ");
log_cyan("writes them to the file rand.dat. The first line of ran.dat contains the number of random numbers, ");
log_cyan("while the next 50 lines contain 50 random numbers.\n\n");

//50
//-0.4215
//0.2620
//0.3065
//-0.0485
//0.3980
//....
//0.1750
//0.4780
//-0.2915
//0.0715
//0.3565

{	FILE *fp;
	fp = fopen("rand.bat", "w");
	fprintf(fp, "50\n");

	srand(time(NULL));

	for (int i = 1; i <= 50; i++) {
		float sayi = ((float)(rand() % 1000 + 1) / 1000) - 0.5;
		fprintf(fp, "%f\n", sayi);
	}
	fclose(fp);
}

log_cyan("\n67. Write a C program to evaluate the equation y=xn when n is a non-negative integer.\n\n");

//Input the values of x and n: 256
//x=256.000000; n=0;
//x to power n=1.000000

{

}

log_cyan("\n68. Write a C program that prints the powers of 2 table for the powers 0 to 10, both positive and negative.\n\n");

//=======================================
//n 2 to power n 2 to power -n
//=======================================
//0 1 1.000000000000
//1 2 0.500000000000
//2 4 0.250000000000
//3 8 0.125000000000
//4 16 0.062500000000
//5 32 0.031250000000
//6 64 0.015625000000
//7 128 0.007812500000
//8 256 0.003906250000
//9 512 0.001953125000
//10 1024 0.000976562500
//=======================================

{	printf("=======================================\n");
	printf("n 2 to power n 2 to power -n\n");
	printf("=======================================\n");

	for (int i = 0; i <= 10; i++) {
		printf("%d\t%.0f\t%f\n", i, pow(2, i), pow(2, -1 * i));
	}

}

log_cyan("\n69. Write a C program to print a binomial coefficient table.\n\n");

//Mx 0 1 2 3 4 5 6 7 8 9 10
//----------------------------------------------------------
//0 1
//1 1 1
//2 1 2 1
//3 1 3 3 1
//4 1 4 6 4 1
//5 1 5 10 10 5 1
//6 1 6 15 20 15 6 1
//7 1 7 21 35 35 21 7 1
//8 1 8 28 56 70 56 28 8 1
//9 1 9 36 84 126 126 84 36 9 1
//10 1 10 45 120 210 252 210 120 45 10 1
//-----------------------------------------------------------

{

}

log_cyan("\n70. Write a C program to print the alphabet set in decimal and character form.\n\n");

//[65-A] [66-B] [67-C] [68-D] [69-E] [70-F] [71-G] [72-H] [73-I] [74-J] [75-K] [76-L] [77-M] [78-N] [79-O] [80-P] [81-Q] [82-R] [83-S] [84-T] [85-U] [86-V] [87-W] [88-X] [89-Y]
//[90-Z] [97-a] [98-b] [99-c] [100-d] [101-e] [102-f] [103-g] [104-h] [105-i] [106-j] [107-k] [108-l] [109-m] [110-n] [111-o] [112-p] [113-q] [114-r] [115-s] [116-t] [117-u] [118-v]
//[119-w] [120-x] [121-y] [122-z]

{	for (int i = 65; i <= 122; i++) {
		printf("[%d - %c] ", i, i);
	}
	printf("\n");
}

log_cyan("\n71. Write a C program to copy a given string into another and count the number of characters copied.\n\n");

//Input a string
//Original string: w3resource
//Number of characters = 10

{	char source[20];
	char destination[20];
	int i, count = 0;
	printf("Input a string : ");
	scanf("%s", source);

	// Source string copy to destination
	for(i = 0; source[i] != '\0'; ++i) {
		destination[i] = source[i];
		++count;
	}
	destination[i] = '\0';

	printf("Original string : %s\n", source);
	printf("Copy String     : %s\n", destination);
	printf("Number of characters = %d\n", count);
}

log_cyan("\n72. Write a C program to remove any negative sign in front of a number.\n\n");

//Input a value (negative):
//Original value = -253
//Absolute value = 253

{	int sayi = 0;
	printf("Input a value (negative) : ");
	scanf("%d", &sayi);

	if(sayi < 0)
		sayi = abs(sayi);

	printf("Absolute value = %d\n", sayi);
}

log_cyan("\n73. Write a C program that reads two integers and ");
log_cyan("checks whether the first integer is a multiple of the second integer.\n\n");

//Sample Input: 9 3
//Sample Output:
//Input the first integer : Input the second integer:
//9 is a multiple of 3.

{	int sayi1 = 0, sayi2 = 0;
	printf("Input the first integer : ");
	scanf("%d", &sayi1);
	printf("Input the second integer : ");
	scanf("%d", &sayi2);

	if (sayi1 % sayi2 == 0)
		printf("%d is a multiple of %d.\n", sayi1, sayi2);
	else
		printf("%d is NOT a multiple of %d.\n", sayi1, sayi2);

}

log_cyan("\n74. Write a C program to display the integer equivalents of letters (a-z, A-Z).\n\n");

//Sample Output:
//List of integer equivalents of letters (a-z, A-Z).
//==================================================
//97 98 99 100 101 102
//103 104 105 106 107 108
//109 110 111 112 113 114
//115 116 117 118 119 120
//121 122 32 65 66 67
//68 69 70 71 72 73
//74 75 76 77 78 79
//80 81 82 83 84 85
//86 87 88 89 90

{	int sayac = 0;
	printf("List of integer equivalents of letters (a-z)\n");
	printf("============================================\n");
	for(int i = 'a'; i <= 'z'; i++){
		printf("%d\t", i);
		sayac++;
		if(sayac % 6 == 0)
			printf("\n");
	}

	printf("\n\n");

	sayac = 0;
	printf("List of integer equivalents of letters (A-Z)\n");
	printf("============================================\n");
	for(int i = 'A'; i <= 'Z'; i++){
		printf("%d\t", i);
		sayac++;
		if(sayac % 6 == 0)
			printf("\n");
	}
	printf("\n");
}

log_cyan("\n75. Write a C program that accepts a seven-digit number, separates the number into its individual digits, ");
log_cyan("and prints the digits separated from one another by two spaces each.\n\n");

//Sample Input: 2345678
//Input a seven digit number:
//Output: 2 3 4 5 6 7 8

int sayi = 0;
    printf("Input a seven digit number : ");
    scanf("%d", &sayi);

    int original_sayi = sayi;

    int sayac = 0;
    while (sayi != 0) {
        sayi = sayi / 10;
        sayac++;
    }

    sayi = original_sayi;

    printf("Number of digits : %d\n", sayac);

    printf("Output : ");
    int divisor = 1;

    divisor *= pow(10, sayac-1);
    while (divisor > 0) {
        int digit = original_sayi / divisor;
        printf("%d ", digit);
        original_sayi %= divisor;
        divisor /= 10;
    }
    printf("\n");

log_cyan("\n76. Write a C program to calculate and print the squares and cubes of the numbers from 0 to 20. ");
log_cyan("It uses tabs to display them in a table of values.\n\n");

//Sample Output:
//Number Square Cube
//=========================
//0 0 0
//1 1 1
//2 4 8
//3 9 27
//.....
//18 324 5832
//19 361 6859
//20 400 8000

{	printf("Number\tSquare\tCube\n");
	printf("====================\n");

	for (int i = 0; i <= 20; i++) {
		printf("%d\t%.0f\t%.0f\n", i, pow(i, 2), pow(i, 3));
	}
}

log_cyan("\n77. Write a C program that accepts principal amount, rate of interest and days for a loan and ");
log_cyan("calculates the simple interest for the loan, using the following formula.\n\n");

//interest = principal * rate * days / 365.
//Sample Input:
//10000
//.1
//365
//0
//Sample Output:
//Input loan principal_amt (0 to quit):
//Input interest rate:
//Input term of the loan in days:
//The interest amount is $1000.00

{	float faiz, ana_para = 10000, faiz_orani;
    int gun, yilGunSayisi = 365;

    while (ana_para != 0){
        printf("Kredi başlangıç tutarını girin (Çıkmak için 0 girin): ");
        scanf("%f", &ana_para);

        if (ana_para == 0)
            break;

        printf("Faiz oranını girin: ");
        scanf("%f", &faiz_orani);

        printf("Kredi süresini gün cinsinden girin: ");
        scanf("%d", &gun);

        faiz = (ana_para * faiz_orani * gun) / yilGunSayisi;
        printf("Faiz miktarı $%.2f\n", faiz);
    }
}

log_cyan("\n78. Write a C program to demonstrate the difference between predecrementing and postdecrementing ");
log_cyan("using the decrement operator --.\n\n");

//Sample Output:
//Predecrementing:
//x = 10
//x-- = 10
//x = 9

{	int x = 10;
	printf("x = %d >>> ", x);
	printf("x-- = %d >>> ", x--);
	printf("x = %d\n", x);

	x = 10;
	printf("x = %d >>> ", x);
	printf("--x = %d >>> ", --x);
	printf("x = %d\n", x);
}

log_cyan("\n79. Write a C program using looping to produce the following table of values.\n\n");

//Sample Output:
//
//x       x+2     x+4     x+6
//--------------------------------
//1       3       5       7
//4       6       8       10
//7       9       11      13
//10      12      14      16
//13      15      17      19

{	printf("x\tx+2\tx+4\tx+6\n");
	printf("---------------------------\n");

	for (int i = 1; i <= 13; i += 3) {
		printf("%d\t%d\t%d\t%d\n", i, i + 2, i + 4, i + 6);
	}
}

log_cyan("\n80. Write a C program that reads the side (side sizes between 1 and 10 ) of a square and ");
log_cyan("prints square using hash (#) character.\n\n");

//Sample Input: 10
//Sample Output:
//
//Input the size of the square:
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #
// # # # # # # # # # #

{	int input;
	char character;
	printf("Sample Input : ");
	scanf("%d", &input);
	printf("Sample character : ");
	scanf(" %c", &character);
	printf("Sample Output : \n\n");

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			printf("%c ", character);
		}
		printf("\n");
	}
}

log_cyan("\n81. Write a C program that reads the side (side sizes between 1 and 10 ) of a square and ");
log_cyan("prints a hollow square using the hash (#) character.\n\n");

//Sample Input: 10
//Sample Output:
//
//Input the size of the square:
//##########
//#        #
//#        #
//#        #
//#        #
//#        #
//#        #
//#        #
//#        #
//##########

{	int input;
	char character;
	printf("Sample Input : ");
	scanf("%d", &input);
	printf("Sample character : ");
	scanf(" %c", &character);
	printf("Sample Output : \n\n");

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if(input > 2 && (i > 0 && i < input - 1) && (j > 0 && j < input - 1)){
				printf("%c ", character);
			}
			else
			printf("%c ", character);
		}
		printf("\n");
	}
}

log_cyan("\n82. Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.\n\n");

//Sample Input: 33333
//Sample Output:
//
//Input a five-digit number:
//33333 is a palindrome.

{	int n, reversed = 0, remainder, original;
	printf("Input a five-digit number : ");
	scanf("%d", &n);
	original = n;

	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	if (original == reversed)
		printf("%d is a palindrome.\n", original);
	else
		printf("%d is not a palindrome.\n", original);
}

log_cyan("\n83. Write a C program that reads an integer (7 digits or fewer) and ");
log_cyan("counts the number of 3s in the given number.\n\n");

//Sample Input: 538453
//Sample Output:
//Input a number:
//The number of threes in the said number is 2

{	int sayi = 0;
	printf("Input a number : ");
	scanf("%d", &sayi);

	int sayac = 0;
	while(sayi != 0){
		if(sayi % 10 == 3)
			sayac++;
		sayi /= 10;
	}

	printf("The number of threes in the said number is %d\n", sayac);
}

log_cyan("\n84. Write a C program to calculate and print the average of some integers. ");
log_cyan("Accept all the values preceding 888.\n\n");

//Sample Input:12
//15
//24
//888
//Sample Output:
//Input each number on a separate line (888 to exit):
//
//The average value of the said numbers is 17.000000

{	int toplam = 0, sayi, eleman = 0;
	float average;

	printf("Input each number on a separate line (888 to exit) :\n");
	while (1) {
	   scanf("%d", &sayi);
	   if (sayi == 888) {
		   break;
	   }
	   toplam += sayi;
	   eleman++;
	}
	if (eleman != 0) {
	   average = (float)toplam / eleman;
	   printf("The average value of the said numbers is %.2f\n", average);
	} else
	   printf("No numbers were entered.\n");
}

log_cyan("\n85. Write a C program to print a table of all the Roman numeral equivalents of decimal numbers ");
log_cyan("in the range 1 to 50.\n\n");

//Sample Output:
//Decimal  Roman
//number   numeral
//-------------------
//1        I
//2        II
//3        III
//4        IV
//.....
//98        LXXXXVIII
//99        LXXXXIX
//100        C

{	int yuzler = 0, onlar = 0, birler = 0;
	char sonuc[10] = "";printf(" %-10s| %-10s|\n", "Decimal", "Roman");

	printf(" %-10s| %-10s|\n", "number", "numeral");
	printf("-----------|-----------|\n");

	for (int i = 0; i <= 100; i++) {
		printf("%-13d", i);

		yuzler = i / 100;
		onlar = (i % 100) / 10;
		birler = i % 10;

        sonuc[0] = '\0';
		if (yuzler > 0) {
			switch (yuzler) {
				case 1:
					strcat(sonuc, "C");		break;
				case 2:
					strcat(sonuc, "CC");	break;
				case 3:
					strcat(sonuc, "CC");	break;
				case 4:
					strcat(sonuc, "CD");	break;
				case 5:
					strcat(sonuc, "D");		break;
			}
		}

		if (onlar > 0) {
			switch (onlar) {
				case 1:
					strcat(sonuc, "X");		break;
				case 2:
					strcat(sonuc, "XX");	break;
				case 3:
					strcat(sonuc, "XXX");	break;
				case 4:
					strcat(sonuc, "XL");	break;
				case 5:
					strcat(sonuc, "L");		break;
				case 6:
					strcat(sonuc, "LX");	break;
				case 7:
					strcat(sonuc, "LXX");	break;
				case 8:
					strcat(sonuc, "LXXX");	break;
				case 9:
					strcat(sonuc, "XC");	break;
			}
		}

		if (birler > 0) {
			switch (birler) {
				case 1:
					strcat(sonuc, "I");		break;
				case 2:
					strcat(sonuc, "II");	break;
				case 3:
					strcat(sonuc, "III");	break;
				case 4:
					strcat(sonuc, "IV");	break;
				case 5:
					strcat(sonuc, "V");		break;
				case 6:
					strcat(sonuc, "VI");	break;
				case 7:
					strcat(sonuc, "VII");	break;
				case 8:
					strcat(sonuc, "VIII");	break;
				case 9:
					strcat(sonuc, "IX");	break;
			}
		}
		printf("%s\n", sonuc);
	}
}

log_cyan("\n86. Write a C program to display the sizes and ranges for each of C's data types.\n\n");

//Sample Output:
//Size of C data types:
//
//Type               Bytes
//
//--------------------------------
//char                 1
//int8_t               1
//unsigned char        1
//uint8_t              1
//short                2
//int16_t              2
//uint16t              2
//int                  4
//unsigned             4
//long                 8
//unsigned long        8
//int32_t              4
//uint32_t             4
//long long            8
//int64_t              8
//unsigned long long   8
//uint64_t             8
//float                4
//double               8
//long double          16
//_Bool                1

{	printf(" %-20s| %-20s|\n", "Type", "Bytes");
	printf("---------------------|---------------------|\n");
	printf(" %-20s| %-20zu|\n", "char", sizeof(char));
	printf(" %-20s| %-20zu|\n", "int8_t", sizeof(int8_t));
	printf(" %-20s| %-20zu|\n", "unsigned char", sizeof(unsigned char));
	printf(" %-20s| %-20zu|\n", "uint8_t", sizeof(uint8_t));		//#include <inttypes.h>
	printf(" %-20s| %-20zu|\n", "short", sizeof(short));
	printf(" %-20s| %-20zu|\n", "int16_t", sizeof(int16_t));
	printf(" %-20s| %-20zu|\n", "uint16_t", sizeof(uint16_t));		//#include <inttypes.h>
	printf(" %-20s| %-20zu|\n", "int", sizeof(int));
	printf(" %-20s| %-20zu|\n", "unsigned int", sizeof(unsigned int));
	printf(" %-20s| %-20zu|\n", "long", sizeof(long));
	printf(" %-20s| %-20zu|\n", "unsigned long", sizeof(unsigned long));
	printf(" %-20s| %-20zu|\n", "int32_t", sizeof(int32_t));
	printf(" %-20s| %-20zu|\n", "uint32_t", sizeof(uint32_t));		//#include <inttypes.h>
	printf(" %-20s| %-20zu|\n", "long long", sizeof(long long));
	printf(" %-20s| %-20zu|\n", "int64_t", sizeof(int64_t));
	printf(" %-20s| %-20zu|\n", "unsigned long long", sizeof(unsigned long long));
	printf(" %-20s| %-20zu|\n", "uint64_t ", sizeof(uint64_t ));	//#include <inttypes.h>
	printf(" %-20s| %-20zu|\n", "float", sizeof(float));
	printf(" %-20s| %-20zu|\n", "double", sizeof(double));
	printf(" %-20s| %-20zu|\n", "long double", sizeof(long double));
	printf(" %-20s| %-20zu|\n", "Bool ", sizeof(_Bool));
}

log_cyan("\n87. Write a C program to display the minimum and maximum values for each of C's data types.\n\n");

//Sample Output:

//Ranges for integer data types in C                  |
//----------------------------------------------------|
//int8_t                    -128                   127
//int16_t                 -32768                 32767
//int32_t            -2147483648            2147483647
//int64_t   -9223372036854775808   9223372036854775807
//uint8_t                      0                   255
//uint16_t                     0                 65535
//uint32_t                     0            4294967295
//uint64_t                     0  18446744073709551615
//
//====================================================|
//Ranges for real number data types in C              |
//----------------------------------------------------|
//float             1.175494e-38          3.402823e+38
//double           2.225074e-308         1.797693e+308
//long double     3.362103e-4932        1.189731e+4932

{	printf("Ranges for integer data types in C                  |\n");
	printf("----------------------------------------------------|\n");
	printf( "int8_t    %20d  %20d\n"     , SCHAR_MIN , SCHAR_MAX  );
	printf( "int16_t   %20d  %20d\n"     , SHRT_MIN  , SHRT_MAX   );
	printf( "int32_t   %20d  %20d\n"     , INT_MIN   , INT_MAX    );
	printf( "int64_t   %20lld  %20lld\n" , LLONG_MIN , LLONG_MAX  );
	printf( "uint8_t   %20d  %20d\n"     , 0         , UCHAR_MAX  );
	printf( "uint16_t  %20d  %20d\n"     , 0         , USHRT_MAX  );
	printf( "uint32_t  %20d  %20u\n"     , 0         , UINT_MAX   );
	printf( "uint64_t  %20d  %20llu\n"   , 0         , ULLONG_MAX );
	printf( "\n" );
	printf( "====================================================|\n");
	printf( "Ranges for real number data types in C              |\n" );
	printf( "----------------------------------------------------|\n");
	printf( "float        %17.7g  %20.7g\n"   , FLT_MIN  , FLT_MAX  );
	printf( "double       %17.7g  %20.7g\n"   , DBL_MIN  , DBL_MAX  );
	printf( "long double  %17.7Lg  %20.7Lg\n" , LDBL_MIN , LDBL_MAX );
	printf( "\n" );

}

log_cyan("\n88. Write a C program to create an extended ASCII table. Print the ASCII values 32 through 255.\n\n");

//Sample Output:
//
//|---------------------------------------------------------------------------------------------------------|
//|extended ASCII table - excluding control characters                                                      |
//|   Ch Dec  Hex  |  Ch Dec  Hex   | Ch Dec  Hex | Ch Dec  Hex  | Ch Dec  Hex  | Ch Dec  Hex | Ch Dec  Hex |
//|----------------|----------------|-------------|--------------|--------------|-------------|-------------|
//|   har  32 0x20 |  @har  64 0x40 |  `  96 0x60 |  � 128 0x80 |  � 160 0xa0 |  � 192 0xc0 |  � 224 0xe0 |
//|  !har  33 0x21 |  Ahar  65 0x41 |  a  97 0x61 |  � 129 0x81 |  � 161 0xa1 |  � 193 0xc1 |  � 225 0xe1 |
//|  "har  34 0x22 |  Bhar  66 0x42 |  b  98 0x62 |  � 130 0x82 |  � 162 0xa2 |  � 194 0xc2 |  � 226 0xe2 |
//|  #har  35 0x23 |  Char  67 0x43 |  c  99 0x63 |  � 131 0x83 |  � 163 0xa3 |  � 195 0xc3 |  � 227 0xe3 |
//|  $har  36 0x24 |  Dhar  68 0x44 |  d 100 0x64 |  � 132 0x84 |  � 164 0xa4 |  � 196 0xc4 |  � 228 0xe4 |
//|  %har  37 0x25 |  Ehar  69 0x45 |  e 101 0x65 |  � 133 0x85 |  � 165 0xa5 |  � 197 0xc5 |  � 229 0xe5 |
//|  &har  38 0x26 |  Fhar  70 0x46 |  f 102 0x66 |  � 134 0x86 |  � 166 0xa6 |  � 198 0xc6 |  � 230 0xe6 |
//|  'har  39 0x27 |  Ghar  71 0x47 |  g 103 0x67 |  � 135 0x87 |  � 167 0xa7 |  � 199 0xc7 |  � 231 0xe7 |
//|  (har  40 0x28 |  Hhar  72 0x48 |  h 104 0x68 |  � 136 0x88 |  � 168 0xa8 |  � 200 0xc8 |  � 232 0xe8 |
//|  )har  41 0x29 |  Ihar  73 0x49 |  i 105 0x69 |  � 137 0x89 |  � 169 0xa9 |  � 201 0xc9 |  � 233 0xe9 |
//|  *har  42 0x2a |  Jhar  74 0x4a |  j 106 0x6a |  � 138 0x8a |  � 170 0xaa |  � 202 0xca |  � 234 0xea |
//|  +har  43 0x2b |  Khar  75 0x4b |  k 107 0x6b |  � 139 0x8b |  � 171 0xab |  � 203 0xcb |  � 235 0xeb |
//|  ,har  44 0x2c |  Lhar  76 0x4c |  l 108 0x6c |  � 140 0x8c |  � 172 0xac |  � 204 0xcc |  � 236 0xec |
//|  -har  45 0x2d |  Mhar  77 0x4d |  m 109 0x6d |  � 141 0x8d |  � 173 0xad |  � 205 0xcd |  � 237 0xed |
//|  .har  46 0x2e |  Nhar  78 0x4e |  n 110 0x6e |  � 142 0x8e |  � 174 0xae |  � 206 0xce |  � 238 0xee |
//|  /har  47 0x2f |  Ohar  79 0x4f |  o 111 0x6f |  � 143 0x8f |  � 175 0xaf |  � 207 0xcf |  � 239 0xef |
//|  0har  48 0x30 |  Phar  80 0x50 |  p 112 0x70 |  � 144 0x90 |  � 176 0xb0 |  � 208 0xd0 |  � 240 0xf0 |
//|  1har  49 0x31 |  Qhar  81 0x51 |  q 113 0x71 |  � 145 0x91 |  � 177 0xb1 |  � 209 0xd1 |  � 241 0xf1 |
//|  2har  50 0x32 |  Rhar  82 0x52 |  r 114 0x72 |  � 146 0x92 |  � 178 0xb2 |  � 210 0xd2 |  � 242 0xf2 |
//|  3har  51 0x33 |  Shar  83 0x53 |  s 115 0x73 |  � 147 0x93 |  � 179 0xb3 |  � 211 0xd3 |  � 243 0xf3 |
//|  4har  52 0x34 |  Thar  84 0x54 |  t 116 0x74 |  � 148 0x94 |  � 180 0xb4 |  � 212 0xd4 |  � 244 0xf4 |
//|  5har  53 0x35 |  Uhar  85 0x55 |  u 117 0x75 |  � 149 0x95 |  � 181 0xb5 |  � 213 0xd5 |  � 245 0xf5 |
//|  6har  54 0x36 |  Vhar  86 0x56 |  v 118 0x76 |  � 150 0x96 |  � 182 0xb6 |  � 214 0xd6 |  � 246 0xf6 |
//|  7har  55 0x37 |  Whar  87 0x57 |  w 119 0x77 |  � 151 0x97 |  � 183 0xb7 |  � 215 0xd7 |  � 247 0xf7 |
//|  8har  56 0x38 |  Xhar  88 0x58 |  x 120 0x78 |  � 152 0x98 |  � 184 0xb8 |  � 216 0xd8 |  � 248 0xf8 |
//|  9har  57 0x39 |  Yhar  89 0x59 |  y 121 0x79 |  � 153 0x99 |  � 185 0xb9 |  � 217 0xd9 |  � 249 0xf9 |
//|  :har  58 0x3a |  Zhar  90 0x5a |  z 122 0x7a |  � 154 0x9a |  � 186 0xba |  � 218 0xda |  � 250 0xfa |
//|  ;har  59 0x3b |  [har  91 0x5b |  { 123 0x7b |  � 155 0x9b |  � 187 0xbb |  � 219 0xdb |  � 251 0xfb |
//|  <har  60 0x3c |  \har  92 0x5c |  | 124 0x7c |  � 156 0x9c |  � 188 0xbc |  � 220 0xdc |  � 252 0xfc |
//|  =har  61 0x3d |  ]har  93 0x5d |  } 125 0x7d |  � 157 0x9d |  � 189 0xbd |  � 221 0xdd |  � 253 0xfd |
//|  >har  62 0x3e |  ^har  94 0x5e |  ~ 126 0x7e |  � 158 0x9e |  � 190 0xbe |  � 222 0xde |  � 254 0xfe |
//|  ?har  63 0x3f |  _har  95 0x5f |DEL 127 0x7f |  � 159 0x9f |  � 191 0xbf |  � 223 0xdf |  � 255 0xff |

{

}

log_cyan("\n89. Write a C programming to calculate (x + y + z) for each pair of integers x, y and z ");
log_cyan("where -2^31 <= x, y, z<= 2^31-1.\n\n");

//Sample Output:
//Result: 140733606875472

{

}

log_cyan("\n90. Write a C program to find all prime palindromes ");
log_cyan("in the range of two given numbers x and y (5 <= x<y<= 1000,000,000).\n\n");

//A number is called a prime palindrome if the number is both a prime number and a palindrome.
//Sample Output:
//Input two numbers (separated by a space):
//List of prime palindromes:
//0
//1

{

}

log_cyan("\n91. Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock. ");
log_cyan("The hour hand and the minute hand are always between 0 and 180 degrees.\n\n");

//For example, when it's 12 o'clock, the angle of the two hands is 0 while 3:00 is 45 degrees and 6:00 is 180 degrees.
//Sample Output:
//Input hour(h) and minute(m) (separated by a space):
//3 0
//At 3:00 the angle is 90.0 degrees.
//Input hour(h) and minute(m) (separated by a space):
//6 15
//The angle is 90.0 degrees at 6:15.
//Input hour(h) and minute(m) (separated by a space):
//12 0
//At 12:00 the angle is 0.0 degrees.

{	int saat, dakika;
	printf("Input hour(h) and minute(m) (separated by a space) : ");
	scanf("%d %d", &saat, &dakika);

	float dakika_derece = dakika * 6;
	float saat_derece = ((float)(saat % 12) * 30) + ((float)dakika * 0.5);

	printf("saat : %.2f - dakika : %.2f\n", saat_derece, dakika_derece);

	float sonuc = saat_derece - dakika_derece;
	if (sonuc < 0)
	    sonuc = -sonuc;
	if (sonuc > 180)
	    sonuc = 360 - sonuc;
	printf("At %02d:%02d the angle is %.1f degrees", saat, dakika, sonuc);
}

log_cyan("\n92. Write a C program to find the last non-zero digit of the factorial of a given positive integer.\n\n");

//For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
//Sample Output:
//Input a positive number:
//The last non-zero digit of the said factorial:
//0

{	int sayi = 0;
	int sifir_sayisi = 0;
	printf("Input a positive number : ");
	scanf("%d", &sayi);

	int i = sayi;
	while (i >= 5) {
			sifir_sayisi += i / 5;
			i /= 5;
		}
	printf("The last non-zero digit of %d factorial : %d\n",sayi, sifir_sayisi);
}

log_cyan("\n93. Write a C program to check if a given number is nearly prime number or not.\n\n");

//Nearly prime numbers are a positive integer which is equal to the product of two prime numbers.
//Sample Output:
//It is not a Nearly prime number.

{	int sayi = 0;
	printf("Input a positive number : ");
	scanf("%d", &sayi);

	int sayac = 0;

	for (int i = 2; i <= sayi / 2; i++) {
		if(sayi % i == 0){
			sayac++;
		}
	}
	if (sayac == 2)
		printf("%d is a Nearly prime number.\n", sayi);
	else
		printf("%d is NOT a Nearly prime number.\n", sayi);
}

log_cyan("\n94. Write a C program to calculate body mass index and display the grade.\n\n");

//Sample Output:
//Input the weight: 65
//Input the height: 5.6
//BMI = 2.072704
//
//Grade: Under

{	int weight = 0;
	float height = 0;

	printf("Input the weight : ");
	scanf("%d", &weight);
	printf("Input the height : ");
	scanf("%f", &height);

	float vucutKitleEndeksi = (float)weight / pow(height, 2);

	printf("weight : %d\nheight : %.2f\nBMI : %.2f kg/m^2\n", weight, height, vucutKitleEndeksi);

	if (vucutKitleEndeksi < 18.5)
	    printf("İdeal kilonun altı.\n");
	else if (vucutKitleEndeksi < 25)
		printf("İdeal Kilo\n");
	else if (vucutKitleEndeksi < 30)
		printf("İdeal Kilonun Üstü\n");
	else if (vucutKitleEndeksi < 40)
		printf("İdeal Kilonun Çok Üstü (Obez)\n");
	else
		printf("Morbid Obez\n");
}

log_cyan("\n95. Write a C program to print the corresponding Fahrenheit to Celsius and Celsius to Fahrenheit.\n\n");

//Both cases initial tempratue = 00, maximum temperature = 150 and step 10
//Sample Output:
//Celsius to Fahrenheit
//---------------------
//   0.0 	     32.0
//  10.0 	     50.0
//  20.0 	     68.0
//  30.0 	     86.0
//....
// 120.0 	    248.0
// 130.0 	    266.0
// 140.0 	    284.0
// 150.0 	    302.0
//
//
//Fahrenheit to Celsius
//---------------------
//   0.0 	    -17.8
//  10.0 	    -12.2
//  20.0 	     -6.7
//  30.0 	     -1.1
//  40.0 	      4.4
//  50.0 	     10.0
// ...
// 120.0 	     48.9
// 130.0 	     54.4
// 140.0 	     60.0
// 150.0 	     65.6

//°F = °C × 1.8 + 32
//°C = (°F – 32) / 1.8
//°K = °C + 273.15
//°C = °K – 273.15

{	printf("Celcius toFahrenheit toKelvin\n");
	printf("-----------------------------\n");
	for (float i = 0; i <= 150; i += 10){
		printf("%5.1f°C", i);
		printf("%11.1f°F", ((i * 1.8) + 32));
		printf("%7.1f K\n", i + 273.15);
	}

	printf("\nFahrenheit toCelcius toKelvin\n");
	printf("-----------------------------\n");
	for (float i = 0; i <= 150; i += 10){
		printf("%8.1f°F", i);
		printf("%8.1f°C", ((float)(i - 32.0) / 1.8));
		printf("%8.1fK\n", (((float)(i - 32.0) / 1.8) + 273.15));
	}
}

log_cyan("\n96. Write a C program to count blanks, tabs, and newlines in input text.\n\n");

//Sample Output:
//Number of blanks, tabs, and newlines:
//Input few words/tab/newlines
//The quick
//brown fox jumps
//over the lazy dog
//^Z
//blank=7,tab=2,newline=3

{

}

log_cyan("\n97. Write a C program that accepts a string and counts the number of characters, words and lines.\n\n");

//Sample Output:
//Input a string and get number of charcters, words and lines:
//The quick brown fox jumps over the lazy dog
//^Z
//
//Number of Characters = 44
//Number of words = 9
//Number of lines = 1

{	int blanks = 0, tabs = 0, newlines = 0;
	int metin;

	printf("Enter text (press Ctrl+D to end):\n");

	while ((metin = getchar()) != EOF) {
		if (metin == ' ')
			blanks++;
		else if (metin == '\t')
			tabs++;
		else if (metin == '\n')
			newlines++;
	}

	printf("Blanks: %d\n", blanks);
	printf("Tabs: %d\n", tabs);
	printf("Newlines: %d\n", newlines);

}

log_cyan("\n98. Write a C program that accepts some text from the user and prints each word of that text on a separate line.\n\n");

//Sample Output:
//Input some text:
//The quick brown fox jumps over the lazy dog
//The
//quick
//brown
//fox
//jumps
//over
//the
//lazy
//dog

{	char metin[25];
	printf("Input some text: ");
	fgets(metin, sizeof(metin), stdin);

	char *kelime = strtok(metin, " \n");
	while (kelime != NULL) {
		printf("%s\n", kelime);
		kelime = strtok(NULL, " \n");
	}
}

log_cyan("\n99. Write a C program that takes some integer values from the user and prints a histogram.\n\n");

//Sample Output:
//Input number of histogram bar (Maximum 10):
//4
//Input the values between 0 and 10 (separated by space):
//9
//7
//4
//3
//
//
//Histogram:
//#########
//#######
//####
//###

{	int values[10];
	int count;

	printf("Enter integer values (up to 10, terminate with a non-integer character):\n");
	for (count = 0; count < 10; count++) {
		if (scanf("%d", &values[count]) == 0)
			break;
		//Girişin integer olup olmadığı kontrolü
		//scanf fonksiyonu başarılı bir şekilde okunan girişlerin integer türünde sayısını döndürür.
		//burada "%d" ile bir format specifier tanımlanmış ve başarılı giriş olduğunda 1 döndürür

	}

	printf("Histogram:\n");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < values[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}

log_cyan("\n100. Write a C program to convert a currency value (floating point with two decimal places) to the number of coins and notes.\n\n");

//Sample Output:
//Input the currency value (floating point with two decimal places):
//10357.75
//
//Currency Notes:
//100 number of Note(s): 103
//50 number of Note(s): 1
//5 number of Note(s): 1
//2 number of Note(s): 1
//
//Currency Coins:
//.50 number of Coin(s): 1
//.25 number of Coin(s): 1

{	float amount = 0;
    printf("Input the currency value (floating point with two decimal places): ");
    scanf("%f", &amount);

    int note200 = (int)(amount / 200); // 200 TL banknotları
    int remainingAmount = (int)amount % 200; // Kalan miktar
    int note100 = remainingAmount / 100; // 100 TL banknotları
    remainingAmount %= 100;
    int note50 = remainingAmount / 50; // 50 TL banknotları
    remainingAmount %= 50;
    int note20 = remainingAmount / 20; // 20 TL banknotları
    remainingAmount %= 20;
    int note10 = remainingAmount / 10; // 10 TL banknotları
    remainingAmount %= 10;
    int note5 = remainingAmount / 5; // 5 TL banknotları
    remainingAmount %= 5;

    float remainingCoins = fmod(amount, 1) * 100; // Kalan kuruş miktarını hesapla

    int coin1 = remainingAmount; // 1 TL madeni paralar
    int coin50 = remainingCoins / 50; // 50 kuruş madeni paralar
    remainingCoins -= coin50 * 50; // 50 kuruş madeni paraların çıkarılması
    int coin25 = remainingCoins / 25; // 25 kuruş madeni paralar
    remainingCoins -= coin25 * 25; // 25 kuruş madeni paraların çıkarılması

    printf("Currency Notes:\n");
    printf("%d Note(s) of 200.00\n", note200);
    printf("%d Note(s) of 100.00\n", note100);
    printf("%d Note(s) of 50.00\n", note50);
    printf("%d Note(s) of 20.00\n", note20);
    printf("%d Note(s) of 10.00\n", note10);
    printf("%d Note(s) of 5.00\n", note5);

    printf("Currency Coins:\n");
    printf("%d Coin(s) of 1.00\n", coin1);
    printf("%d Coin(s) of 0.50\n", coin50);
    printf("%d Coin(s) of 0.25\n", coin25);
}

log_cyan("\n101. There are three given ranges. Write a C program that reads a floating-point number and finds the range where it belongs from four given ranges.\n\n");

//Sample Output:
//Input a number: 87
//Range (80,100]

{	int sayi = 0;
	printf("Input a number : ");
	scanf("%d", &sayi);

	if(sayi < 20 && sayi > 0)
		printf("Range [0,20]\n");
	else if(sayi < 40)
		printf("Range [20,40]\n");
	else if(sayi < 60)
		printf("Range [40,60]\n");
	else if(sayi < 80)
		printf("Range [60,80]\n");
	else if(sayi < 100)
		printf("Range [80,100]\n");
	else
		printf("Out of Range [0,100]");

}

log_cyan("\n102. Write a C program that reads three integers and sorts the numbers in ascending order. Print the original numbers and the sorted numbers.\n\n");

//Sample Output:
//Input 3 integers: 17
//-5
//25
//
//---------------------------
//Original numbers: 17, -5, 25
//Sorted numbers: -5, 17, 25

{	int sayi[3];
	printf("Input 3 integers : ");
	scanf("%d %d %d", &sayi[0], &sayi[1], &sayi[2]);
	printf("Original numbers : ");
	printf("%d, %d, %d\n", sayi[0], sayi[1], sayi[2]);

	int gecici;
	for(int i = 0; i < (sizeof(sayi)/sizeof(sayi[0])) - 1; i++) {
		for(int j = i+1; j < (sizeof(sayi)/sizeof(sayi[0])); j++) {
			if(sayi[j] < sayi[i]){
				gecici = sayi[i];
				sayi[i] = sayi[j];
				sayi[j] = gecici;
			}
		}
	}
	printf("Sorted numbers   : ");
	printf("%d, %d, %d\n", sayi[0], sayi[1], sayi[2]);
}

log_cyan("\n103. Write a C program that takes two integers and tests whether they are multiplied or not.\n\n");

//In science, a multiple is the product of any quantity and an integer. In other words, for the quantities a and b, we say that b is a multiple of a if b = na for some integer n, which is called the multiplier. If a is not zero, this is equivalent to saying that b/a is an integer.
//Sample Output:
//Input two integers:
//3
//9
//Multiplies

{ // 24. soru ile aynı

}

log_cyan("\n104. Write a C program that reads the item's price and creates a revised price for the item, based on the item price table.\n\n");

//Sample Output:
//Input the item price:525
//New Item price: 582.75
//Increased price: 57.75
//Increase Percentage: 11%

{	float price = 0;
	float newPrice = 0;
	printf("Input the item price : ");
	scanf("%f", &price);
	printf("New Item price       : ");
	scanf("%f", &newPrice);

	printf("Increased price      : %.2f\n", newPrice - price);
	printf("Increase Percentage  : %%%.2f\n", ((newPrice - price) / price) * 100);
}

log_cyan("\n105. Write a C program that accepts seven floating point numbers and counts the number of positive and negative numbers. ");
log_cyan("Print the average of all positive and negative values with two digits after the decimal number.\n\n");

//Sample Output:
//Input 7 numbers(int/float):
//25
//35.75
//15
//-3.5
//40
//35
//16
//
//6 Number of positive numbers: Average 27.79
//
//1 Number of negative numbers: Average -3.50

{	float sayi[7];
	int pozitifSayac = 0;
	float pozitifToplam = 0;
	int negatifSayac = 0;
	float negatifToplam = 0;
	int sifir = 0;
	printf("Input 7 numbers (int/float) : ");
	for (int i = 0; i < (sizeof(sayi) / sizeof(sayi[0])); i++) {
		scanf("%f", &sayi[i]);
	}
	for (int j = 0; j < (sizeof(sayi) / sizeof(sayi[0])); j++) {
		if(sayi[j] > 0){
			pozitifSayac++;
			pozitifToplam += sayi[j];
		}
		else if(sayi[j] < 0){
			negatifSayac++;
			negatifToplam += sayi[j];
		}
		else
			sifir++;
	}
	printf("%d Number of positive numbers: Average %.2f\n", pozitifSayac, pozitifToplam / pozitifSayac);
	printf("%d Number of negative numbers: Average %.2f\n", negatifSayac, negatifToplam / negatifSayac);
}

log_cyan("\n106. Write a C program that accepts 7 integer values and counts the even, odd, positive and negative values.\n\n");

//Sample Output:
//
//Input 7 integers:
//10
//12
//15
//-15
//26
//35
//17
//
//Number of even values: 3
//Number of odd values: 4
//Number of positive values: 6
//Number of negative values: 1

{	int sayi[7];
	int ciftSayac = 0;
	int tekSayac = 0;

	int pozitifSayac = 0;
	int negatifSayac = 0;
	int sifir = 0;
	printf("Input 7 numbers (int/float) : ");
	for (int i = 0; i < (sizeof(sayi) / sizeof(sayi[0])); i++) {
		scanf("%d", &sayi[i]);
	}
	for (int j = 0; j < (sizeof(sayi) / sizeof(sayi[0])); j++) {
		if (sayi[j] % 2 == 0)
			ciftSayac++;
		else if (sayi[j] % 2 == 1)
			tekSayac++;
		if (sayi[j] > 0)
			pozitifSayac++;
		else if (sayi[j] < 0)
			negatifSayac++;
		if (sayi[j] == 0)
			sifir++;
	}
	printf("Number of even values    : %d\n", ciftSayac);
	printf("Number of odd values     : %d\n", tekSayac);
	printf("Number of positive values: %d\n", pozitifSayac);
	printf("Number of negative values: %d\n", negatifSayac);
	printf("Number of zero           : %d\n", sifir);
}

log_cyan("\n107. Write a C program that prints ten consecutive odd and even numbers after accepting an integer.\n\n");

//Sample Output:
//Input an integer number:
//15
//
//Next 10 consecutive odd numbers:
//17, 19, 21, 23, 25, 27, 29, 31, 33, 35,
//
//Next 10 consecutive even numbers:
//26, 28, 30, 32, 34, 36, 38, 40, 42, 44,

{	int sayi = 0;
    int odd = 0;
    int even = 0;
	printf("Input an integer number : ");
	scanf("%d", &sayi);

	if(sayi % 2 == 1){
	    odd = sayi + 2;
	    even = sayi + 1;
	}else{
	    odd = sayi + 1;
	    even = sayi + 2;
	}

	printf("Next 10 consecutive odd numbers  : \n");
	for (int i = odd; i <= odd + 18; i += 2)
		printf("%d, ", i);
	printf("\n");

	printf("Next 10 consecutive even numbers : \n");
	for (int i = even; i <= even + 18; i += 2)
			printf("%d, ", i);
	printf("\n");
}

log_cyan("\n108. Write a C program that reads two integer values and calculates the sum of all odd numbers between them.\n\n");

//Sample Output:
//Input the first integer number:
//25
//Input the second integer number (greater than first integer):
//45
//Sum of all odd values between 25 and 45:
//385
//Sum of all even values between 25 and 45:
//350

{	int sayi1 = 0, sayi2 = 0;
	int oddBasla = 0, oddBitir = 0, oddToplam = 0;
	int evenBasla = 0, evenBitir = 0, evenToplam = 0;
	printf("Input the first integer number : ");
	scanf("%d", &sayi1);
	printf("Input the second integer number (greater than first integer) : ");
	scanf("%d", &sayi2);

	printf("Sum of all odd values between %d and %d  : ", sayi1, sayi2);
	oddBasla = (sayi1 % 2 == 1) ? sayi1 : sayi1 + 1;
	oddBitir = (sayi2 % 2 == 1) ? sayi2 : sayi2 - 1;
	for (int i = oddBasla; i <= oddBitir; i += 2) {
		oddToplam += i;
	}
	printf("%d\n", oddToplam);

	printf("Sum of all even values between %d and %d : ", sayi1, sayi2);
	evenBasla = (sayi1 % 2 == 1) ? sayi1 + 1 : sayi1;
	evenBitir = (sayi2 % 2 == 1) ? sayi2 - 1 : sayi2;
	for (int i = evenBasla; i <= evenBitir; i += 2) {
		evenToplam += i;
	}
	printf("%d\n", evenToplam);
}

log_cyan("\n109. Write a C program to find and print the square of each even and odd value between 1 and a given number (4 < n < 101).\n\n");

//Sample Output:
//Input a number(integer): 15
//
//Square of each even between 1 and 15:
//2^2 = 4
//4^2 = 16
//6^2 = 36
//8^2 = 64
//10^2 = 100
//12^2 = 144
//14^2 = 196
//
//Square of each odd between 1 and 15:
//1^2 = 1
//3^2 = 9
//5^2 = 25
//7^2 = 49
//9^2 = 81
//11^2 = 121
//13^2 = 169
//15^2 = 225

{	int sayi = 0;
    int multiplier = 2;
	printf("Input a number(integer) : ");
	scanf("%d", &sayi);
	printf("Square of each even between 1 and %d : \n", sayi);
	for (int i = 2; i <= sayi; i += 2)
		printf("%3d^%d = %5.0f\n", i, multiplier, pow(i, multiplier));

	printf("Square of each odd between 1 and %d  : \n", sayi);
	for (int j = 1; j <= sayi; j += 2)
			printf("%3d^%d = %5.0f\n", j, multiplier, pow(j, multiplier));
}

log_cyan("\n110. Write a C program to find the odd, even, positive and negative numbers from a given number (integer) and print a message 'Number is positive odd' or 'Number is negative odd' or 'Number is positive even' or 'Number is negative even'. If the number is 0 print \"Zero\".\n\n");

//Sample Output:
//Input a number (integer):
//12
//Number is positive-even

{	int sayi = 0;
	printf("Input a number (integer) : ");
	scanf("%d", &sayi);

	if (sayi < 0) {
		printf("Number is Negatif-");
		if (sayi % 2 == 0)
			printf("even.\n");
		else
			printf("odd.\n");
	}
	else if (sayi > 0) {
		printf("Number is Pozitif-");
		if (sayi % 2 == 0)
			printf("even.\n");
		else
			printf("odd.\n");
	}
	else
		printf("Number is Zero\n");

}

log_cyan("\n111. Write a C program that accepts an integer from the user and divides all numbers between 1 and 100. ");
log_cyan("Print those numbers where the remainder value is 3.\n\n");

//Sample Output:
//Input a number (integer):
//65
//
//Remainder value is 3 after divide all numbers between 1 and 100 by 65:
//3
//68

{	int sayi = 0;
	printf("Input a number (integer) : ");
	scanf("%d", &sayi);

	for (int i = 1; i <= 100; i++) {
		if(i % sayi == 3)
			printf("%d\n", i);
	}
}

log_cyan("\n112. Write a C program that reads seven integer values from the user and finds the highest value and its position.\n\n");

//Sample Output:
//Input 6 numbers (integer values):
//15
//20
//25
//17
//-8
//35
//
//Maximum value: 35
//Position: 6

{	//33. soru ile çok benzer
	int sayi[7];

	for (int i = 0; i < sizeof(sayi)/sizeof(sayi[0]); i++) {
		printf("Lütfen %d. sayıyı girin : ", i + 1);
		scanf("%d", &sayi[i]);
	}
	int maks = sayi[0];
	int indeks = 0;

	for (int i = 1; i < sizeof(sayi)/sizeof(sayi[0]); i++)
		if (sayi[i] > sayi[i - 1]){
			maks = sayi[i];
			indeks = i;
		}
	printf("Highest value : %d\nPosition      : %d\n", maks, indeks + 1);
}

log_cyan("\n113. Write a C program to create and print the sequence of the following example.\n\n");

//Sample Output:
//a=1      b=100
//a=6      b=90
//a=11     b=80
//a=16     b=70
//a=21     b=60
//a=26     b=50
//a=31     b=40
//a=36     b=30
//a=41     b=20
//a=46     b=10
//a=51     b=0

{	for (int i = 0; i <= 10; i++) {
		printf("a = %d\tb = %d\n", ((i * 5) + 1), (100 -(i * 10)));
	}
}

log_cyan("\n114. Write a C program that accepts two integer values and calculates the sum of all even values between them.\n\n");

//Sample Output:
//Input two numbers (integer values):
//25
//45
//
//Sum of all even values between 25 and 45
//350
//Sample Output:
//
//Input two numbers (integer values):
//27
//13
//
//Sum of all even values between 27 and 13
//140

{	int sayi1 = 0, sayi2 = 0;
	int gecici1 = 0, gecici2 = 0;

	int evenBasla = 0, evenBitir = 0, evenToplam = 0;
	printf("Input two numbers (integer values):");
	scanf("%d %d", &gecici1, &gecici2);

	if (gecici1 > gecici2){
		sayi1 = gecici2;
		sayi2 = gecici1;
	}else{
		sayi1 = gecici1;
		sayi2 = gecici2;
	}

	printf("Sum of all even values between %d and %d : ", sayi1, sayi2);
	evenBasla = (sayi1 % 2 == 1) ? sayi1 + 1 : sayi1;
	evenBitir = (sayi2 % 2 == 1) ? sayi2 - 1 : sayi2;
	for (int i = evenBasla; i <= evenBitir; i += 2) {
		evenToplam += i;
	}
	printf("%d\n", evenToplam);
}

log_cyan("\n115. Write a C program that accepts a pair of numbers from the user and prints the sequence ");
log_cyan("from the lowest to the highest number. Also, print the average value of the sequence.\n\n");

//Sample Output:
//
//Input two pairs values (integer values):
//14
//25
//
//Sequence from the lowest to highest number:
//14 15 16 17 18 19 20 21 22 23 24 25
//Average value of the said sequence
//    19.50
//Sample Output:
//
//Input two pairs values (integer values):
//35
//13
//
//Sequence from the lowest to highest number:
//13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35
//Average value of the said sequence
//    24.00

{	int sayi1 = 0, sayi2 = 0;
	int gecici1 = 0, gecici2 = 0;
	printf("Input two numbers (integer values):");
	scanf("%d %d", &gecici1, &gecici2);

	if (gecici1 > gecici2){
		sayi1 = gecici2;
		sayi2 = gecici1;
	}else{
		sayi1 = gecici1;
		sayi2 = gecici2;
	}

	for (int i = sayi1; i <= sayi2; i++) {
		printf("%d, ", i);
	}

	float average = (float)(sayi1 + sayi2 ) / 2;
	printf("\nAverage value of the said sequence : %.2f\n", average);
}

log_cyan("\n116. Write a C program that accepts a pair of numbers from the user and prints \"Ascending order\" ");
log_cyan("if the two numbers are in ascending order, otherwise prints, \"Descending order\".\n\n");

//Sample Output:
//
//Input two pairs values (integer values):
//12
//35
//Ascending order
//Sample Output:
//
//Input two pairs values (integer values):
//65
//25
//Descending order

{	int sayi1 = 0, sayi2 = 0;
	printf("Input two numbers (integer values):");
	scanf("%d %d", &sayi1, &sayi2);

	if (sayi1 < sayi2)
		printf("Ascending order\n");
	else if (sayi1 > sayi2)
		printf("Descending order\n");
}

log_cyan("\n117. Write a C program that reads two integers and divides the first number by second, ");
log_cyan("print the result of this division with two digits after the decimal point and prints “Division not possible..!” if the division is not possible.\n\n");

//Sample Output:
//
//Input two integer values:
//75
//5
//Result: 15.00

{	int sayi1 = 0, sayi2 = 0;
	printf("Input two numbers (integer values):");
	scanf("%d %d", &sayi1, &sayi2);

	if (sayi2 == 0)
		printf("Division not possible..!\n");
	else
		printf("Result : %.2f", (float)sayi1 / sayi2);
}

log_cyan("\n118. Write a C program that reads five subject marks (0-100) of a student and calculates the average of these marks.\n\n");

//Sample Output:
//
//Input five subject marks(0-100):
//75
//84
//56
//98
//68
//Average marks = 76.20

{	int eleman = 5;
	int mark[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input %d out of %d subject marks (0-100) : ", i + 1, eleman);
		scanf("%d", &mark[i]);
	}
	float average = 0;
	int toplam = 0;
	for (int j = 0; j < eleman; j++) {
		toplam += mark[j];
	}
	average = (float)toplam / eleman;
	printf("Average marks = %.2f", average);
}

log_cyan("\n119. Write a C program to calculate the sum of all numbers between two given numbers (inclusive) not divisible by 7.\n\n");

//Sample Output:
//
//Input two numbers(integer):
//25
//5
//Sum of all numbers between said numbers (inclusive) not divisible by 7:
//273
//Sample Output:
//
//Input two numbers(integer):
//6
//36
//Sum of all numbers between said numbers (inclusive) not divisible by 7:
//546

{	int sayi1 = 0, sayi2 = 0;
	int gecici1 = 0, gecici2 = 0;
	int toplam = 0;
	printf("Input two numbers (integer values):");
	scanf("%d %d", &gecici1, &gecici2);

	if (gecici1 > gecici2){
		sayi1 = gecici2;
		sayi2 = gecici1;
	}else{
		sayi1 = gecici1;
		sayi2 = gecici2;
	}

	for (int i = sayi1; i <= sayi2; i++) {
		if(i % 7 == 0)
			continue;
		toplam += i;
	}
	printf("Sum of all numbers between said numbers (inclusive) not divisible by 7 : %d", toplam);

}

log_cyan("\n120. Write a C program to print a sequence from 1 to a given (integer) number, inserting a comma between these numbers. ");
log_cyan("There will be no comma after the last character.\n\n");

//Sample Output:
//
//Input a number(integer):
//25
//Sequence:
//1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25

{	int sayi = 0;
	printf("Input a number (integer) : ");
	scanf("%d", &sayi);

	for (int i = 1; i < sayi; i++) {
		printf("%d, ", i);
	}
	printf("%d\n", sayi);
}

log_cyan("\n121. Write a C program that reads an integer and finds all the divisors of the said integer.\n\n");

//Sample Output:
//
//Input a number (integer value):
//35
//
//All positive divisors of 35
//1
//5
//7
//35

{	int sayi = 0;
	printf("Input a number (integer) : ");
	scanf("%d", &sayi);

	for (int i = 1; i < sayi /2 ; i++) {
		if (sayi % i == 0)
			printf("%d, ", i);
	}
	printf("%d\n", sayi);
}

log_cyan("\n122. Write a C program that reads two integers m, n and computes the sum of n even numbers starting from m.\n\n");

//Sample Output:
//
//Input two integes (m, n):
//20
//60
//
//Sum of 60 even numbers starting from 20:
//4740

{	int sayi[2];
	printf("Input 2 integers : ");
	scanf("%d %d", &sayi[0], &sayi[1]);

	sayi[0] = (sayi[0] % 2 == 1) ? sayi[0] + 1 : sayi[0];
	printf("Sum of %d even numbers starting from sayi : %d\n", sayi[1], ((sayi[0] + sayi[1] - 1) * sayi[1]));
}

log_cyan("\n123. Write a C program that reads two integers m, n and computes the sum of n odd numbers starting from m.\n\n");

//Sample Output:
//
//Input two integes (m, n):
//65
//5
//
//Sum of 5 odd numbers starting from 65:
//345

{	int sayi[2];
	printf("Input 2 integers : ");
	scanf("%d %d", &sayi[0], &sayi[1]);

	sayi[0] = (sayi[0] % 2 == 0) ? sayi[0] + 1 : sayi[0];
	printf("Sum of %d even numbers starting from sayi : %d\n", sayi[1], ((sayi[0] + sayi[1] - 1) * sayi[1]));
}

log_cyan("\n124. Write a C program that reads an array of integers (length 7), ");
log_cyan("replaces every negative or null element with 1 and prints the array elements.\n\n");

//Sample Output:
//
//Input 7 array elements:
//15
//12
//-7
//25
//0
//27
//53
//
//Array elements:
//array_nums[0] = 15
//array_nums[1] = 12
//array_nums[2] = 1
//array_nums[3] = 25
//array_nums[4] = 1
//array_nums[5] = 27
//array_nums[6] = 53

{	int eleman = 7;
	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input %d out of %d array element : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	for (int i = 0; i < eleman; i++) {
		if (dizi[i] <= 0)
			dizi[i] = 1;
		printf("array_nums[%d] = %d\n", i, dizi[i]);
	}
}

log_cyan("\n125. Write a C program that reads an array of integers (length 7), and replaces the first element of the array ");
log_cyan("by a given number and replaces each subsequent position of the array by the double value of the previous.\n\n");

//Sample Output:
//
//Input the first element of the array:
//5
//
//Array elements:
//array_nums[0] = 5
//array_nums[1] = 10
//array_nums[2] = 20
//array_nums[3] = 40
//array_nums[4] = 80
//array_nums[5] = 160
//array_nums[6] = 320

{	int eleman = 7;
	int dizi[eleman];
	int girdi = 0;
	printf("Input the first element of the array : ");
	scanf("%d", &girdi);

	for (int i = 0; i < eleman; i++){
		dizi[i] = girdi * pow(2, i);
		printf("array_nums[%d] = %d\n", i, dizi[i]);
	}
}

log_cyan("\n126. Write a C program that reads an array (length 7) and prints all array positions that store a value ");
log_cyan("less than or equal to 0.\n\n");

//Sample Output:
//
//Input 7 array elements:
//15
//23
//37
//65
//20
//-7
//65
//
//Array positions that store a value less or equal to 0:
//array_nums[5] = -7.0

{	int eleman = 7;
	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input %d out of %d array element : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	for (int i = 0; i < eleman; i++) {
		if (dizi[i] <= 0)
			printf("array_nums[%d] = %d\n", i, dizi[i]);
	}
}

log_cyan("\n127. Write a C program that reads an array of integers (length 8), replaces the 1st element with the 8th, ");
log_cyan("the 2nd with the 7th and so on. Print the final array.\n\n");

//Sample Output:
//
//Input 8 array elements:
//25
//35
//17
//-5
//29
//45
//60
//65
//
//Modified array:
//array_nums[0] = 65
//array_nums[1] = 60
//array_nums[2] = 45
//array_nums[3] = 29
//array_nums[4] = -5
//array_nums[5] = 17
//array_nums[6] = 35
//array_nums[7] = 25

{	int eleman = 8;
	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input %d out of %d array element : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	// Tamamlanmadı
}

log_cyan("\n128. Write a C program that reads an array of integers (length 10), ");
log_cyan("fills it with numbers from o to a (given number) n – 1 repeatedly, where 2 ≤ n ≤ 10.\n\n");

//Sample Output:
//
//Input an integer (2-10)
//8
//array_nums[0] = 0
//array_nums[1] = 1
//array_nums[2] = 2
//array_nums[3] = 3
//array_nums[4] = 4
//array_nums[5] = 5
//array_nums[6] = 6
//array_nums[7] = 7
//array_nums[8] = 0
//array_nums[9] = 1

{	int sayi = 0;
	while (sayi < 2 || sayi > 10){
		printf("Input an integer (2-10)\n");
		scanf("%d", &sayi);
	}

	int dizi[10];
	for (int i = 0; i < 10; i++) {
		dizi[i] = i % sayi;
		printf("array_nums[%d] = %d\n", i, dizi[i]);
	}
}

log_cyan("\n129. Write a C program that reads an array (length 10), and replaces the first element of the array by a given number ");
log_cyan("and replaces each subsequent position of the array by one-third the value of the previous.\n\n");

//Sample Output:
//
//Input a number:
//35
//
//Array elements:
//array_nums[0] = 35.0000
//array_nums[1] = 11.6667
//array_nums[2] = 3.8889
//array_nums[3] = 1.2963
//array_nums[4] = 0.4321
//array_nums[5] = 0.1440
//array_nums[6] = 0.0480
//array_nums[7] = 0.0160
//array_nums[8] = 0.0053
//array_nums[9] = 0.0018

{	int sayi = 0;
	printf("Input a number : \n");
	scanf("%d", &sayi);

	float dizi[10];
	for (int i = 0; i < 10; i++) {
		dizi[i] = (float)sayi / pow(3, i);
		printf("array_nums[%d] = %.4f\n", i, dizi[i]);
	}
}

log_cyan("\n130. Write a C program to create an array of length n and fill the array elements with integer values. ");
log_cyan("Find the smallest value and its position in the array.\n\n");

//Sample Output:
//
//Input the array size:
//5
//
//Input array elements:
//35
//17
//-5
//45
//36
//
//Smallest Value: -5
//Position within array: 2

{	int eleman = 0;
	printf("Input the array size:");
	scanf("%d", &eleman);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input %d out of %d array element : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	int min = dizi[0];
	int indeks = 0;

	for (int i = 1; i < eleman; i++)
		if (dizi[i] < min){
			min = dizi[i];
			indeks = i;
		}
	printf("Smallest Value : %d\nPosition       : %d\n", min, indeks + 1);
}

log_cyan("\n131.Write a C program that accepts two strings and checks ");
log_cyan("whether the second string is present in the last part of the first string.\n\n");

//Sample Output:
//
//Input the first string:
//abcdef
//Input the second string:
//ef
//Is second string present in the last part of the first string?
//Present!

{	char metin1[25];
	char metin2[25];
	printf("Input the first string:");
	scanf("%s", metin1);
	printf("Input the second string:");
	scanf("%s", metin2);

	char *fail = strstr(metin1, metin2);
	if (fail == NULL)
		printf("Not Present!!\n");
	else
		printf("Present!!\n");
}

log_cyan("\n132. Write a C program to find the heights of the top three buildings in descending order from eight given buildings.\n\n");

//Input:
//0 <= height of building (integer) <= 10,000
//Sample Output:
//
//Input heights(integer values) of the top eight buildings:
//25
//15
//45
//22
//35
//18
//95
//65
//
//Heights of the top three building:
//95
//65
//45

{	int eleman = 8;
	int height[eleman];
	printf("0 <= height of building (integer) <= 10,000\n");
	printf("Input heights (integer values) of the top eight buildings : ");
	for (int i = 0; i < eleman; i++) {
		scanf("%d", &height[i]);
	}
	for (int i = 0; i < eleman; i++)
		printf("%d ", height[i]);
	printf("\n");

	int temp = 0;
	for (int i = 0; i < eleman; i++) {
		for (int j = i + 1; j < eleman; j++) {
			if (height[i] < height[j]) {
				temp = height[i];
				height[i] = height[j];
				height[j] = temp;
			}
		}
	}

	int top = 3;
	printf("Heights of the top three building : \n");
	for (int i = 0; i < top; i++)
		printf("%d ", height[i]);
	printf("\n");
}

log_cyan("\n133. Write a C program to calculate the sum of two given integers and count the number of digits in the sum value.\n\n");

//Sample Output:
//
//Input two integer values:
//68
//75
//
//Number of digits of the sum value of the said numbers:
//3

{	int eleman = 2;
	int sayi[eleman];
	printf("Input two integer values : ");
	for (int i = 0; i < eleman; i++) {
		scanf("%d", &sayi[i]);
	}
	int toplam = 0;
	toplam = sayi[0] + sayi[1];
	printf("toplam : %d\n", toplam);
	int sayac = 0;
	while(toplam != 0){
		toplam /= 10;
		sayac++;
	}
	printf("Number of digits of the sum value of the said numbers : %d\n", sayac);
}

log_cyan("\n134. Write a C program to check whether the three given lengths (integers) of three sides of a triangle ");
log_cyan("form a right triangle or not. Print \"Yes\" if the given sides form a right triangle otherwise print \"No\".\n\n");

//Input:
//Integers separated by a single space.
//1 <= length of the side <= 1,000
//Sample Output:
//
//Input the three sides of a trainagel:
//12
//11
//13
//It is not a right angle triangle!

{	int eleman = 3;
	int kenar[eleman];
	printf("Input the three sides of a triangle: ");
	for (int i = 0; i < eleman; i++) {
		scanf("%d", &kenar[i]);
	}
	int temp = 0;
	for (int i = 0; i < eleman; i++) {
		for (int j = i + 1; j < eleman; j++) {
			if (kenar[i] < kenar[j]) {
				temp = kenar[i];
				kenar[i] = kenar[j];
				kenar[j] = temp;
			}
		}
	}

	if (pow(kenar[0], 2) == pow(kenar[1], 2) + pow(kenar[2], 2))
		printf("It is a right angle triangle!\n");
	else
		printf("It is not a right angle triangle!\n");
}

log_cyan("\n135. Write a C program that reads an integer n and finds the number of combinations of a, b, c and ");
log_cyan("d (0 ≤ a, b, c, d ≤ 9) where (a + b + c + d) will be equal to n.\n\n");

//Input:
//n (1 <= n <= 50)
//Sample Output:
//
//Input a number:
//5
//
//a + b + c + d = n
//0, 0, 0, 5
//0, 0, 1, 4
//....
//4, 0, 1, 0
//4, 1, 0, 0
//5, 0, 0, 0
//
//Total number of combinations:
//56

{	int sayi = 0, sayac = 0;

	printf("Bir tamsayı giriniz: ");
	scanf("%d", &sayi);

	printf("a + b + c + d = %d\n", sayi);

	for (int a = 0; a <= 9; ++a) {
		for (int b = 0; b <= 9; ++b) {
			for (int c = 0; c <= 9; ++c) {
				for (int d = 0; d <= 9; ++d) {
					if (a + b + c + d == sayi) {
						printf("%d + %d + %d + %d = %d\n", a, b, c, d, sayi);
						sayac++;
					}
				}
			}
		}
	}
	printf("Total number of combinations : %d\n", sayac);
}

log_cyan("\n136. Write a C program to find prime numbers that are less than or equal to a given integer.\n\n");

//Input:
//n (1 <= n <= 999,999)
//Sample Output:
//
//Input a number:
//123
//Number of prime numbers which are less than or equal to 123
//30

{	int sayi = 0;
	printf("Input a number (1 <= n <= 999,999) : ");
	scanf("%d", &sayi);

	int sayac = 0;
	for (int i = 2; i <= sayi; i++) {
		int flag = 0;

		for (int j = 2; j <= i / 2; j++) {
			if(i % j == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		sayac++;
	}
	printf("Number of prime numbers which are less than or equal to %d : %d\n", sayi, sayac);
}

log_cyan("\n137. Write a C program to check if a point (x, y) is within a triangle or not. Three points make up a triangle.\n\n");

//Input:
//x1,y1,x2,y2,x3,y3,xp,yp separated by a single space
//Sample Output:
//
//Input three points to form a triangle:
//x1 y1 z1
//
//Input the point to check it is inside the triangle or not:
//The point is outside the triangle!

{	int Ax = 1, Ay = 1; 	// A noktasının x ve y değerini Ax ve Ay
	int Bx = 2, By = 5;		// B noktasının x ve y değerini Bx ve By
	int Cx = 5, Cy = 4;		// C noktasının x ve y değerini Cx ve Cy
	int Px = 2, Py = 3;		// P noktasının x ve y değerini Px ve Py şeklinde ifade edelim.

	printf("Input three points to form a triangle : \n");
	printf("x1 & y1");
	scanf("%d %d", &Ax, &Ay);
	printf("x2 & y2");
	scanf("%d %d", &Bx, &By);
	printf("x3 & y3");
	scanf("%d %d", &Cx, &Cy);

	printf("Input the point to check it is inside the triangle or not : \n");
	printf("xp & yp");
	scanf("%d %d", &Px, &Py);

	// ara değerler:
	int bx = Bx - Ax;
	int by = By - Ay;
	int cx = Cx - Ax;
	int cy = Cy - Ay;
	int x = Px - Ax;
	int y = Py - Ay;

	// Şimdi bu değerler yardımıyla son dört değerimiz olan d,WA,WB ve WC’ yi hesaplamamız gerekiyor:

	int d = ((bx * cy) - (cx * by));
	float WA = (float)(x* (by - cy) + y * (cx - bx) + (bx * cy) - (cx * by)) / d;
	float WB = (float)((x * cy) - (y * cx)) / d;
	float WC = (float)((y * bx) - (x * by)) / d;
	printf("WA : %.2f\n", WA);
	printf("WB : %.2f\n", WB);
	printf("WC : %.2f\n", WC);

	if ((WA > 0 && WA < 1) && (WB > 0 && WB < 1) && (WC > 0 && WC < 1))
		printf("The point is inside the triangle!");
	else
		printf("The point is outside the triangle!");
}

log_cyan("\n138.Write a C program to test whether two lines are parallel or not. ");
log_cyan("The four points are P(x1, y1), Q(x2, y2), R(x3, y3) and S(x4, y4), check PQ and RS are parallel are not.\n\n");

//Input:
//−100 <= x1, y1, x2, y2, x3, y3, x4, y4 <= 100
//Each value is a real number with at most 5 digits after the decimal point.
//Sample Output:
//
//Input P(x1,y1):
//5
//7
//
//Input P(x2,y2):
//3
//6
//
//Input P(x3,y3):
//8
//9
//
//Input P(x4,y4):
//5
//6
//
//PQ and RS are not parallel!

{	int x1 = 0, y1 = 0;
	int x2 = 0, y2 = 0;
	int x3 = 0, y3 = 0;
	int x4 = 0, y4 = 0;

	printf("Input P(x1,y1) : ");
	scanf("%d %d", &x1, &y1);
	printf("Input P(x2,y2) : ");
	scanf("%d %d", &x2, &y2);
	printf("Input P(x3,y3) : ");
	scanf("%d %d", &x3, &y3);
	printf("Input P(x4,y4) : ");
	scanf("%d %d", &x4, &y4);

	if ((y1 - y2) / (x1 - x2) == (y3 - y4) / (x3 - x4))
		printf("PQ and RS are parallel!\n");
	else
		printf("PQ and RS are NOT parallel!\n");
}

log_cyan("\n139. Write a C program to find the maximum sum of a contiguous subsequence ");
log_cyan("from a given sequence of numbers a1, a2, a3, ... an ( n = number of terms in the sequence).\n\n");

//Input:
//You can assume that 1 <= n <= 500 and -10000 <= ai <= 10000.
//Sample Output:
//
//Input number of terms in the sequence:
//5
//
//Input the terms of the said sequence:
//3
//2
//6
//-7
//8
//Maximum sum of a contiguous subsequence:
//12

{

}

log_cyan("\n140. Write a C program that reads a sequence of integers and finds the element that occurs most frequently.\n\n");

//Sample Output:
//
//
//Input the terms of the sequence:
//5
//2
//4
//6
//8
//10
//^Z
//Mode values of the said sequence in ascending order:
//2
//4
//5
//6
//8
//10

{

}

log_cyan("\n141. Write a C program that reads n digits (given) chosen from 0 to 9 and prints the number of combinations ");
log_cyan("where the sum of the digits equals another given number (s). Do not use the same digits in a combination.\n\n");

//For example, the combinations where n = 3 and s = 6 are as follows:
//1 + 2 + 3 = 6
//0 + 1 + 5 = 6
//0 + 2 + 4 = 6
//Sample Output:
//
//Input the number:
//3
//
//Sum of the digits:
//6
//Number of combinations: 3

{

}

log_cyan("\n142. Write a C program that reads the two adjoining sides and the diagonal of a parallelogram and ");
log_cyan("checks whether the parallelogram is a rectangle or a rhombus.\n\n");

//Input:
//Two adjoined sides and the diagonal.
//1 <= ai, bi, ci <= 1000, ai + bi > ci
//Sample Output:
//
//Input two adjoined sides of the parallelogram:
//3
//4
//
//Input the diagonal of the parallelogram:
//5
//
//This is a rectangle.
//Sample Output:
//
//Input two adjoined sides of the parallelogram:
//5
//5
//
//Input the diagonal of the parallelogram:
//7
//
//This is a rhombus.

{

}

log_cyan("\n143. Write a C program to find the difference between the largest integer and the smallest integer, ");
log_cyan("which are created by 8 numbers from 0 to 9. The number that can be rearranged shall start with 0 as in 00135668.\n\n");

//Input:
//Data is a sequence of 8 numbers (digits from 0 to 9).
//Output:
//The difference between the largest integer and the smallest integer.
//Sample Output:
//
//Input an integer created by 8 numbers (0 to 9):
//25346879
//
//The difference between the largest integer and the smallest integer.
//98765432 - 23456789 = 75308643

{

}

log_cyan("\n144. Write a C program to create the maximum number of regions obtained by drawing n given straight lines.\n\n");

//Input:
//(1 ≤ n ≤ 10,000).
//Sample Output:
//
//Input number of straight lines:
//2
//Maximum number of regions obtained by drawing 2 given straight lines:
//4

{

}

log_cyan("\n145. Write a C program to sum all numerical values (positive integers) embedded in a sentence.\n\n");

//Input:
//Sentences with positive integers are given over multiple lines. Each line is a character string containing one-byte alphanumeric characters, symbols, spaces, or an empty line. However the input is 80 characters or less per line and the sum is 10,000 or less.
//Sample Output:
//
//Input Sentences with positive integers:
//5littleJackand2mouse.
//
//Sum of all numerical values embedded in a sentence:
//7

{

}

log_cyan("\n146. Write a C program to extract words of 3 to 6 characters length from a given sentence not more than 1024 characters.\n\n");

//Input:
//English sentences consisting of delimiters and alphanumeric characters are given on one line.
//Sample Output:
//
//English sentences consisting of delimiters and alphanumeric characters on one line:
//w3resource.com
//
//Extract words of 3 to 6 characters length from the said sentence:
//com

{

}

log_cyan("\n147. Write a C program to find the number of combinations that satisfy p + q + r + s = n ");
log_cyan("where n is a given number <= 4000 and p, q, r, s are between 0 and 1000.\n\n");

//Sample Output:
//
//Input a positive integer:
//25
//
//Number of combinations of p,q,r,s:
//3276

{

}

log_cyan("\n148. Write a C program, which adds up columns and rows of given table as shown in the following figure.\n\n");

//Input:
//n (the size of row and column of the given table)
//1st row of the table
//2nd row of the table
//:
//:
//n th row of the table
//The input ends with a line consisting of a single 0.
//Sample Output:
//
//Input number of rows/columns:
//4
//Input the cell value
//
//Row 0 input cell values
//25
//69
//51
//26
//
//Row 1 input cell values
//68
//35
//29
//54
//
//Row 2 input cell values
//54
//57
//45
//63
//
//Row 3 input cell values
//61
//68
//47
//59
//
//Result:
//   25   69   51   26  171
//   68   35   29   54  186
//   54   57   45   63  219
//   61   68   47   59  235
//  208  229  172  202  811

{

}

log_cyan("\n149. Write a C program that reads a list of pairs of a word and a page number, and ");
log_cyan("prints the word and a list of the corresponding page numbers.\n\n");

//Input:
//word page_number
//Output:
//word
//a_list_of_the_page_number
//word
//a_list_of_the_Page_number.
//Sample Output:
//
//Input pairs of a word and a page_no number:
//Twinkle
//65
//Twinkle
//55
//Little
//25
//Star
//35
//^Z
//
//Word and page_no number in alphabetical order:
//Little
//25
//Star
//35
//Twinkle
//55 65

{

}

log_cyan("\n150. Write a C program that reads an expression and evaluates it.\n\n");

//Input:
//4
//10-2*3=
//8*(8+2-5)=
//Sample Output:
//
//Input an expression using +, -, *, / operators:
//1+6*8-4/2
//47
//Sample Output:
//
//Input an expression using +, -, *, / operators:
//25/5-6*7+2
//-35
//Sample Output:
//
//Input an expression using +, -, *, / operators:
//9+6+(5*2)-5
//20

{

}



	return 0;
}
