#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct{
	int x;
	int y;
}Nokta;

typedef struct{
	char ad[25];
	char soyad[25];
	int yas;
	char meslek[25];
	char adres[25];
}Insan;

typedef struct{
	int *array;
} Veri;

void print_string(char *dize);
void insan_yazdir(Insan nesne);
void nokta_yazdir(Nokta nesne[]);

/* ------------------------------------ */
/* ***** Ana Fonksiyon Başlangıcı ***** */

int main(void) {
    int a = 53;
    int *ptr = &a;
    int* pointer = &a;

    printf("a:\t\t%d\n", a);
    printf("*ptr:\t\t%d\n", *ptr);
    printf("*pointer:\t%d\n", *pointer);
    printf("&a:\t\t%p\n", &a);
    printf("ptr:\t\t%p\n", ptr);
    printf("pointer:\t%p\n\n", pointer);

    char metin[] = "Ömer Kaan Albayrak\n";
    char *pChar = &metin[0];
    char *pMetin = metin;

    printf("metin: \t\t%p\n", metin); 			// metin dizisinin adresi
    printf("&metin[0]: \t%p\n", &metin[0]); 	// &metin[0] adresi
    printf("pChar: \t\t%p\n", pChar); 			// pChar pointer adresi
    printf("pMetin: \t%p\n", pMetin); 			// pMetin pointer adresi

    printf("fonksiyon argumanı: metin\n");
	print_string(metin);

    printf("fonksiyon argumanı: &metin[0]\n");
    print_string(&metin[0]);

    printf("fonksiyon argumanı: pChar\n");
    print_string(pChar);

    printf("fonksiyon argumanı: pMetin\n");
	print_string(pMetin);

    int dizi[] = {10, 20, 30, 40, 50};
    int uzunluk = sizeof(dizi) / sizeof(dizi[0]);
    printf("dizi boyutu: %lu\n", sizeof(dizi));
    printf("dizinin bir elemanının boyutu: %lu\n",sizeof(dizi[0]));

    printf("Sayı dizisinin uzunluğu: %d\n\n", uzunluk);

    Nokta p1 = {5, 10};
    Nokta p2 = {15, 20};

    printf("p1.x: %d\n", p1.x);
    printf("p1.y: %d\n", p1.y);
    printf("p2.x: %d\n", p2.x);
    printf("p2.y: %d\n", p2.y);

    Insan Emre;

    strcpy(Emre.ad, "Emre Yasin");
    strcpy(Emre.soyad, "Albayrak");
    Emre.yas = 43;
    strcpy(Emre.meslek, "Bankacı");
    strcpy(Emre.adres, "Tuzla / İstanbul");

    printf("\n");
    insan_yazdir(Emre);
    printf("\n");

    Nokta noktalar[10];

    for(int i = 0; i < 10; i++){
    	noktalar[i].x = i;
    	noktalar[i].y = i * 2;
    }

    nokta_yazdir(noktalar);
    printf("\n");

    Veri x;
    Veri y;

    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    	x.array[i] = i;

    for (int i = 0; i < 5; i++)
        printf("x.array #%d = %d\n", i, x.array[i]);

    for (int i = 0; i < 5; i++)
        y.array[i] = i + 5;

    for (int i = 0; i < 5; i++)
    	printf("y.array #%d = %d\n", i, y.array[i]);

    x = y;
    printf("\nx, y\'ye eşitlendikten sonra\n");

    for (int i = 0; i < 5; i++)
    	printf("x.array #%d = %d\n", i, x.array[i]);

    for (int i = 0; i < 5; i++)
        printf("y.array #%d = %d\n", i, y.array[i]);

    printf("\n");

    int int_d = 1;
    int8_t int8_t_d = 1;
    int16_t int16_t_d = 1;
    int32_t int32_t_d = 1;
    int64_t int64_t_d = 1;

    printf("int_d boyutu:     %ld\n", sizeof(int_d));
    printf("int8_t_d boyutu:  %ld\n", sizeof(int8_t_d));
    printf("int16_t_d boyutu: %ld\n", sizeof(int16_t_d));
    printf("int32_t_d boyutu: %ld\n", sizeof(int32_t_d));
    printf("int64_t_d boyutu: %ld\n", sizeof(int64_t_d));

    u_int u_int_d = 1;
    u_int8_t u_int8_t_d = 1;
    u_int16_t u_int16_t_d = 1;
    u_int32_t u_int32_t_d = 1;
    u_int64_t u_int64_t_d = 1;

    printf("u_int_d boyutu:     %ld\n", sizeof(u_int_d));
	printf("u_int8_t_d boyutu:  %ld\n", sizeof(u_int8_t_d));
	printf("u_int16_t_d boyutu: %ld\n", sizeof(u_int16_t_d));
	printf("u_int32_t_d boyutu: %ld\n", sizeof(u_int32_t_d));
	printf("u_int64_t_d boyutu: %ld\n", sizeof(u_int64_t_d));


/*
 * Specifier	Signing		Bits	Bytes	Minimum Value									Maximum Value
 * int8_t		Signed		8		1		−27 which equals −128							2**7 − 1 which is equal to 127
 * uint8_t		Unsigned	8		1		0												2**8 − 1 which equals 255
 * int16_t		Signed		16		2		−215 which equals −32,768						2**15 − 1 which equals 32,767
 * uint16_t		Unsigned	16		2		0												2**16 − 1 which equals 65,535
 * int32_t		Signed		32		4		−231 which equals −2,147,483,648				2**31 − 1 which equals 2,147,483,647
 * uint32_t		Unsigned	32		4		0												2**32 − 1 which equals 4,294,967,295
 * int64_t		Signed		64		8		−263 which equals −9,223,372,036,854,775,808	2**63 − 1 which equals 9,223,372,036,854,775,807
 * uint64_t		Unsigned	64		8		0												2**64 − 1 which equals 18,446,744,073,709,551,615
 *
 */

	if (isalnum('K'))	printf("isalnum('K') Doğru\n");
	else	printf("isalnum('K') Yanlış\n");

	if (isalnum('O'))	printf("isalnum('O') Doğru\n");
	else	printf("isalnum('O') Yanlış\n");

	if (isalnum('5'))	printf("isalnum('5') Doğru\n");
	else	printf("isalnum('5') Yanlış\n");

	if (isalnum('#'))	printf("isalnum('#') Doğru\n");
	else	printf("isalnum('#') Yanlış\n");

	if (isalpha('e'))	printf("isalpha('e') Doğru\n");
	else	printf("isalpha('e') Yanlış\n");

	if (iscntrl('\n'))	printf("iscntrl('\\n') Doğru\n");
	else	printf("iscntrl('\n') Yanlış\n");

	if (isdigit('3'))	printf("isdigit('3') Doğru\n");
	else	printf("isdigit('3') Yanlış\n");

	if (isgraph('5'))	printf("isgraph('5') Doğru\n");
	else	printf("isgraph('5') Yanlış\n");

	if (isgraph(' '))	printf("isgraph(' ') Doğru\n");
	else	printf("isgraph(' ') Yanlış\n");

	if (islower('e') && isupper('Y'))	printf("islower('e') && isupper('Y') Doğru\n");
	else	printf("islower('e') && isupper('Y') Yanlış\n");

	if (isprint(' '))	printf("isprint(' ') Doğru\n");
	else	printf("isprint(' ') Yanlış\n");

	if (ispunct(';'))	printf("ispunct(';') Doğru\n");
	else	printf("ispunct(';') Yanlış\n");

	if (isspace(' ') && isspace('\t') && isspace('\n')) printf("isspace(' ') & isspace('\\t') & isspace('\\n') Doğru\n");
	else	printf("isspace(' ') & isspace('\\t') & isspace('\\n') Yanlış");

	/*
	 * 	Sr.No.	Function & Description
	 * 	1		int isalnum(int c)
	 *			This function checks whether the passed character is alphanumeric.
	 *
	 *	2		int isalpha(int c)
	 *			This function checks whether the passed character is alphabetic.
	 *
	 *	3		int iscntrl(int c)
	 *			This function checks whether the passed character is control character.
	 *
	 *	4		int isdigit(int c)
	 *			This function checks whether the passed character is decimal digit.
	 *
	 *	5		int isgraph(int c)
	 *			This function checks whether the passed character has graphical representation using locale.
	 *
	 *	6		int islower(int c)
	 *			This function checks whether the passed character is lowercase letter.
	 *
	 *	7		int isprint(int c)
	 *			This function checks whether the passed character is printable.
	 *
	 *	8		int ispunct(int c)
	 *			This function checks whether the passed character is a punctuation character.
	 *
	 *	9		int isspace(int c)
	 *			This function checks whether the passed character is white-space.
	 *
	 *	10		int isupper(int c)
	 *			This function checks whether the passed character is an uppercase letter.
	 *
	 *	11		int isxdigit(int c)
	 *			This function checks whether the passed character is a hexadecimal digit.
	 *
	 *	The library also contains two conversion functions that accepts and returns an "int".
	 *
	 *	Sr.No.	Function & Description
	 *	1		int tolower(int c)
	 *			This function converts uppercase letters to lowercase.
	 *
	 *	2		int toupper(int c)
	 *			This function converts lowercase letters to uppercase.
	 */








    return 0;
}

/* ***** Ana Fonksiyon Sonu ***** */
/* ------------------------------ */

void print_string(char *dize){
    if (*dize != '\0'){
        printf("%c", *dize);
        dize++;
        print_string(dize);
    }
}

void insan_yazdir(Insan nesne){
	printf("Adı: %s\n", nesne.ad);
	printf("Soyadı: %s\n", nesne.soyad);
	printf("Yaşı: %d\n", nesne.yas);
	printf("Mesleği: %s\n", nesne.meslek);
	printf("Adresi: %s\n", nesne.adres);
}

void nokta_yazdir(Nokta nesne[]){

	for (int i = 0; i < 10; i++)
		printf("nokta #%d = %d - %d\n", i, nesne[i].x, nesne[i].y);

}
