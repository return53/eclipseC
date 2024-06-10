/*
 ================================================================================
 Name        : C_Conditional_Statement.c
 Author      : Emre Yasin Albayrak
 Version     :
 Copyright   : Your copyright notice
 Description : C Programming Exercises, Practice, Solution : Conditional Statement
 	 	 	   C Conditional Statement [26 exercises with solution]
 =================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#include "print.h"

int main(void) {

log_blue("\n1. Write a C program to accept two integers and check whether they are equal or not.\n\n");
//Test Data : 15 15
	//Expected Output :
	//Number1 and Number2 are equal

{	int sayi1 = 0, sayi2 = 0;
	printf("Birinci sayıyı girin : ");
	scanf("%d", &sayi1);
	printf("İkinci sayıyı girin : ");
	scanf("%d", &sayi2);

	if (sayi1 == sayi2)
		printf("Number1 and Number2 are equal.\n");
	else
		printf("Number1 and Number2 are NOT equal.\n");
}

log_blue("\n2. Write a C program to check whether a given number is even or odd.\n\n");
//Test Data : 15
	//Expected Output :
	//15 is an odd integer

{	int sayi1 = 0;
	printf("Bir sayı girin : ");
	scanf("%d", &sayi1);

	if (sayi1 % 2 == 0)
		printf("%d is an even integer.\n", sayi1);
	else
		printf("%d is an odd integer.\n", sayi1);
}

log_blue("\n3. Write a C program to check whether a given number is positive or negative.\n\n");
//Test Data : 15
	//Expected Output :
	//15 is a positive number

{	int sayi1 = 0;
	printf("Bir sayı girin : ");
	scanf("%d", &sayi1);

	if (sayi1 < 0)
		printf("%d is a negatif number.\n", sayi1);
	else if (sayi1 > 0)
		printf("%d is a positive number.\n", sayi1);
	else
		printf("girilen sayı sıfırdır.\n");
}

log_blue("\n4. Write a C program to find whether a given year is a leap year or not.\n\n");
//Test Data : 2016
	//Expected Output :
	//2016 is a leap year.

/*
 * Bir yılın artık yıl olup olmadığını belirleme
 * Bir yılın artık yıl olup olmadığını belirlemek için aşağıdaki adımları izleyin:
	 * 1- Yıl 4 ile eşit bölünebilir ise, adım 2'e gidin. Aksi durumda, 5. adıma gidin.
	 * 2- Yıl 100 ile eşit bölünebilir ise, adım 3'e gidin. Aksi durumda, 4. adıma gidin.
	 * 3- Yıl 400 ile eşit bölünebilir ise, adım 4'e gidin. Aksi durumda, 5. adıma gidin.
	 * 4- Yıl artık yıldır (366 gün vardır).
	 * 5- Yıl artık yıl değildir (365 gün vardır).
 */

{	int yil = 0;
	printf("Bir yıl girin : ");
	scanf("%d", &yil);

	if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))
		printf("%d is a leap year.\n", yil);
	else
		printf("%d is NOT a leap year.\n", yil);
}

log_blue("\n5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.\n\n");
//Test Data : 21
	//Expected Output :
	//Congratulation! You are eligible for casting your vote.

{	int yas = 0;
	printf("Bir yıl girin : ");
	scanf("%d", &yas);

	if (yas >= 18)
		printf("Congratulation! You are eligible for casting your vote.\n");
	else
		printf("You are NOT eligible for casting your vote.\n");
}

log_blue("\n6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.\n\n");
//Test Data : -5
	//Expected Output :
	//The value of n = -1


log_blue("\n7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.\n\n");
//Test Data : 135
	//Expected Output :
	//The person is Dwarf.
/*
 * Kıta				Kadın Boy Ortalaması (cm)	Erkek Boy Ortalaması (cm)
 * Afrika			162							172
 * Asya				156							167,5
 * Avrupa			167							180
 * Kuzey Amerika	161							175
 * Güney Amerika	158							171
 * Avustralya		163							178
 */

