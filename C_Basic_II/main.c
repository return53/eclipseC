#include <stdio.h>
#include "src/print.h"
#include "src/fonksiyon.h"
#include <limits.h>
#include <stdlib.h>

int main() {

log_magenta("\n1. Write a C program that takes n number of positive integers. ");
log_magenta("Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.\n\n");

//Sample Date:
//(1,2,3) -> 1
//(10, 20, 4, 5, 11) -> 4

{	int eleman = 0;
	do {
		printf("Dizinin eleman sayısını girin (En fazla 100) : ");
		scanf("%d", &eleman);
	} while ( eleman <= 0 || eleman > 100);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		do {
			printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
			scanf("%d", &dizi[i]);
		} while (dizi[i] < 0);

	}

	for (int i = 0; i < eleman; i++) {
		printf("dizi[%d] : %d\n", i, dizi[i]);
	}

	// Sayıları sıfırla
	int count[eleman];
	for (int i = 0; i < eleman; i++) {
		count[i] = 0;
	}

	// Sayıları say
	for (int i = 0; i < eleman; i++) {
		for (int j = 0; j < eleman; j++) {
			if (dizi[i] == dizi[j]) {
				count[i]++;
			}
		}
	}

	// En az sayıda görünen sayıyı bul
	int minCount = INT_MAX;
	int result = INT_MAX;

	for (int i = 0; i < eleman; i++) {
		if (count[i] < minCount || (count[i] == minCount && dizi[i] < result)) {
			minCount = count[i];
			result = dizi[i];
		}
	}

	printf("En az sayıda görünen tamsayı: %d\n", result);
}

log_magenta("\n2. Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2.\n\n");

//Sample Date:
//("abcdxyabcd", 5, 6) -> "abcdyxabcd"
//("Exercises", 1, 3) -> "exercises"

{	char dize[25];
	printf("bir metin girin : ");
	scanf("%s", dize);

	int sayi1 = 0, sayi2 = 0;
	printf("İki sayı girin : ");
	scanf("%d %d", &sayi1, &sayi2);

	if ( sayi1 > sayi2){
		sayi1 += sayi2;
		sayi2 = sayi1 - sayi2;
		sayi1 = sayi1 - sayi2;
	}

	for (int i = 0; i < sayi1 -1 ; i++)
		printf("%c", dize[i]);

	for (int i = sayi2 -1; i > sayi1-2; i--)
		printf("%c", dize[i]);

	for (int i = sayi2; i < sizeof(dize) / sizeof(dize[0] ); i++)
		printf("%c", dize[i]);
	printf("\n");
}

log_magenta("\n3. Write a C program that accepts three integers from the user and finds the second largest number among them.\n\n");

//Constraints:
//
//1≤ x ≤100
//1≤ y ≤100
//1≤ z ≤100
//Sample Date:
//(1 , 2, 3) -> 2
//(10, 12, 24) -> 12
//(34, 21, 30) -> 30

{	int eleman = 3;
	int sayi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &sayi[i]);
	}

	printArray(sayi, eleman);
	selectionSort(sayi, eleman);
	printf(" -> %d\n", sayi[1]);
}

log_magenta("\n4. Write a C program that accepts two sequences ((a1, a2, .. an), (b1, b2, .. bn)) of integers as input. ");
log_magenta("Find all integers that appear in both sequences, one by one, in ascending order.\n\n");

//Constraints:
//
//1≤N1≤100, N1 -> number of integers in first sequence.
//1≤N2≤100, N2 -> number of integers in second sequence.
//1 ≤ ai≤ 100 ( 1 ≤ i ≤ N1 )
//1 ≤ bj≤ 100 ( 1 ≤ j ≤ N2 )
//Sample Date:
//
//( 1 2 3 1 2 3 4 ) -> 1 2 3
//( 1 2 3 1 2 3 ) -> 1 2 3
//( 1 2 3 4 5 6 ) ->

