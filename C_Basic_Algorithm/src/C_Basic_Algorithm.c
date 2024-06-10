/*
 ========================================================================
 Name        :	C_Basic_Algorithm.c
 Author      :	Emre Yasin Albayrak
 Version     :
 Copyright   :	Your copyright notice
 Description : 	C Basic Algorithm: Exercises, Practice, Solution
				C Programming Basic Algorithm [75 exercises with solution]
 =========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "print.h"

//enum Boolean{
//  FALSE,
//  TRUE
//}bool;

int main(void) {

log_green("\n1. Write a C program to compute the sum of the two input values. If the two values are the same, ");
log_green("then return triple their sum.\n\n");

//Expected Output:
//3
//12

{	int a = 0, b = 0;
	printf("İki adet sayı girin : ");
	scanf("%d %d", &a, &b);

	int sonuc = a == b ? a * 3 : a + b;
	printf("İki sayını toplamı (sayılar eşitse 3 katı) : %d\n", sonuc);
}

log_green("\n2. Write a C program that will take a number as input and find the absolute difference between the input number and 51. ");
log_green("If the input number is greater than 51, it will return triple the absolute difference.\n\n");

//Expected Output:
//6
//21
//0

{	int sayi = 0;
	printf("Bir adet sayı girin : ");
	scanf("%d", &sayi);
	if (sayi < 51)
		printf("Girilen sayı 51'den küçük ve aradaki fark : %d\n", 51 - sayi);
	else if (sayi > 51)
		printf("Girilen sayı 51'den büyük ve aradaki farkın 3 katı : %d\n", 3 * ( sayi - 51));
	else
		printf("Girilen sayı 51 olduğundan fark sıfırdır.\n");
}


log_green("\n3. Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. ");
log_green("In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.\n\n");

//Expected Output:
//1
//1
//0

{	int a = 0, b = 0;
	printf("İki adet sayı girin : ");
	scanf("%d %d", &a, &b);

	if ( a == 30 && b == 30){
		printf("Girilen iki sayı da 30\n");
		printf("TRUE\n");
	}
	else if ( a == 30 || b == 30){
		printf("Girilen iki sayıdan biri 30\n");
		printf("TRUE\n");
	}
	else if (a + b == 30){
		printf("Girilen iki sayının toplamı 30\n");
		printf("TRUE\n");
	}
	else
		printf("FALSE\n");
}

log_green("\n4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200.\n\n");

//Expected Output:
//1
//1
//0

{	int sayi = 0;
	printf("Bir adet sayı girin : ");
	scanf("%d", &sayi);

	if (abs(100 - sayi) == 10 || abs(200 - sayi) == 10)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n5. Write a C program that checks if a positive integer is divisible by either 3 or 7, or both. ");
log_green("If the integer is a multiple of 3, then the program will return true. Similarly, ");
log_green("if the integer is a multiple of 7, then also the program will return true. ");
log_green("If the integer is not a multiple of 3 or 7, then the program will return false.\n\n");

//Expected Output:
//1
//1
//1
//0

{	int sayi = 0;
	printf("Bir adet sayı girin : ");
	scanf("%d", &sayi);

	if (sayi % 21 == 0){
		printf("Girilen sayı hem 3 hem de 7 ile tam bölünebilir.\n");
		printf("TRUE\n");
	}
	else if (sayi % 3 == 0){
		printf("Girilen sayı 3 ile tam bölünebilir.\n");
		printf("TRUE\n");
	}
	else if (sayi % 7 == 0){
		printf("Girilen sayı 7 ile tam bölünebilir.\n");
		printf("TRUE\n");
	}
	else
		printf("FALSE\n");
}

log_green("\n6. Write a C program that checks two given temperatures and returns true if one temperature is less than 0 ");
log_green("and the other is greater than 100, otherwise it returns false.\n\n");

//Expected Output:
//1
//1
//0

{	int a = 0, b = 0;
	printf("İki adet sıcaklık girin : ");
	scanf("%d %d", &a, &b);

	if (a < 0 && b > 100)
		printf("TRUE\n");
	else if (b < 0 && a > 100)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n7. Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.\n\n");

//Expected Output:
//1
//0
//1

{	int a = 0, b = 0;
	printf("İki adet sayı girin : ");
	scanf("%d %d", &a, &b);

	if (a >= 100 && a <= 200)
		printf("TRUE\n");
	else if (b >= 100 && b <= 200)
		printf("TRUE\n");
	else
	printf("FALSE\n");
}

log_green("\n8. Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and ");
log_green("returns true if at least one of them is within the range. If none of the integers are within the range, ");
log_green("the program returns false.\n\n");

//Expected Output:
//1
//1
//1
//0

{	int a = 0, b = 0, c = 0;
	printf("Üç adet sayı girin : ");
	scanf("%d %d %d", &a, &b, &c);
	a = (a >= 20 && a <= 50);
	b = (b >= 20 && b <= 50);
	c = (c >= 20 && c <= 50);

	if (a || b || c)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n9. Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and ");
log_green("returns true if at least one of them is within the range. If none of the integers are within the range, ");
log_green("the program returns false.\n\n");

//Expected Output:
//1
//1
//1
//0

	printf("8. soru ile aynı\n");

log_green("\n10. Write a C program to check which number is nearest to the value 100 among two given integers. ");
log_green("Return 0 if the two numbers are equal.\n\n");

//Expected Output:
//95
//0
//99

{	int a = 0, b = 0;
	printf("İki adet sayı girin : ");
	scanf("%d %d", &a, &b);

	if (abs(100 - a) < abs(100 - b))
		printf("100'e en yakın sayı : %d\n", a);
	else
		printf("100'e en yakın sayı : %d\n", b);
}

log_green("\n11. Write a C program that checks if two given integers are in the range of 40 to 50 inclusive, ");
log_green("or if they are both in the range of 50 to 60 inclusive.\n\n");

//Expected Output:
//0
//0
//1
//1

{	int a = 0, b = 0;
	int alt = 40;
	int ust = 50;
	printf("Üç adet sayı girin : ");
	scanf("%d %d", &a, &b);
	a = (a >= alt && a <= ust);
	b = (b >= alt && b <= ust);

	if (a || b)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n12. Write a C program that takes two positive integer values as input and checks if either of them is in the range of 20 to 30 (inclusive). ");
log_green("If at least one number falls in this range, the program returns the larger value. Otherwise, it returns 0.\n\n");

//Expected Output:
//0
//30
//25
//28

{	int a = 0, b = 0;
	int alt = 20;
	int ust = 30;
	printf("İki adet sayı girin : ");
	scanf("%d %d", &a, &b);
	a = (a >= alt && a <= ust);
	b = (b >= alt && b <= ust);

	if (a || b)
		printf("%d\n", (a > b ? a : b));
	else
		printf("0\n");
}

log_green("\n13. Write a C program to check if two given non-negative integers have the same last digit.\n\n");

//Expected Output:
//0
//1
//1
//0

{	int a = 0, b = 0;
	do {
		printf("İki adet sayı girin : ");
		scanf("%d %d", &a, &b);
	}while (a < 0 || b < 0);

	if (a % 10 == b % 10)
		printf("iki sayının birler basamağı eşit\n");
	else
		printf("iki sayının birler basamağı eşit değil\n");
}

log_green("\n14. Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 10;
	int dizi[eleman];
	bool varYok = false;

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	for (int j = 0; j < eleman - 2; j++) {
		if (dizi[j] == 1 && dizi[j + 1] == 2 && dizi[j + 2] == 3)
			varYok = true;
	}

	if (varYok)
		printf("TRUE\n");
	else
	    printf("FALSE\n");
}

log_green("\n15. Write a C program to count the number of 5's adjacent to each other in an array of integers. ");
log_green("Consider the situation where the second 5 is actually a 6.\n\n");

//Expected Output:
//1
//2
//1

{	int eleman = 10;
	int dizi[eleman];

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int arr[eleman];

	int count;
	for (int i = 0; i < eleman; i++) {
		count = 0;
		if (dizi[i] == 5)
			count++;
		else {
			arr[i] = 0;
			continue;
		}
		if (dizi[i + 1] == 5 || dizi[i + 1] == 6){
			count++;
			for (int j = i + 2; j < eleman; j++) {
				if (dizi[j] == 5)
					count++;
				else
					break;
			}
		}
		arr[i] = count;
	}
	printf("Array Elements : ");
	for (int i = 0; i < eleman; i++) {
		printf("%d ", arr[i]);
	}

	int maks = arr[0];
	for (int k = 1; k < eleman; k++) {
		if (arr[k] > maks)
			maks = arr[k];
	}
	printf("\nlen of subArray : %d\n", maks);
}

log_green("\n16. Write a C program to check if a triple is present in an array of integers or not. ");
log_green("If a value appears three times in a row in an array it is called a triple.\n\n");

//Expected Output:
//0
//0
//1

{	int eleman = 10;
	int dizi[eleman];

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	int count;
	for (int i = 0; i < eleman; i++) {
		count = 1;
		for (int j = i + 1; j < eleman; j++) {
			if(dizi[j] == dizi[i])
				count++;
		}
		printf("%d elemanından %d adet var.\n", dizi[i], count);
		if (count == 3)
			printf("%d is triple.\n", dizi[i]);
	}
}



log_green("\n17. Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.\n\n");

//Expected Output:
//29
//30
//39
//30

{	int a = 0, b = 0;
	int alt = 10, ust = 20;
	printf("İki sayı girin : ");
	scanf("%d %d", &a, &b);

	int toplam = a + b;

	if (toplam >= alt && toplam <= ust)
		printf("toplam : %d\n", 30);
	else
		printf("toplam : %d\n", toplam);
}


log_green("\n18. Write a C program that accepts two integers and checks whether either one of them is 5 or their sum or difference is 5. ");
log_green("If any of these conditions are met, the program returns true. Otherwise, it returns false.\n\n");

//Expected Output:
//1
//0
//1

{	int a = 0, b = 0;
	printf("İki sayı girin : ");
	scanf("%d %d", &a, &b);

	int fark = abs(a - b);
	int toplam = a + b;

	if (a == 5 || b == 5 || fark == 5 || toplam == 5)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n19. Write a C program that checks if a given non-negative integer is a multiple of 13 or one more than a multiple of 13. ");
log_green("For example, if the given integer is 26 or 27, the program will return true, but if it is 25 or 28, ");
log_green("the program will return false.\n\n");

//Expected Output:
//1
//1
//1
//0

{	int sayi = 0;
	do{
		printf("Bir sayı girin : ");
		scanf("%d", &sayi);
	}while(sayi < 0);


	if ( sayi % 13 == 0 || sayi % 13 == 1)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}


log_green("\n20. Write a C program that checks if a given non-negative number is a multiple of 3 or 7, but not both.\n\n");

//Expected Output:
//1
//1
//0

{	int sayi = 0;
	do{
		printf("Bir sayı girin : ");
		scanf("%d", &sayi);
	}while(sayi < 0);

	if (sayi % 21 == 0)
		printf("FALSE\n");
	else {
		if ( sayi % 3 == 0 || sayi % 7 == 0)
			printf("TRUE\n");
		else
			printf("FALSE\n");
	}
}

log_green("\n21. Write a C program to check whether a given number is within 2 of a multiple of 10.\n\n");

//Expected Output:
//0
//0
//1
//1

{	int sayi = 0;
	do{
		printf("Bir sayı girin : ");
		scanf("%d", &sayi);
	}while(sayi < 0);

	if (sayi % 10 <= 2 || sayi % 10 >= 8)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n22. Write a C program to compute the sum of the two given integers. ");
log_green("Return 18 if one of the integer values given is in the range 10..20 inclusive.\n\n");

//Expected Output:
//10
//18
//18
//241

{	int a = 0, b = 0;
	int alt = 10, ust = 20;
	printf("İki sayı girin : ");
	scanf("%d %d", &a, &b);

	int toplam = a + b;

	if ((a >= alt && a <= ust) || (b >= alt && b <= ust) )
		printf("18\n");
	else
		printf("Toplam : %d\n", toplam);
}

log_green("\n23. Write a C program to check whether it is possible to add two integers to get the third integer ");
log_green("from three given integers.\n\n");

//Expected Output:
//1
//0
//1

{	int a = 0, b = 0, c = 0;
	printf("Üç sayı girin : ");
	scanf("%d %d %d", &a, &b, &c);

	if ( a == b + c || b == a + c || c == a + b)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}


log_green("\n24. Write a C program that checks if y is greater than x and z is greater than y, given three integers x, y, and z. ");
log_green("If both conditions are true, the program returns true. Otherwise, it returns false.\n\n");

//Expected Output:
//1
//1
//0

{	int x = 0, y = 0, z = 0;
	printf("Üç sayı girin : ");
	scanf("%d %d %d", &x, &y, &z);

	if ( y > x && z > y)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n25. Write a C program to check if two or more nonnegative integers have the same rightmost digit.\n\n");

//Expected Output
//1
//1
//0

{	int eleman = 0;
    do {
        printf("dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman);
	}while(eleman < 2);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int count = 0;
	for (int j = 1; j < eleman; j++) {
		if (dizi[0] % 10 == dizi[j] % 10)
			count++;
	}

	printf("eleman : %d\ncount : %d\n", eleman, count);

	if (count == eleman -1 )
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n26. Write a C program to check three given integers and return true if one of them is 20 or ");
log_green("more and less than one of the others.\n\n");

//Expected Output:
//1
//1
//0

{	int a = 0, b = 0, c = 0;
	printf("Üç sayı girin : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= 20 && ( a < b || a < c))
		printf("TRUE\n");
	else if ( b >= 20 && ( b < a || b < c))
		printf("TRUE\n");
	else if ( c >= 20 && ( c < a || c < b))
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n27. Write a C program to find the larger of two given integers. ");
log_green("However if the two integers have the same remainder when divided by 5, choose the smaller integer. ");
log_green("If the two integers are the same, return 0.\n\n");

//Expected Output:
//11
//20
//0

{	int a = 0, b = 0;
	printf("İki sayı girin : ");
	scanf("%d %d", &a, &b);

	int buyuk = (a > b) ? a : b;
	int kucuk = (a < b) ? a : b;
	if (a == b)
		printf("ZERO\n");
	else if (a % 5 == b % 5)
		printf("%d\n", kucuk);
	else
		printf("%d\n", buyuk);
}


log_green("\n28. Write a C program to check two given integers. Each integer is in the range 10..99. ");
log_green("Return true if a digit appears in both numbers, such as the 3 in 13 and 33.\n\n");

//Expected Output:
//1
//0
//1

{	int a = 0, b = 0;
	do {
		printf("İki sayı girin : ");
		scanf("%d %d", &a, &b);
	}while(a < 10 || a > 99 || b < 10 || b > 99);

	int a_Birlik = a % 10;
	int a_Onluk  = a / 10;
	int b_Birlik = b % 10;
	int b_Onluk  = b / 10;

	if ( a_Birlik == b_Birlik)
		printf("Birinci sayının birler basamağı ile, ikinci sayının birler basamağı aynı.\n");
	if ( a_Birlik == b_Onluk )
		printf("Birinci sayının birler basamağı ile, ikinci sayının onlar basamağı aynı.\n");
	if ( a_Onluk  == b_Birlik)
		printf("Birinci sayının onlar basamağı ile, ikinci sayının birler basamağı aynı.\n");
	if ( a_Onluk  == b_Onluk )
		printf("Birinci sayının onlar basamağı ile, ikinci sayının onlar basamağı aynı.\n");
}

log_green("\n29. Write a C program to compute the sum of three given integers. Return the third value if the two values are the same.\n\n");

//Expected Output:
//16
//23
//12
//18

{	int a = 0, b = 0, c = 0;
	printf("Üç sayı girin : ");
	scanf("%d %d %d", &a, &b, &c);

	int toplam = a + b + c;

	if (a == b)
		printf("%d\n", c);
	else if (a == c)
		printf("%d\n", b);
	else if (b == c)
		printf("%d\n", a);
	else
		printf("Toplam : %d", toplam);
}

log_green("\n30. Write a C program to compute the sum of the three integers. Do not count a value that is 13 and add it to the sum.\n\n");

//Expected Output:
//16
//23
//10
//0

{	int eleman = 3;
	int sayi[eleman];
	int toplam;

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &sayi[i]);
		toplam += sayi[i];
		if (sayi[i] == 13)
			i--;
	}
	printf("Toplam : %d\n", toplam);
}

log_green("\n31. Write a C program to compute the sum of the three given integers with some exceptions. ");
log_green("If any of the values is in the range 10..20 inclusive, then that value will be considered as 0, except for 13 and 17.\n\n");

//Expected Output:
//16
//11
//13
//13

{	int a = 0, b = 0, c = 0;
	printf("Üç sayı girin : ");
	scanf("%d %d %d", &a, &b, &c);

	int toplam = a + b + c;

	if (a >=10 && a <= 20 && a != 13 && a != 17 )
		printf("ZERO\n");
	else if (b >=10 && b <= 20 && b != 13 && b != 17 )
		printf("ZERO\n");
	else if (c >=10 &&c <= 20 && c != 13 && c != 17 )
		printf("ZERO\n");
	else
		printf("Toplam : %d\n", toplam);
}

log_green("\n32. Write a C program to check two given integers and return the one nearest to 13 without crossing over. ");
log_green("Return 0 if both numbers go over.\n\n");

//Expected Output:
//5
//12
//13
//0

{	int a = 0, b = 0;
	printf("İki sayı girin : ");
	scanf("%d %d", &a, &b);

	int buyuk = (a > b) ? a : b;
	int kucuk = (a < b) ? a : b;
	if (buyuk > 13 && kucuk > 13)
		printf("ZERO\n");
	else if (buyuk > 13 && kucuk <= 13)
		printf("%d\n", kucuk);
	else
		printf("%d\n", buyuk);
}

log_green("\n33. Write a C program to check three given integers (small, medium and large) and ");
log_green("return true if the difference between small and medium and the difference between medium and large is the same.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman =3;
	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int gecici = 0;
	for (int i = 0; i < eleman; ++i){
		for (int j = i + 1; j < eleman; ++j){
			if (dizi[i] > dizi[j]){
				gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}
	}

	if ( dizi[2] - dizi[1] == dizi[1] - dizi[0])
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n34. Write a C program to check a given array of integers of length 1 or more. ");
log_green("Return true if the first element and the last element in the array are equal.\n\n");

//Expected Output:
//1
//0
//0

{	int eleman = 0;
    do {
        printf("dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman);
	}while(eleman < 1);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int ilk = dizi[0];
	int son = dizi[eleman];

	if (ilk == son )
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n35. Write a C program to check two given arrays of integers of length 1 or more. ");
log_green("Return true if they have the same first element or if they have the same last element.\n\n");

//Expected Output:
//1
//0

{	int eleman1 = 0;
    do {
        printf("1. dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman1);
	}while(eleman1 < 1);

	int dizi1[eleman1];
	for (int i = 0; i < eleman1; i++) {
		printf("Input the %d/%d. members of the 1st array : ", i + 1, eleman1);
		scanf("%d", &dizi1[i]);
	}

	int eleman2 = 0;
	    do {
	        printf("2. dizinin eleman sayısını girin : ");
		    scanf("%d", &eleman2);
		}while(eleman2 < 1);

		int dizi2[eleman2];
		for (int i = 0; i < eleman2; i++) {
			printf("Input the %d/%d. members of the 2nd array : ", i + 1, eleman2);
			scanf("%d", &dizi2[i]);
		}

	int ilk1 = dizi1[0];
	int son1 = dizi1[eleman1];
	int ilk2 = dizi2[0];
	int son2 = dizi2[eleman2];

	if (ilk1 == ilk2 || son1 == son2 )
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n36. Write a C program to compute the sum of the elements of an array of integers.\n\n");

//Expected Output:
//150
//10

{	int eleman = 0;
    do {
        printf("dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman);
	}while(eleman < 1);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int toplam = 0;
	for (int i = 0; i < eleman; i++) {
		toplam += dizi[i];
	}
	printf("toplam : %d", toplam);
}

log_green("\n37. Write a C program to rotate the elements of a given array of integers (length 4 ) in the left direction and ");
log_green("return the updated array.\n\n");

//Expected Output:
//Elements in original array are : 10, 20, 30, 40
//Elements in new array are      : 20, 30, 40, 10

{	int eleman = 4;

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int reverseArray[eleman];
	for (int i = 0; i < eleman; i++) {
		reverseArray[i] = dizi[eleman - i -1];
	}

	printf("\nElements in original array are : ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("\nElements in new array are      : ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", reverseArray[i]);
	printf("\n");
}

log_green("\n38. Write a C program to reverse a given array of integers of length 5.\n\n");

//Expected Output:
//Elements in original array are : 10, 20, 30, 40, 50
//Elements in reverse array are  : 50, 40, 30, 20, 10

//37. soru ile aynı kod.
//sadece eleman değişkenine 5 değeri atandı.

{	int eleman = 5;

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int reverseArray[eleman];
	for (int i = 0; i < eleman; i++) {
		reverseArray[i] = dizi[eleman - i -1];
	}

	printf("\nElements in original array are : ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("\nElements in new array are      : ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", reverseArray[i]);
	printf("\n");
}

log_green("\n39. Write a C program to create a new array containing the middle elements from the two given arrays of integers, ");
log_green("each of length 5.\n\n");

//Expected Output:
//Elements in original array1 are :	10, 20, -30, -40, 30
//									10, 20, 30, 40, 30
//Elements in new array are       : -30, 30

{	int eleman1 = 5;
//  do {
//      printf("1. dizinin eleman sayısını girin : ");
//	    scanf("%d", &eleman1);
//	}while(eleman1 < 1);

	int dizi1[eleman1];
	for (int i = 0; i < eleman1; i++) {
		printf("Input the %d/%d. members of the 1st array : ", i + 1, eleman1);
		scanf("%d", &dizi1[i]);
	}

	int eleman2 = 5;
//	do {
//		printf("2. dizinin eleman sayısını girin : ");
//		scanf("%d", &eleman2);
//	}while(eleman2 < 1);

	int dizi2[eleman2];
	for (int i = 0; i < eleman2; i++) {
		printf("Input the %d/%d. members of the 2nd array : ", i + 1, eleman2);
		scanf("%d", &dizi2[i]);
	}

	printf("Elements in original array1 are : ");
	for (int i = 0; i < eleman1; i++) {
		printf("%d ", dizi1[i]);
	}
	printf("\n");

	printf("Elements in original array1 are : ");
	for (int i = 0; i < eleman2; i++) {
		printf("%d ", dizi2[i]);
	}
	printf("\n");

	int yeniDizi[2] = { dizi1[2], dizi2[2] };
	printf("Elements in new array are       : ");

	for (int i = 0; i < 2; i++) {
		printf("%d ", yeniDizi[i]);
	}
	printf("\n");
}

log_green("\n40. Write a C program to create a new array taking the first and last elements of a given array of integers and ");
log_green("length one or more.\n\n");

//Expected Output:
//Elements in original array are : 10, 20, 30, 40, 50
//Elements in new array are      : 10, 50

{	int eleman = 0;
    do {
        printf("Dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman);
	}while(eleman < 1);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int yeniDizi[2] = { dizi[0], dizi[eleman - 1] };

	printf("\nElements in original array are : ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("\nElements in new array are      : ");
	for (int i = 0; i < 2; i++)
		printf("%d ", yeniDizi[i]);
	printf("\n");
}

log_green("\n41. Write a C program to check whether an array of integers with a length of 2 contains 15 or 20.\n\n");

//Expected Output:
//1
//1
//0

{	int dizi[2];
	printf("Dizinin birinci elemanını girin : ");
	scanf("%d", &dizi[0]);
	printf("Dizinin ikinci elemanını girin  : ");
	scanf("%d", &dizi[1]);

	printf("Dizinin elemanları : {%d, %d}\n", dizi[0], dizi[1]);

	if (dizi[0] == 15 || dizi[1] == 15)
		printf("Dizi 15 sayısını içermektedir.\n");
	else if (dizi[0] == 20 || dizi[1] == 20)
		printf("Dizi 20 sayısını içermektedir.\n");
	else
		printf("Dizi 15 ya da 20 sayısını içermemektedir.\n");
}

log_green("\n42. Write a C program to check if an array of integers with length 2 does not contain 15 or 20.\n\n");

//Expected Output:
//0
//0
//1

{	int dizi[2];
	printf("Dizinin birinci elemanını girin : ");
	scanf("%d", &dizi[0]);
	printf("Dizinin ikinci elemanını girin  : ");
	scanf("%d", &dizi[1]);

	printf("Dizinin elemanları : {%d, %d}\n", dizi[0], dizi[1]);

	if (dizi[0] != 15 && dizi[1] != 15)
		printf("Dizi 15 sayısını içermemektedir.\n");
	if (dizi[0] != 20 && dizi[1] != 20)
		printf("Dizi 20 sayısını içermemektedir.\n");
}

log_green("\n43. Write a C program to check a given array of integers and return true if the array contains 10 or 20 twice. ");
log_green("The length of the array will be 0, 1, or 2.\n\n");

//Expected Output:
//0
//1
//0

{	int eleman = 0;
    do {
        printf("Dizinin eleman sayısını girin : (0, 1 veya 2)");
	    scanf("%d", &eleman);
	}while(eleman > 2 || eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	if (eleman == 0)
		printf("FALSE\n");
	else if (eleman == 1)
		printf("FALSE\n");
	else if (eleman ==2){
		if (dizi[0] == 10 && dizi[1] == 10)
			printf("TRUE\n");
		else if (dizi[0] == 20 && dizi[1] == 20)
			printf("TRUE\n");
		else
			printf("FALSE\n");
	}
}

log_green("\n44. Write a C program to check a given array of integers of length 3 and create a  new array. ");
log_green("If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.\n\n");

//Expected Output:
//Elements in original array are : 1, 5, 7
//Elements in new array are      : 1, 5, 1

{	int eleman = 0;
    do {
        printf("Dizinin eleman sayısını girin : ");
	    scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	printf("Elements in original array are : { ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("}\n");

	for (int j = 0; j < eleman - 1; j++) {
		if (dizi[j] != 5)
			continue;
		else{
			if (dizi[j + 1] != 7)
				continue;
			else
				dizi[j + 1] = 1;
		}

	}
	printf("Elements in new array are      : { ");
	for (int k = 0; k < eleman; k++)
		printf("%d ", dizi[k]);
	printf("}\n");

}

log_green("\n45. Write a C program to compute the sum of the two given arrays of integers, ");
log_green("length 3 and find the array that has the largest sum.\n\n");

//Expected Output:
//Elements in original array are       : 10, 20, -30
//Elements in original array are       : 10, 20, 30
//The array which has the largest sum. : 10, 20, 30

{	int eleman1 = 3;
//  do {
//      printf("1. dizinin eleman sayısını girin : ");
//	    scanf("%d", &eleman1);
//	}while(eleman1 < 1);

	int dizi1[eleman1];
	for (int i = 0; i < eleman1; i++) {
		printf("Input the %d/%d. members of the 1st array : ", i + 1, eleman1);
		scanf("%d", &dizi1[i]);
	}

	int eleman2 = 3;
//	do {
//		printf("2. dizinin eleman sayısını girin : ");
//		scanf("%d", &eleman2);
//	}while(eleman2 < 1);

	int dizi2[eleman2];
	for (int i = 0; i < eleman2; i++) {
		printf("Input the %d/%d. members of the 2nd array : ", i + 1, eleman2);
		scanf("%d", &dizi2[i]);
	}

	printf("Elements in original array1 are      : { ");
	for (int i = 0; i < eleman1; i++)
		printf("%d ", dizi1[i]);
	printf("}\n");

	printf("Elements in original array2 are      : { ");
	for (int i = 0; i < eleman2; i++)
		printf("%d ", dizi2[i]);
	printf("}\n");

	int toplam1 = 0;
	for (int j = 0; j < eleman1; j++)
		toplam1 += dizi1[j];

	int toplam2 = 0;
	for (int j = 0; j < eleman2; j++)
		toplam2 += dizi2[j];

	printf("The array which has the largest sum. : { ");
	if (toplam1 > toplam2){
		for (int i = 0; i < eleman1; i++)
			printf("%d ", dizi1[i]);
	}else{
		for (int i = 0; i < eleman2; i++)
			printf("%d ", dizi2[i]);
	}
	printf("}\n");
}

log_green("\n46. Write a C program to create an array taking two middle elements from a given array of integers of length even.\n\n");

//Expected Output:
//Elements in original array are : 1, 5, 7, 9, 11, 13
//                     New array : 7, 9

{	int eleman = 0;
	do {
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman % 2 == 1);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int yeniDizi[2];
	yeniDizi[0] = dizi[eleman / 2 - 1];
	yeniDizi[1] = dizi[eleman / 2 ];

	printf("Elements in original array are : { ");
	for (int j = 0; j < eleman; j++)
		printf("%d ", dizi[j]);
	printf("}\n");

	printf("                     New array : { ");
	for (int j = 0; j < 2; j++)
		printf("%d ", yeniDizi[j]);
	printf("}\n");
}

log_green("\n47. Write a C program to create a new array from two given arrays of integers, each of length 3.\n\n");

//Expected Output:
//Elements in original array1 are : 10, 20, 30
//Elements in original array2 are : 40, 50, 60
//                      New array : 10, 20, 30, 40, 50, 60

{	int eleman1 = 3;
//  do {
//      printf("1. dizinin eleman sayısını girin : ");
//	    scanf("%d", &eleman1);
//	}while(eleman1 < 1);

	int dizi1[eleman1];
	for (int i = 0; i < eleman1; i++) {
		printf("Input the %d/%d. members of the 1st array : ", i + 1, eleman1);
		scanf("%d", &dizi1[i]);
	}

	int eleman2 = 3;
//	do {
//		printf("2. dizinin eleman sayısını girin : ");
//		scanf("%d", &eleman2);
//	}while(eleman2 < 1);

	int dizi2[eleman2];
	for (int i = 0; i < eleman2; i++) {
		printf("Input the %d/%d. members of the 2nd array : ", i + 1, eleman2);
		scanf("%d", &dizi2[i]);
	}

	printf("Elements in original array1 are : { ");
	for (int i = 0; i < eleman1; i++)
		printf("%d ", dizi1[i]);
	printf("}\n");

	printf("Elements in original array2 are : { ");
	for (int i = 0; i < eleman2; i++)
		printf("%d ", dizi2[i]);
	printf("}\n");

	int elemanYeni = eleman1 + eleman2;
	int yeniDizi[elemanYeni];
	for (int j = 0; j < eleman1; j++)
		yeniDizi[j] = dizi1[j];
	for (int k = eleman1; k < elemanYeni; k++)
		yeniDizi[k] = dizi2[k - eleman1];

	printf("                      New array : { ");
	for (int l = 0; l < elemanYeni; l++)
		printf("%d ", yeniDizi[l]);
	printf("}\n");
}

log_green("\n48. Write a C program to create a new array by swapping the first and last elements of a given array of integers ");
log_green("whose length is at least 1.\n\n");

//Expected Output:
//Elements in original array are         : 1, 5, 7, 9, 11, 13
//New array,
//after swapping first and last elements : 13, 5, 7, 9, 11, 1

{	int eleman = 0;
	do {
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	if (eleman == 0)
		printf("Dizide yer değiştirilecek eleman yok.\n");
	else if (eleman == 1)
		printf("Dizide yer değiştirmek için yeterli eleman yok.\n");
	else{
		printf("Elements in original array are         : { ");
		for (int i = 0; i < eleman; i++)
			printf("%d ", dizi[i]);
		printf("}\n");
		int gecici = 0;
		gecici = dizi[0];
		dizi[0] = dizi[eleman -1];
		dizi[eleman - 1] = gecici;
		printf("New array,\n");
		printf("after swapping first and last elements : { ");
		for (int i = 0; i < eleman; i++)
			printf("%d ", dizi[i]);
		printf("}\n");
	}
}

log_green("\n49. Write a C program to create an array of length 3 from a given array ");
log_green("(length at least 3) containing the elements from the middle of the array.\n\n");

//Expected Output:
//Elements in original array1 are : 1, 5, 7, 9, 11, 13
//                      New array : 7, 9, 11

{	int eleman = 0;
	do {
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 3);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int yeniDizi[3];
	for (int i = 0; i < 3; i++)
		yeniDizi[i] = dizi[(eleman / 2) + i - 1];

	printf("Elements in original array1 are : { ");
	for (int j = 0; j < eleman; j++)
		printf("%d ", dizi[j]);
	printf("}\n");
	printf("                      New array : { ");
	for (int k = 0; k < 3; k++)
		printf("%d ", yeniDizi[k]);
	printf("}\n");
}

log_green("\n50. Write a C program to find the largest value from the first, last, and ");
log_green("middle elements of a given array of integers of odd length (at least 1).\n\n");

//Expected Output:
//1
//9
//9

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : (tek sayı)");
		scanf("%d", &eleman);
	}while(eleman % 2 == 0 || eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int ilk = dizi[0];
	int orta = dizi[eleman / 2];
	int son = dizi[eleman - 1];

	int buyuk = ilk;
	if (orta > ilk && orta > son)
		buyuk = orta;
	if (son > orta && son > ilk)
		buyuk = son;

	if (eleman == 1)
		printf("%d\n", ilk);
	else
		printf("%d\n", buyuk);
}
log_green("\n51. Write a C program to count the even number of elements in a given array of integers.\n\n");

//Expected Output:
//3

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int sayac = 0;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] % 2 == 0)
			sayac++;
	}
	printf("Dizideki çift sayı adedi : %d\n", sayac);
}

log_green("\n52. Write a C program to compute the sum of values in a given array of integers except the number 17. ");
log_green("Return 0 if the given array has no integers.\n\n");

//Expected Output:
//Sum of values in the array of integers except the number 17: 46

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int toplam = 0;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 17)
			continue;
		toplam += dizi[i];
	}
	printf("Sum of values in the array of integers except the number 17 : %d\n", toplam);
}

log_green("\n53. Write a C program to compute the sum of the numbers in a given array except those that ");
log_green("begin with 5 followed by at least one 6. ");
log_green("Return 0 if the given array has no integers.\n\n");

//Expected Output:
//Sum of values in the array of integers
//  except those numbers starting with 5
//            followed by at least one 6 : 37

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int toplam = 0;
	for (int i = 0; i < eleman; i++) {
		if (i < eleman - 1 && dizi[i] == 5 && dizi[i + 1] == 6)
			i++;
		else
			toplam += dizi[i];
	}
	printf("Sum of values in the array of integers\n");
	printf("  except those numbers starting with 5\n");
	printf("            followed by at least one 6 : %d\n", toplam);
}

log_green("\n54. Write a C program to check whether a given array of integers contains 5 next to a 5 somewhere.\n\n");

//Expected Output:
//0
//1
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	bool varYok = false;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 5){
			for (int j = i + 1; j < eleman; j++) {
				if (dizi[j] == 5){
					printf("TRUE\n");
					varYok = true;
					break;
				}
			}
		}
	}
	if (!varYok)
		printf("FALSE\n");

//	 içiçe iki döngü yerine bir döngü ile

//	 for (int i = 0; i < eleman; i++) {
//        if (dizi[i] == 5) {
//            count++;
//            if (count == 2) {
//                printf("TRUE\n");
//                break;
//            }
//        }
//    }
//
//    if (count < 2) {
//        printf("FALSE\n");
//    }

}

log_green("\n55. Write a C program to check whether a given array of integers contains 5's and 7's.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	bool bool5 = false;
	bool bool7 = false;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 5)
			bool5 = true;
		if (dizi[i] == 7)
			bool7 = true;
	}
	if (bool5)
		printf("Given array of integers contains 5's\n");
	if (bool7)
		printf("Given array of integers contains 7's\n");
	if (!bool5 && !bool5)
		printf("Given array of integers doesn't contain any 5's and 7's\n");
}

log_green("\n56. Write a C program to check if the sum of all 5's in the array is exactly 15 in a given array of integers.\n\n");

//Expected Output:
//0
//1
//0

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	int toplam = 0;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 5)
			toplam += dizi[i];
	}
	if (toplam == 15)
		printf("The sum of all 5's in the array is exactly 15.\n");
	else
		printf("The sum of all 5's in the array is %d.\n", toplam);

}

log_green("\n57. Write a C program to check whether the number of 3's is greater than the number of 5's.\n\n");
//Expected Output:
//
//1
//0
//0

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	int count3 = 0;
	int count5 = 0;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 3)
			count3++;
		if (dizi[i] == 5)
			count5++;
	}
	if (count3 > count5)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n58. Write a C program to check whether a given array of integers contains a 3 or a 5.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool varYok = false;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 3 || dizi[i] == 5)
			varYok = true;
	}
	if (varYok)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n59. Write a C program to check if a given array of integers contains no 3 or 5.\n\n");

//Expected Output:
//1
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool varYok = false;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 3 || dizi[i] == 5)
			varYok = true;
	}
	if (varYok)
		printf("FALSE\n");
	else
		printf("TRUE\n");
}

log_green("\n60. Write a C program to check whether an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	bool bool3 = false;
	bool bool5 = false;


	for (int i = 0; i < eleman - 1; i++) {
        if (dizi[i] == 3 && dizi[i + 1] == 3)
            bool3 = true;
	}
	for (int i = 0; i < eleman - 1; i++) {
		if (dizi[i] == 5 && dizi[i + 1] == 5)
			bool5 = true;
	}
    if (bool3 && bool5)
        printf("Dizide hem 3 hem de 5 için koşul sağlanıyor.\n");
    else if (bool3)
        printf("Dizide 3 için koşul sağlanıyor.\n");
    else if (bool5)
		printf("Dizide 5 için koşul sağlanıyor.\n");
    else
    	printf("Dizide koşul sağlanmıyor.\n");
}

log_green("\n61. Write a C program to check a given array of integers. ");
log_green("The program will return true if the given array contains two 5's next to each other, or ");
log_green("two 5's separated by one element.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool bool55 = false;
	bool bool5_5 = false;

	for (int i = 0; i < eleman - 1; i++) {
        if (dizi[i] == 5 && dizi[i + 1] == 5)
        	bool55 = true;
	}
	for (int i = 0; i < eleman - 2; i++) {
		if (dizi[i] == 5 && dizi[i + 1] != 5 && dizi[i + 2] == 5)
			bool5_5 = true;
	}
    if (bool55 && bool5_5)
        printf("Dizide hem <yanyana 5> hem de <iki 5 arasında başka bir sayı> için koşul sağlanıyor.\n");
    else if (bool55)
        printf("Dizide <yanyana 5> için koşul sağlanıyor.\n");
    else if (bool5_5)
		printf("Dizide <iki 5 arasında başka bir sayı>  için koşul sağlanıyor.\n");
    else
    	printf("Dizide koşul sağlanmıyor.\n");
}

log_green("\n62. Write a C program to check a given array of integers and return true if there is a 3 with a 5 ");
log_green("somewhere later in the given array.\n\n");

//Expected Output:
//0
//1
//0

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int indeks = 0;
	printf("Dizinin kaçıncı indeksinden sonrası incelenecek : ");
	scanf("%d", &indeks);

	bool varYok = false;
	for (int i = indeks; i < eleman; i++) {
		if ( dizi[i] == 3 || dizi[i] == 5)
			varYok = true;
	}
	if (varYok)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n63. Write a C program to check a given array of integers. ");
log_green("The program will return true if the given array contains either 2 even or 2 odd values all next to each other.\n\n");

//Expected Output:
//0
//1
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool cift = false;
	bool tek = false;
	for (int i = 0; i < eleman -1; i++) {
		if (dizi[i] % 2 == 0 && dizi[i + 1] % 2 == 0)
			cift = true;
		if (dizi[i] % 2 == 1 && dizi[i + 1] % 2 == 1)
			tek = true;
	}
	if (cift && tek)
		printf("Çift ve Tek için koşul sağlanıyor.\n");
	else if (cift)
		printf("Çift için koşul sağlanıyor.\n");
	else if (tek)
		printf("Tek için koşul sağlanıyor.\n");
	else if (!cift && !tek)
		printf("Hem Çift hem de Tek için koşul sağlanmıyor.\n");
}

log_green("\n64. Write a C program to check a given array of integers. ");
log_green("The program will return true if the value 5 appears 5 times and there are no 5 next to each other.\n\n");

//Expected Output:
////int array1[] = { 3, 5, 1, 5, 3, 5, 7, 5, 1, 5 };
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int flag = 0;
	int five = 0;

	for (int i = 0; i < eleman; i++){
		if (dizi[i] == 5 && !flag){
			five++;
			flag = 1;
		}
		else
			flag = 0;
	}
	if (five == 5)
		printf("5 appears 5 times and there are no 5 next to each other.\n");
	else
		printf("FALSE\n");
}

log_green("\n65. Write a C program to check a given array of integers and ");
log_green("return true if every 5 that appears in the given array is next to another 5.\n\n");

//Expected Output:
//1
//0
//1
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool all_fives_paired = true; // Assume all 5s are paired initially

	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == 5) {
			bool left_five = (i > 0 && dizi[i - 1] == 5);
			bool right_five = (i < eleman - 1 && dizi[i + 1] == 5);

			if (!left_five && !right_five) {
				all_fives_paired = false;
				break;
			}
		}
	}

	if (all_fives_paired)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n66. Write a C program to check a given array of integers. The program will return true ");
log_green("if the specified number of the same elements appears at the start and end of the given array.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int specifiedNumber = 0;
	printf("Input specified number : ");
	scanf("%d", &specifiedNumber);
	int count = 0;
	for (int i = 0; i < eleman; i++) {
		if (dizi[i] == dizi[eleman - specifiedNumber + i])
			count++;
	}
	if (specifiedNumber == count)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n67. Write a C program to check a given array of integers and return true ");
log_green("if the array contains three increasing adjacent numbers.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	int count = 1;
	for (int i = 0; i < eleman - 1; i++) {
		if (dizi[i + 1] > dizi[i]){
			count++;
			if (count == 3)
				break;
		}
		else
			count = 1;
	}
	if (count == 3)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n68. Write a C program to shift an element in the left direction and return a newly created array.\n\n");

//Expected Output:
//Elements in original array are : 10, 20, 30, 40
//Elements in new array are      : 20, 30, 40, 10

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int i = 0; i < eleman; i++) {
		printf("%d ", dizi[i]);
	}

	int yeniDizi[eleman];

	for (int j = 0; j < eleman; j++)
		yeniDizi[j] = dizi[(j + 1) % eleman];

	printf("\nElements in new array are      : ");
	for (int k = 0; k < eleman; k++) {
		printf("%d ", yeniDizi[k]);
	}
	printf("\n");
}

log_green("\n69. Write a C program to create a new array taking the elements before the element value 5 from a given array of integers.\n\n");

//Expected Output:
//Elements in original array are : 1, 2, 3, 5, 7
//Elements in new array are      : 1, 2, 3

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int i = 0; i < eleman; i++) {
		printf("%d ", dizi[i]);
	}

	int yeniDizi[eleman];
	int yeniDiziEleman = 0;

	for (int j = 0; j < eleman; j++){
		if (dizi[j] != 5){
			yeniDizi[j] = dizi[j];
			yeniDiziEleman = j + 1;
		}
		else
			break;
	}
	printf("\nElements in new array are      : ");
	for (int k = 0; k < yeniDiziEleman; k++) {
		printf("%d ", yeniDizi[k]);
	}
	printf("\n");
}

log_green("\n70. Write a C program to create a array taking the elements after the element value 5 from a given array of integers.\n\n");

//Expected Output:
//Elements in original array are : 1, 2, 3, 5, 7, 9, 11
//Elements in new array are      : 7, 9, 11

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int i = 0; i < eleman; i++) {
		printf("%d ", dizi[i]);
	}

	int yeniDiziBaslangicIndeks = 0;
	for (int j = 0; j < eleman; j++){
		if (dizi[j] != 5)
			continue;
		else
			yeniDiziBaslangicIndeks = j + 1;
	}
	int n = eleman - yeniDiziBaslangicIndeks;
	int yeniDizi[n];

	for (int k = 0; k < n; k++) {
		yeniDizi[k] = dizi[yeniDiziBaslangicIndeks + k];
	}


	printf("\nElements in new array are      : ");
	for (int l = 0; l < n; l++) {
		printf("%d ", yeniDizi[l]);
	}
	printf("\n");
}

log_green("\n71. Write a C program to create a new array from a given array of integers shifting all zeros to left direction.\n\n");

//Expected Output:
//Elements in original array are : 1, 2, 0, 3, 5, 7, 0, 9, 11
//Elements in new array are      : 0, 0, 1, 3, 5, 7, 2, 9, 11

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int j = 0; j < eleman; j++) {
		printf("%d ", dizi[j]);
	}

	int yeniDizi[eleman];
	int count = 0;
	for (int k = 0; k < eleman; k++) {
		if (dizi[k] == 0)
			yeniDizi[count++] = dizi[k];
	}

	for (int l = 0; l < eleman; l++) {
		if (dizi[l] != 0)
			yeniDizi[count++] = dizi[l];
	}

	printf("\nElements in new array are      : ");
	for (int m = 0; m < eleman; m++) {
		printf("%d ", yeniDizi[m]);
	}
	printf("\n");
}

log_green("\n72. Write a C program to create an array after replacing all the values 5 with 0 and shifting all zeros to the right.\n\n");

//Expected Output:
//Elements in original array are : 1, 2, 0, 3, 5, 7, 0, 9, 11, 5
//Elements in new array are      : 1, 2, 0, 3, 7, 0, 9, 11, 0, 0

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int j = 0; j < eleman; j++) {
		printf("%d ", dizi[j]);
	}

	int yeniDizi[eleman];
	int count = 0;

	for (int k = 0; k < eleman; k++) {
		if (dizi[k] != 0 && dizi[k] != 5)
			yeniDizi[count++] = dizi[k];
	}

	for (int l = 0; l < eleman; l++) {
		if (dizi[l] == 0 || dizi[l] == 5)
			yeniDizi[count++] = 0;
	}

	printf("\nElements in new array are      : ");
	for (int m = 0; m < eleman; m++) {
		printf("%d ", yeniDizi[m]);
	}
	printf("\n");
}

log_green("\n73. Write a C program to create an array from a given array of integers shifting all even numbers before all odd numbers.\n\n");

//Expected Output:
//Elements in original array are : 1, 2, 5, 3, 5, 4, 6, 9, 11
//Elements in new array are      : 2, 4, 6, 3, 5, 1, 5, 9, 11

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	printf("Elements in original array are : ");
	for (int j = 0; j < eleman; j++) {
		printf("%d ", dizi[j]);
	}

	int yeniDizi[eleman];
	int count = 0;

	for (int k = 0; k < eleman; k++) {
		if (dizi[k] % 2 == 0)
			yeniDizi[count++] = dizi[k];
	}

	for (int l = 0; l < eleman; l++) {
		if (dizi[l] % 2 == 1)
			yeniDizi[count++] = dizi[l];
	}

	printf("\nElements in new array are      : ");
	for (int m = 0; m < eleman; m++) {
		printf("%d ", yeniDizi[m]);
	}
	printf("\n");
}

log_green("\n74. Write a C program to check if the value of each element is equal or ");
log_green("greater than the value of the previous element of a given array of integers.\n\n");

//Expected Output:
//0
//1
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool kontrol = false;
	for (int i = 0; i < eleman - 1; i++) {
		if (dizi[i] > dizi[i + 1]){
			kontrol = true;
			break;
		}
	}
	if (!kontrol)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

log_green("\n75. Write a C program to check a given array (length will be at least 2) of integers and ");
log_green("return true if there are two values 15, 15 next to each other.\n\n");

//Expected Output:
//1
//0
//1

{	int eleman = 0;
	do{
		printf("Dizinin eleman sayısını girin : ");
		scanf("%d", &eleman);
	}while(eleman < 0);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Input the %d/%d. members of the array : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	bool kontrol = false;
	for (int i = 0; i < eleman - 1; i++) {
		if (dizi[i] == 15 && dizi[i + 1] == 15){
			kontrol = true;
			break;
		}
	}

	if (kontrol)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

	return EXIT_SUCCESS;
}