{	printf("Afrika\n");
	printf("Asya\n");
	printf("Avrupa\n");
	printf("Kuzey Amerika\n");
	printf("Güney Amerika\n");
	printf("Avustralya\n");

	printf("Bulunduğunuz kıtayı -yukarıdaki seçeneklerden biri şeklinde- girin: ");
	char kita[15];
	scanf("%s", kita);

	// Kıta adını küçük harfe çevir
	for (int i = 0; kita[i]; i++) {
		kita[i] = tolower(kita[i]);
	}

	printf("Cinsiyet girin (erkek: E, kadın: K) : ");
	char cinsiyet;
	scanf(" %c", &cinsiyet);  // Boşluk ekledik, bir önceki scanf'ten kalan newline karakterini yutmak için
	cinsiyet = toupper(cinsiyet);

	printf("Boyunuzu cm cinsinden girin: ");
	int boy = 0;
	scanf("%d", &boy);

	if (strcmp(kita, "afrika") == 0) {
		if ((cinsiyet == 'E' && boy >= 172) || (cinsiyet == 'K' && boy >= 162))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else if (strcmp(kita, "asya") == 0) {
		if ((cinsiyet == 'E' && boy >= 168) || (cinsiyet == 'K' && boy >= 156))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else if (strcmp(kita, "avrupa") == 0) {
		if ((cinsiyet == 'E' && boy >= 180) || (cinsiyet == 'K' && boy >= 167))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else if (strcmp(kita, "kuzey amerika") == 0) {
		if ((cinsiyet == 'E' && boy >= 175) || (cinsiyet == 'K' && boy >= 161))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else if (strcmp(kita, "güney amerika") == 0) {
		if ((cinsiyet == 'E' && boy >= 171) || (cinsiyet == 'K' && boy >= 158))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else if (strcmp(kita, "avustralya") == 0) {
		if ((cinsiyet == 'E' && boy >= 178) || (cinsiyet == 'K' && boy >= 163))
			printf("Boyunuz ortalamanın üzerinde.\n");
		else
			printf("Boyunuz ortalamanın altında.\n");
	} else {
		printf("Geçerli değerler girilmedi!\n");
	}
}

log_blue("\n8. Write a C program to find the largest of three numbers.\n\n");
//Test Data : 12 25 52
	//Expected Output :
	//1st Number = 12,
	//2nd Number = 25,
	//3rd Number = 52
	//The 3rd Number is the greatest among three

{	int eleman = 3;
//	do {
//		printf("Dizinin eleman sayısını girin : ");
//		scanf("%d", &eleman);
//	}while(eleman < 1);

	int dizi[eleman];
	for (int i = 0; i < eleman; i++) {
		printf("%d/%d. Number = ", i + 1, eleman);
		scanf("%d", &dizi[i]);
	}

	if (dizi[0] > dizi[1] && dizi[0] > dizi[2])
		printf("The 1st Number is the greatest among three\n");
	else if (dizi[1] > dizi[0] && dizi[1] > dizi[2])
		printf("The 2nd Number is the greatest among three\n");
	else if (dizi[2] > dizi[1] && dizi[2] > dizi[0])
		printf("The 3rd Number is the greatest among three\n");
}

log_blue("\n9. Write a C program to accept a coordinate point in an XY coordinate system and ");
log_blue("determine in which quadrant the coordinate point lies.\n\n");
//Test Data : 7 9
	//Expected Output :
	//The coordinate point (7,9) lies in the First quadrant.

{	int x = 0;
	int y = 0;
	printf("Koordinat sistemindeki noktanın X değeri : ");
	scanf("%d", &x);
	printf("Koordinat sistemindeki noktanın Y değeri : ");
	scanf("%d", &y);

	if (x == 0 && y == 0) {
		printf("The coordinate point (%d , %d) lies at the origin.\n", x, y);
	} else if (x == 0) {
		printf("The coordinate point (%d , %d) lies on the Y axis.\n", x, y);
	} else if (y == 0) {
		printf("The coordinate point (%d , %d) lies on the X axis.\n", x, y);
	} else if (x > 0 && y > 0) {
		printf("The coordinate point (%d , %d) lies in the First quadrant.\n", x, y);
	} else if (x < 0 && y > 0) {
		printf("The coordinate point (%d , %d) lies in the Second quadrant.\n", x, y);
	} else if (x < 0 && y < 0) {
		printf("The coordinate point (%d , %d) lies in the Third quadrant.\n", x, y);
	} else if (x > 0 && y < 0) {
		printf("The coordinate point (%d , %d) lies in the Fourth quadrant.\n", x, y);
	}
}

log_blue("\n10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: ");
log_blue("Eligibility Criteria : ");
log_blue("Marks in Maths             >= 65 and ");
log_blue("Marks in Phy               >= 55 and ");
log_blue("Marks in Chem              >= 50 and ");
log_blue("Total in all three subject >= 190 or ");
log_blue("Total in Maths and Physics >= 140\n\n");

//Input the marks obtained in Physics     : 65
//Input the marks obtained in Chemistry   : 51
//Input the marks obtained in Mathematics : 72
	//Total marks of Maths, Physics and Chemistry : 188
	//Total marks of Maths and Physics            : 137
	//The candidate is not eligible.
//Expected Output :
	//The candidate is not eligible for admission.

{	int physics = 0;
	int chemistry = 0;
	int mathematics = 0;
	printf("Input the marks obtained in Physics     : ");
	scanf("%d", &physics);
	printf("Input the marks obtained in Chemistry   : ");
	scanf("%d", &chemistry);
	printf("Input the marks obtained in Mathematics : ");
	scanf("%d", &mathematics);

	int totalAll = physics + chemistry + mathematics;
	int totalMathPhy = mathematics + physics;

	if (mathematics >= 65 && physics >= 55 && chemistry >= 50 && (totalAll >= 190 || totalMathPhy >= 140))
		printf("The candidate is eligible for admission.\n");
	else
		printf("The candidate is NOT eligible for admission.\n");
}

log_blue("\n11. Write a C program to calculate the root of a quadratic equation.\n\n");
//Test Data : 1 5 7
	//Expected Output :
	//Root are imaginary;
	//No solution.
//a * pow(x,2) + b * x + c = 0

{	int a = 0, b = 0, c = 0;
	printf("ax^2 + bx + c = 0 denklemindeki a'yı girin : ");
	scanf("%d", &a);
	printf("ax^2 + bx + c = 0 denklemindeki b'yi girin : ");
	scanf("%d", &b);
	printf("ax^2 + bx + c = 0 denklemindeki c'yi girin : ");
	scanf("%d", &c);

	double delta = (b * b) - (4 * a * c);
	double x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
	double x2 = ((-1 * b) - sqrt(delta)) / (2 * a);

	printf("Çözüm kümesi = { %.2f, %.2f }\n", x1, x2);
}

log_blue("\n12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.\n\n");
//Test Data :
	//Input the Roll Number of the student : 784
	//Input the Name of the Student        : James
	//Input the marks of Physics, Chemistry and Computer Application : 70 80 90
//Expected Output :
	//Roll No            : 784
	//Name of Student    : James
	//Marks in Physics   : 70
	//Marks in Chemistry : 80
	//Marks in Computer  : 90
	//Total Marks        = 240
	//Percentage         = 80.00
	//Division           = First

{	int rollNo = 0;
	char name[25];
	int phy = 0, che = 0, com = 0;
	int total = 0;
	double average = 0;
	printf("Input the Roll Number of the student : ");
	scanf("%d", &rollNo);
	printf("Input the Name of the Student        : ");
	scanf("%s", name);
	printf("Input the marks of Physics, Chemistry and Computer Application : ");
	scanf(" %d %d %d", &phy, &che, &com);

	total = phy + che + com;
	average = (float)total / 3;

	printf("Roll No            : %d\n", rollNo);
	printf("Name of Student    : %s\n", name);
	printf("Marks in Physics   : %d\n", phy);
	printf("Marks in Chemistry : %d\n", che);
	printf("Marks in Computer  : %d\n", com);
	printf("Total Marks        = %d\n", total);
	printf("Percentage         = %.2f\n", average);

	if (average >= 80)
		printf("Division           = First\n");
	else if (average >= 60)
		printf("Division           = Second\n");
	else if (average >= 40)
		printf("Division           = Pass\n");
	else
		printf("Division           = Fail\n");
}

log_blue("\n13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:\n\n");
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
//Test Data :
//42
//Expected Output :
//Its very hot.

{	int temp = 0;
	printf("Input temperature : ");
	scanf("%d", &temp);

	if (temp >= 40)
		printf("Its Very Hot\n");
	else if (temp >= 30)
		printf("Its Hot\n");
	else if (temp >= 20)
		printf("Normal in Temp\n");
	else if (temp >= 10)
		printf("Cold weather\n");
	else if (temp >= 0)
		printf("Very Cold weather\n");
	else
		printf("Freezing weather\n");
}

log_blue("\n14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.\n\n");
//Test Data :
	//50 50 60
	//Expected Output :
	//This is an isosceles triangle.

{	int a = 0, b = 0, c = 0;
	printf("Üçgenin a kenar uzunluğunu girin : ");
	scanf("%d", &a);
	printf("Üçgenin b kenar uzunluğunu girin : ");
	scanf("%d", &b);
	printf("Üçgenin c kenar uzunluğunu girin : ");
	scanf("%d", &c);

	if (a <= 0 || a >= b + c)
		printf("It's NOT a triange\n");
	else if (b <= 0 || b >= a + c)
		printf("It's NOT a triange\n");
	else if (c <= 0 || c >= a + b)
		printf("It's NOT a triange\n");
	else if (a == b && a == c)
		printf("This is an Equilateral triangle.\n");
	else if (a == b || a == c || b == c)
		printf("This is an Isosceles triangle.\n");
	else
		printf("This is a Scalene triangle.\n");
}

log_blue("\n15. Write a C program to check whether a triangle can be formed with the given values for the angles.\n\n");
//Test Data :
	//40 55 65
	//Expected Output :
	//The triangle is not valid.

{	int angA = 0, angB = 0, angC = 0;
	printf("Üçgenin a açısını girin : ");
	scanf("%d", &angA);
	printf("Üçgenin b açısını girin : ");
	scanf("%d", &angB);
	printf("Üçgenin c açısını girin : ");
	scanf("%d", &angC);

	if (angA + angB + angC != 180 || angA <= 0 || angB <= 0 || angC <= 0)
		printf("The triangle is not valid.\n");
	else{
		printf("This is a triange\n");
		if (angA == angB && angA == angC)
			printf("This is an Equilateral triangle.\n");
		else if (angA == angB || angA == angC || angB == angC)
			printf("This is an Isosceles triangle.\n");
		else
			printf("This is a Scalene triangle.\n");
	}
}

log_blue("\n16. Write a C program to check whether a character is an alphabet, digit or special character.\n\n");
//Test Data :
	//@
	//Expected Output :
	//This is a special character.

{	char karakter;
	printf("bir karakter girin : ");
	scanf("%c", &karakter);

	if (isalpha(karakter))
		printf("%c karakteri bir harf.\n", karakter);
	else if (isdigit(karakter))
		printf("%c karakteri bir rakam.\n", karakter);
	else
		printf("%c karakteri bir özel karakterdir.\n", karakter);

}

log_blue("\n17. Write a C program to check whether an alphabet is a vowel or a consonant.\n\n");
//Test Data :
	//k
	//Expected Output :
	//The alphabet is a consonant.

{	char karakter;
	printf("Bir karakter giriniz: ");
	scanf("%c", &karakter);
	karakter = tolower(karakter);

	if (karakter >= 'a' && karakter <= 'z'){
		if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u')
			printf("%c bir sesli harftir.\n", karakter);
		else
			printf("%c bir sessiz harftir.\n", karakter);
	} else
		printf("Girdiğiniz karakter bir harf değildir.\n");
}

log_blue("\n18. Write a C program to calculate profit and loss on a transaction.\n\n");
//Test Data :
	//500 700
	//Expected Output :
	//You can booked your profit amount : 200

{	int alis = 0, satis = 0;
	printf("Alış fiyatını girin  : ");
	scanf("%d", &alis);
	printf("Satış fiyatını girin : ");
	scanf("%d", &satis);

	if(satis > alis)
		printf("You can booked your profit amount : %d\n", satis - alis);
	else
		printf("You can booked your loss amount : %d\n", alis - satis);
}

log_blue("\n19. Write a program in C to calculate and print the electricity bill of a given customer. ");
log_blue("The customer ID, name, and unit consumed by the user should be captured from the keyboard ");
log_blue("to display the total amount to be paid to the customer.\n\n");

//The charge are as follow :
	//Unit								Charge/unit
	//upto 199							@1.20
	//200 and above but less than 400	@1.50
	//400 and above but less than 600	@1.80
	//600 and above						@2.00
	//If bill exceeds Rs. 400 then a surcharge of 15% will be charged and
	//the minimum bill should be of Rs. 100/-

//Test Data :
	//1001
	//James
	//800
	//Expected Output :
	//Customer IDNO :1001
	//Customer Name :James
	//unit Consumed :800
	//Amount Charges @Rs. 2.00 per unit : 1600.00
	//Surcharge Amount : 240.00
	//Net Amount Paid By the Customer : 1840.00

{	int customerID = 0;
	char customerName[25];
	int unit = 0;
	printf("Customer ID  : ");
	scanf("%d", &customerID);
	printf("Customer name : ");
	scanf("%s", customerName);
	do{
		printf("Unit         : ");
		scanf("%d", &unit);
	}while (unit < 0);


	double unitConsumed = 0;
	float charges = 0;
	if (unit < 200)
		charges = 1.20;
	else if (unit < 400)
		charges = 1.50;
	else if (unit < 600)
		charges = 1.80;
	else if (unit >= 600)
		charges = 2.00;
	else
		printf("Hata!\n");

	unitConsumed = (double)unit * charges;

	if (unitConsumed < 100)
		unitConsumed = 100;

	double surCharge = 0;
	if (unitConsumed >= 400)
		surCharge = unitConsumed * 0.15;

	printf("Customer IDNO                     : %d\n", customerID);
	printf("Customer Name                     : %s\n", customerName);
	printf("unit Consumed                     : %d\n",unit);
	printf("Amount Charges @Rs. %.2f ", charges);
	printf("per unit : %.2f\n", unitConsumed);
	printf("Surcharge Amount                  : %.2f\n", surCharge);
	printf("Net Amount Paid By the Customer   : %.2f\n", unitConsumed + surCharge);
}

log_blue("\n20. Write a program in C to accept a grade and declare the equivalent description :\n\n");

//Grade	Description
//E		Excellent
//V		Very Good
//G		Good
//A		Average
//F		Fail
//Test Data :
	//Input the grade : A
	//Expected Output :
	//You have chosen : Average

{	char derece;
	printf("Input the grade (E, V, G, A or F) : ");
	scanf("%c", &derece);
	derece = toupper(derece);

	printf("You have chosen : ");
	switch (derece) {
		case 'E':
			printf("Excellent\n");	break;
		case 'V':
			printf("Very Good\n");	break;
		case 'G':
			printf("Good\n");		break;
		case 'A':
			printf("Average\n");	break;
		case 'F':
			printf("Fail\n");		break;
		default:
			printf("Nothing\n");	break;
	}
}

log_blue("\n21. Write a C program to read any day number in integer and display the day name in word format.\n\n");
//Test Data :
	//4
	//Expected Output :
	//Thursday

{	int gun = 0;
	do {
		printf("Input day number (1 .. 7) : ");
		scanf("%d", &gun);
	} while (gun < 1 || gun > 7);

	switch (gun) {
		case 1:
			printf("Pazartesi\n");	break;
		case 2:
			printf("Salı\n");		break;
		case 3:
			printf("Çarşamba\n");	break;
		case 4:
			printf("Perşembe\n");	break;
		case 5:
			printf("Cuma\n");		break;
		case 6:
			printf("Cumartesi\n");	break;
		case 7:
			printf("Pazar\n");		break;
	}
}

log_blue("\n22. Write a program in C to read any digit and display it in the word.\n\n");
//Test Data :
	//4
	//Expected Output :
	//Four
{	int rakam;
	do {
		printf("Input Digit (0-9) : ");

		scanf("%d", &rakam);

		switch(rakam) {
			case 0:
				printf("Sıfır\n");	break;
			case 1:
				printf("Bir\n");	break;
			case 2:
				printf("İki\n");	break;
			case 3:
				printf("Üç\n");	break;
			case 4:
				printf("Dört\n");	break;
			case 5:
				printf("Beş\n");	break;
			case 6:
				printf("Altı\n");	break;
			case 7:
				printf("Yedi\n");	break;
			case 8:
				printf("Sekiz\n");	break;
			case 9:
				printf("Dokuz\n");	break;
			default:
				printf("Hatalı rakam. \nTekrar deneyin ....\n");	break;
		}
	} while ( rakam < 0 || rakam > 9);
}

log_blue("\n23. Write a C program for reading any Month Number and displaying the Month name as a word.\n\n");
//Test Data :
	//4
	//Expected Output :
	//April

{	int ay;
	do {
		printf("Ay Numarası (1-12): ");
		scanf("%d", &ay);

		switch(ay) {
			case 1:
				printf("Ocak\n");	break;
			case 2:
				printf("Şubat\n");	break;
			case 3:
				printf("Mart\n");	break;
			case 4:
				printf("Nisan\n");	break;
			case 5:
				printf("Mayıs\n");	break;
			case 6:
				printf("Haziran\n");break;
			case 7:
				printf("Temmuz\n");	break;
			case 8:
				printf("Ağustos\n");break;
			case 9:
				printf("Eylül\n");	break;
			case 10:
				printf("Ekim\n");	break;
			case 11:
				printf("Kasım\n");	break;
			case 12:
				printf("Aralık\n");	break;
			default:
				printf("Geçersiz ay numarası. Lütfen tekrar deneyin.\n");	break;
		}
	} while ( ay < 1 || ay > 12);
}

log_blue("\n24. Write a program in C to read any Month Number in integer and display the number of days for this month.\n\n");
//Test Data :
	//7
	//Expected Output :
	//Month have 31 days

{	int ay;
	do {
		printf("Ay Numarası (1-12): ");
		scanf("%d", &ay);

		switch(ay) {
			case 1:
				printf("Ocak ayında 31 gün vardır.\n");		break;
			case 2:
				printf("Şubat ayında 28 gün vardır.\n");	break;
			case 3:
				printf("Mart ayında 31 gün vardır.\n");		break;
			case 4:
				printf("Nisan ayında 30 gün vardır.\n");	break;
			case 5:
				printf("Mayıs ayında 31 gün vardır.\n");	break;
			case 6:
				printf("Haziran ayında 30 gün vardır.\n");	break;
			case 7:
				printf("Temmuz ayında 31 gün vardır.\n");	break;
			case 8:
				printf("Ağustos ayında 31 gün vardır.\n");	break;
			case 9:
				printf("Eylül ayında 30 gün vardır.\n");	break;
			case 10:
				printf("Ekim ayında 31 gün vardır.\n");		break;
			case 11:
				printf("Kasım ayında 30 gün vardır.\n");	break;
			case 12:
				printf("Aralık ayında 31 gün vardır.\n");	break;
			default:
				printf("Geçersiz ay numarası. Lütfen tekrar deneyin.\n");	break;
		}
	} while ( ay < 1 || ay > 12);
}

log_blue("\n25. Write a C program which computes the area of various geometrical shapes using a menu-driven approach.\n\n");
//Test Data :
	//1
	//5
	//Expected Output :
	//The area is : 78.500000

{	int choice,r,l,w,b,h;
	float area;
	printf("Input 1 for area of circle\n");
	printf("Input 2 for area of rectangle\n");
	printf("Input 3 for area of triangle\n");
	printf("Input your choice : ");
	scanf("%d", &choice);

	switch(choice){
	   case 1:
			 printf("Input radius of the circle : ");
			 scanf("%d", &r);
			 area = M_PI * pow(r, 2);
			 break;
		case 2:
			  printf("Input length and width of the rectangle : ");
			  scanf("%d %d", &l, &w);
			  area = l * w;
			  break;
		case 3:
			  printf("Input the base and height of the triangle :");
			  scanf("%d %d", &b, &h);
			  area = 0.5 * b * h;
			  break;
	}
	printf("The area is : %.2f\n",area);
}

log_blue("\n26. Write a program in C which is a Menu-Driven Program to perform a simple calculation.\n\n");
//Test Data :
	//10
	//2
	//3
	//Expected Output :
	//The Multiplication of 10 and 2 is: 20

{	int num1, num2, islem;

	printf("Enter the first Integer :");
	scanf("%d",&num1);
	printf("Enter the second Integer :");
	scanf("%d",&num2);

	printf("\nInput your option :\n");
	printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
	scanf("%d", &islem);

	switch(islem) {
		case 1:
			printf("The Addition of  %d and %d is: %d\n",num1, num2, num1 + num2);
			break;
		case 2:
			printf("The Substraction of %d  and %d is: %d\n",num1, num2, num1 - num2);
			break;
		case 3:
			printf("The Multiplication of %d  and %d is: %d\n", num1, num2, num1 * num2);
			break;
		case 4:
			if(num2 == 0)
				printf("The second integer is zero. Divide by zero.\n");  // Handle division by zero.
			else
				printf("The Division of %d  and %d is : %.2f\n",num1, num2, (float)num1 / num2);
			break;
		case 5:
			break;
		default:
			printf("Input correct option\n");
			break;
	}
}

	return EXIT_SUCCESS;
}