{	int n1 = 0, n2 = 0;

	do {
		printf("Birinci dizinin eleman sayısını girin (en fazla 100) : ");
		scanf("%d", &n1);
	}while (n1<1 || n1 > 100);

	do {
		printf("İkinci dizinin eleman sayısını girin (en fazla 100) : ");
		scanf("%d", &n2);
	}while (n2 < 1 || n2 > 100);

	int dizi1[n1], dizi2[n2];

	for (int i = 0; i < n1; i++) {
		printf("1. dizinin %d/%d. elemanını girin : ", i + 1, n1);
		scanf("%d", &dizi1[i]);
	}
	printf("1. dizinin elemanları : { ");
	for (int i = 0; i < n1; i++)
		printf("%d ", dizi1[i]);
	printf("}\n");

	for (int j = 0; j < n2; j++) {
			printf("2. dizinin %d/%d. elemanını girin : ", j + 1, n2);
			scanf("%d", &dizi2[j]);
	}
	printf("2. dizinin elemanları : { ");
	for (int j = 0; j < n2; j++)
		printf("%d ", dizi2[j]);
	printf("}\n");

	//yeni bir dizi içine atayarak
	int eleman = (n1 > n2) ? n1 : n2;
	int altDizi[eleman];
	int sayac = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (dizi1[i] == dizi2[j]){
				altDizi[sayac++] = dizi1[i];
				break;
			}
		}
	}

	bubbleSort(altDizi, sayac);

	printf("Alt dizinin elemanları : { ");
	for (int i = 0; i < sayac; i++)
		printf("%d ", altDizi[i]);
	printf("}\n");

	//Yeni diziye atamadan iki dizide de aynı eleman tespit ettikçe yazdırma
	printf("Alt dizinin elemanları : { ");
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (dizi1[i] == dizi2[j]){
				printf("%d ", dizi1[i]);
				break;
			}
		}
	}
	printf("}\n");
}

log_magenta("\n5. Write a C program that accepts a sequence of different values and calculates the sum of the values ");
log_magenta("before and after the maximum value.\n\n");

//The sum of the values before the maximum value is 0, if there are no values before the maximum.
//Similarly, the sum of the values after the maximum value is 0, if there are no values after the maximum.
//Sample Date:
//
//1 2 3 -> 3 0
//1 2 9 4 5 -> 3 9
//2 2 2 2 -> 0 6

{	int eleman = 0;

	do {
		printf("Dizinin eleman sayısını girin (en fazla 100) : ");
		scanf("%d", &eleman);
	}while (eleman<1 || eleman > 100);

	int dizi[eleman];

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	printf("Dizinin elemanları : { ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("}\n");

	int maks = 0;
	int indeks = 0;
	for (int i = 0; i < eleman; i++) {
		if(dizi[i] > maks){
			maks = dizi[i];
			indeks = i;
		}
	}
	printf("Sum before the maximum value : ");
	int leftSum = 0;
	for (int j = 0; j < indeks; j++) {
		leftSum += dizi[j];
	}
	printf("%d\n", leftSum);


	printf("Sum after the maximum value  : ");
	int rightSum = 0;
	for (int k = indeks + 1; k < eleman; k++) {
		rightSum += dizi[k];
	}
	printf("%d\n", rightSum);
}

log_magenta("\n6. Write a C program that accepts a sequence of positive integers from the user and finds the longest continuous subsequence.\n\n");

//Sample Date:
//
//Length of the sequence: 5
//Sequence: 5 2 3 4 1
//Length of longest ascending contiguous subsequence: 5 [2 3 4]
//Length of the sequence: 6
//Sequence: 10 20 30 40 50 60
//Length of longest ascending contiguous subsequence: 6 [10 20 30 40 50 60]
//Length of the sequence: 3
//Sequence: 5 1 3
//Length of longest ascending contiguous subsequence: 2 [1 3]

{	int eleman = 0;

	do {
		printf("Dizinin eleman sayısını girin (en fazla 100) : ");
		scanf("%d", &eleman);
	}while (eleman<1 || eleman > 100);

	int dizi[eleman];

	for (int i = 0; i < eleman; i++) {
		printf("Dizinin %d/%d. elemanını girin : ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}
	printf("Dizinin elemanları : { ");
	for (int i = 0; i < eleman; i++)
		printf("%d ", dizi[i]);
	printf("}\n");

	int gecici = 0, ctr = 0, max = 0;
	while (gecici < (eleman - 1)) {
		if (dizi[gecici] <= dizi[gecici + 1]) {
			ctr++;
		}
		else {
		if (max <ctr)
			max = ctr;
		ctr = 0;
		}
		gecici++;
	}

	if (max <ctr)
		max = ctr;
	printf("Length of longest ascending contiguous subsequence: %d\n", max + 1);

}

log_magenta("\n7. Write a C program that accepts three integers: A, B, and X. ");
log_magenta("Find the smallest absolute value of the difference between X and the integers between A and B.\n\n");

//Sample Date:
//
//Input A, B: 7, 11
//C: 20
//Smallest absolute value of difference between X and integers between A and B (inclusive): 11
//Input A, B: 1, 5
//C: 4
//Smallest absolute value of difference between X and integers between A and B (inclusive): 4

{	int A = 0, B = 0;
	printf("Input A, B : ");
	scanf("%d %d", &A, &B);
	int X =0;
	printf("Input X : ");
	scanf("%d", &X);

	int sonuc = abs(A - X) < abs(B - X) ? A : B;
	printf("Smallest absolute value of difference between X and integers between A and B (inclusive) : %d", sonuc);
	
}

	return 0;
}

