#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include "degiskenler.h"
#include "fonksiyonlar.h"


int main(void){


	/* **********Getting Started********** */

	/*
	 *--------------------------------------hello.c
	 */
	//	#include <stdio.h>

	//	int main(void) {
	//		printf("Hello World!\n");
	//		return 0;
	//	}

	//	Compile hello.c file with gcc
	//	$ gcc hello.c -o hello

	//	Run the compiled binary hello
	//	$ ./hello

	//	Output => Hello World!

	/*
	 *--------------------------------------Variables
	 */
	myNum = 15;

	int myNum2; // do not assign, then assign
	myNum2 = 15;
	printf("myNum2: %d\n", myNum2);

	int myNum3 = 15; // myNum3 is 15
	myNum3 = 10;     // myNum3 is now 10
	printf("myNum3: %d\n", myNum3);

	myFloat = 5.99; // floating point number
	myLetter = 'D';  // character

	x = 5;
	y = 6;
	sum = x + y; // add variables to sum

	// declare multiple variables
	int x = 5, y = 6, z = 50;
	printf("x: %d - y: %d - z: %d\n", x, y, z);

	/*
	 *--------------------------------------Constants
	 */
	const int minutesPerHour = 60;
	printf("const int minutesPerHour: %d\n", minutesPerHour);
	const float PI = 3.14;
	printf("const float PI: %f\n", PI);

	//Best Practices
	const int BIRTHYEAR = 1980;
	printf("const int BIRTHYEAR: %d\n", BIRTHYEAR);

	/*
	 *--------------------------------------Comment
	 */
	// this is a comment
	printf("Hello World!\n"); // Can comment anywhere in file

	/*Multi-line comment, print Hello World!
to the screen, it's awesome */

	/*
	 *--------------------------------------Print text
	 */
	printf("I am learning C.\n");
	testInteger = 5;
	printf("Number = %d\n", testInteger);

	f = 5.99; // floating point number
	printf("Value = %f\n", f);

	a = 0b1010110; // binary number
	b = 02713; // octal number
	c = 0X1DAB83; // hexadecimal number

	// output in octal form
	printf("a=%ho, b=%o, c=%lo\n", a, b, c);
	// output => a=126, b=2713, c=7325603

	// Output in decimal form
	printf("a=%hd, b=%d, c=%ld\n", a, b, c);
	// output => a=86, b=1483, c=1944451

	// output in hexadecimal form (letter lowercase)
	printf("a=%hx, b=%x, c=%lx\n", a, b, c);
	// output => a=56, b=5cb, c=1dab83

	// Output in hexadecimal (capital letters)
	printf("a=%hX, b=%X, c=%lX\n", a, b, c);
	// output => a=56, b=5CB, c=1DAB83

	/*
	 *--------------------------------------Control the number of spaces
	 */
	int a1 = 20, a2 = 345, a3 = 700;
	int b1 = 56720, b2 = 9999, b3 = 20098;
	int c1 = 233, c2 = 205, c3 = 1;
	int d1 = 34, d2 = 0, d3 = 23;

	printf("%-9d %-9d %-9d\n", a1, a2, a3);
	printf("%-9d %-9d %-9d\n", b1, b2, b3);
	printf("%-9d %-9d %-9d\n", c1, c2, c3);
	printf("%-9d %-9d %-9d\n", d1, d2, d3);

	//output result
/*	20        345       700
	56720     9999      20098
	233       205       1
	34        0         23		*/
	//In %-9d, d means to output in 10 base, 9 means to occupy at least 9 characters width, and the width is not enough to fill with spaces, - means left alignment

	/*
	 *--------------------------------------Strings
	 */
	char greetings0[] = "Hello World!\n";
	printf("%s", greetings0);

	//access string
	char greetings1[] = "Hello World!\n";
	printf("%c", greetings1[0]);

	//modify string
	char greetings2[] = "Hello World!\n";
	greetings2[0] = 'J';

	printf("%s", greetings2);
	// prints "Jello World!"

	//Another way to create a string
	char greetings3[] = {'H','e','l','l','\0'};

	printf("%s\n", greetings3);
	// print "Hell!"

	//Creating String using character pointer (String Literals)
	char *greetings_ptr = "Hello";
	printf("%s\n", greetings_ptr);
	// print "Hello!"

	//NOTE: String literals might be stored in read-only section of memory. Modifying a string literal invokes undefined behavior. You can't modify it.!

	//C does not have a String type, use char type and create an array of characters

	/*
	 *--------------------------------------Condition
	 */
	time = 20;
	if (time < 18) {
		printf("Goodbye!\n");
	} else {
		printf("Good evening!\n");
	}
	// Output -> "Good evening!"
	time = 22;
	if (time < 10) {
		printf("Good morning!\n");
	} else if (time < 20) {
		printf("Goodbye!\n");
	} else {
		printf("Good evening!\n");
	}
	// Output -> "Good evening!"

	/*
	 *--------------------------------------Ternary operator
	 */
	age = 20;
	(age > 19) ? printf("Adult\n") : printf("Teenager\n");

	/*
	 *--------------------------------------Switch
	 */
	int gun = 4;

	switch (gun) {
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	default:
		printf("Weekend!\n");
	}
	// output -> "Thursday" (day 4)

	/*
	 *--------------------------------------While Loop
	 */
	i = 0;

	while (i < 5) {
		printf("%d\n", i);
		i++;
	}
	//NOTE: Don't forget to increment the variable used in the condition, otherwise the loop will never end and become an "infinite loop"!

	/*
	 *--------------------------------------Do/While Loop
	 */
	i = 0;

	do {
		printf("%d\n", i);
		i++;
	} while (i < 5);

	/*
	 *--------------------------------------For Loop
	 */
	for (int i = 0; i < 5; i++) {
		printf("%d\n", i);
	}

	/*
	 *--------------------------------------Break out of the loop Break/Continue
	 */
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			break;
		}
		printf("%d\n", i);
	}

	//break out of the loop when i is equal to 4
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		printf("%d\n", i);
	}
	//Example to skip the value of 4

	/*
	 *--------------------------------------While Break Example
	 */
	int i = 0;

	while (i < 10) {
		if (i == 4) {
			break;
		}
		printf("%d\n", i);

		i++;
	}

	/*
	 *--------------------------------------While continue example
	 */
	i = 0;

	while (i < 10) {
		i++;

		if (i == 4) {
			continue;
		}
		printf("%d\n", i);
	}

	/*
	 *--------------------------------------Arrays
	 */
	int myNumbers0[] = {25, 50, 75, 100};

	printf("%d", myNumbers0[0]);
	// output 25

	//change array elements
	int myNumbers1[] = {25, 50, 75, 100};
	myNumbers1[0] = 33;

	printf("%d\n", myNumbers1[0]);

	//Loop through the array
	int myNumbers2[] = {25, 50, 75, 100};

	for (int i = 0; i < 4; i++) {
		printf("%d\n", myNumbers2[i]);
	}

	//set array size
	// Declare an array of four integers:
	int myNumbers3[4];

	// add element
	myNumbers3[0] = 25;
	myNumbers3[1] = 50;
	myNumbers3[2] = 75;
	myNumbers3[3] = 100;
	printf("myNumbers3[0]: %d\n", myNumbers3[0]);

	/*
	 *--------------------------------------Enumeration Enum
	 */
	// Haftanın günlerini enum olarak tanımla, Pazartesi 1'den başlasın
	enum hafta0 { Paz = 1, Pzt, Salı, Çar, Per, Cum, Cmt };

	// Enum değişkenlerini tanımla
	enum hafta0 a, b, c;

	// Türkçe gün isimleriyle enum tanımla
	enum hafta1 { Pazartesi = 1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar };

	// Enum değişkenlerini tanımla
	enum hafta1 hft1, hft2, hft3;
	printf("hft1: %d, hft2: %d, hft3: %d\n", hft1, hft2, hft3);

	// İngilizce gün isimleriyle enum tanımla
	enum hafta2 { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

	// Enum değişkenlerine değer ata
	enum hafta2 x1 = Monday, y1 = Wednesday, z1 = Saturday;
	printf("x1: %d, y1: %d, z1: %d\n", x1, y1, z1);

	// Türkçe ay isimleriyle enum tanımla
	enum ay { Ocak = 1, Subat, Mart, Nisan, Mayıs, Haziran, Temmuz, Agustos, Eylul, Ekim, Kasım, Aralık };

	// Enum değişkenlerine değer ata
	enum ay m = Ocak, n = Subat, o = Mart;
	printf("m: %d, n: %d, o: %d\n", m, n, o);

	/*
	 *--------------------------------------Enumerate sample applications
	 */
	enum week {Mon = 1, Tues, Wed, Thurs} day;
	printf("bir ile dört arasında bir rakam girin: ");
	scanf("%d", &day);

	switch(day) {
	case Mon: puts("Monday"); break;
	case Tues: puts("Tuesday"); break;
	case Wed: puts("Wednesday"); break;
	case Thurs: puts("Thursday"); break;
	default: puts("Error!");
	}

	/*
	 *--------------------------------------User input
	 */
	// Create an integer variable to store the number we got from the user
	int myNum;

	// Ask the user to enter a number
	printf("Please enter a number: ");

	// Get and save the number entered by the user
	scanf("%d", &myNum);

	// Output the number entered by the user
	printf("The number you entered: %d\n", myNum);

	/*
	 *--------------------------------------User input string
	 */
	// create a string
	char firstName[30];
	// Ask the user to enter some text
	printf("Enter your name: ");
	// get and save the text
	scanf("%s", &firstName);
	// output text
	printf("Hello %s.\n", firstName);

	/*
	 *--------------------------------------memory address
	 */
	//When a variable is created, it is assigned a memory address

	myAge = 43;

	printf("%p\n", &myAge);
	// Output: 0x7ffe5367e044
	//To access it, use the reference operator (&)

	/*
	 *--------------------------------------create pointer
	 */
	myAge = 43; // an int variable
	printf("%d\n", myAge); // output the value of myAge(43)

	// Output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", &myAge);

	/*
	 *--------------------------------------pointer variable
	 */
	myAge = 43; // an int variable
	int* ptr = &myAge; // pointer variable named ptr, used to store the address of myAge

	printf("%d\n", myAge); // print the value of myAge (43)

	printf("%p\n", &myAge); // output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", ptr); // use the pointer (0x7ffe5367e044) to output the memory address of myAge


	/*
	 *--------------------------------------Dereference
	 */
	myAge = 43; // variable declaration
	ptr = &myAge; // pointer declaration

	// Reference: output myAge with a pointer
	// memory address (0x7ffe5367e044)
	printf("%p\n", ptr);
	// dereference: output the value of myAge with a pointer (43)
	printf("%d\n", *ptr);


	/* **********Operators********** */

	/*
	 *--------------------------------------Arithmetic Operators
	 */
	myNum = 100 + 50;
	sum1 = 100 + 50; // 150 (100 + 50)
	sum2 = sum1 + 250; // 400 (150 + 250)
	sum3 = sum2 + sum2; // 800 (400 + 400)
	/*	+	Add	x + y
	-	Subtract	x - y
	 *	Multiply	x * y
	/	Divide	x / y
	%	Modulo	x % y
	++	Increment	++x
	--	Decrement	--x		*/

	/*
	 *--------------------------------------Assignment operator
	 */
	/*	x = 5	x = 5
	x += 3	x = x + 3
	x -= 3	x = x - 3
	x *= 3	x = x * 3
	x /= 3	x = x / 3
	x %= 3	x = x % 3
	x &= 3	x = x & 3
	x |= 3	x = x | 3
	x ^= 3	x = x ^ 3
	x >>= 3	x = x >> 3
	x <<= 3	x = x << 3		*/

	/*
	 *--------------------------------------Comparison operator
	 */
	x = 5;
	y = 3;

	printf("%d", x > y);
	// returns 1 (true) because 5 is greater than 3

	/*	==	equals	x == y
	!=	not equal to	x != y
	>	greater than	x > y
	<	less than	x < y
	>=	greater than or equal to	x >= y
	<=	less than or equal to	x <= y		*/

	//Comparison operators are used to compare two values

	/*
	 *--------------------------------------Logical Operators
	 */
	/*	&&	and logical	returns true if both statements are true	x < 5 && x < 10
	||	or logical	returns true if one of the statements is true	x < 5 || x < 4
	!	not logical	Invert result, return false if true	!(x < 5 && x < 10)		*/

	/*
	 *--------------------------------------Operator Examples
	 */
	unsigned int ui1 = 60; /*60 = 0011 1100 */
	printf("ui1: %d\n", ui1);
	unsigned int ui2 = 13; /*13 = 0000 1101 */
	printf("ui2: %d\n", ui2);
	int i1 = 0;
	printf("i1: %d\n", i1);

	c = a & b; /*12 = 0000 1100 */
	printf("Line 1 -the value of c is %d\n", c);

	c = a | b; /*61 = 0011 1101 */
	printf("Line 2 -the value of c is %d\n", c);
	c = a ^ b; /*49 = 0011 0001 */
	printf("Line 3 -the value of c is %d\n", c);
	c = ~a; /*-61 = 1100 0011 */
	printf("Line 4 -The value of c is %d\n", c);
	c = a << 2; /*240 = 1111 0000 */
	printf("Line 5 -the value of c is %d\n", c);
	c = a >> 2; /*15 = 0000 1111 */
	printf("Line 6 -The value of c is %d\n", c);

	/*
	 *--------------------------------------Bitwise operators
	 */
	/*	&	Bitwise AND operation, "AND" operation by binary digits	(A & B) will get 12 which is 0000 1100
	|	Bitwise OR operator, "or" operation by binary digit	(A | B) will get 61 which is 0011 1101
	^	XOR operator, perform "XOR" operation by binary digits	(A ^ B) will get 49 which is 0011 0001
	~	Inversion operator, perform "inversion" operation by binary bit	(~A) will get -61 which is 1100 0011
	<<	binary left shift operator	A << 2 will get 240 which is 1111 0000
	>>	binary right shift operator	A >> 2 will get 15 which is 0000 1111		*/


	/* **********Data Types********** */

	/*
	 *--------------------------------------Basic data types
	 */
	/*	char	1 byte	−128 ~ 127	single character/alphanumeric/ASCII
	signed char	1 byte	−128 ~ 127	-
	unsigned char	1 byte	0 ~ 255	-
	int	2 to 4 bytes	−32,768 ~ 32,767	store integers
	signed int	2 bytes	−32,768 ~ 32,767
	unsigned int	2 bytes	0 ~ 65,535
	short int	2 bytes	−32,768 ~ 32,767
	signed short int	2 bytes	−32,768 ~ 32,767
	unsigned short int	2 bytes	0 ~ 65,535
	long int	4 bytes	-2,147,483,648 ~ 2,147,483,647
	signed long int	4 bytes	-2,147,483,648 ~ 2,147,483,647
	unsigned long int	4 bytes	0 ~ 4,294,967,295
	float	4 bytes	3.4E-38 ~ 3.4E+38
	double	8 bytes	1.7E-308 ~ 1.7E+308
	long double	10 bytes	3.4E-4932 ~ 1.1E+4932		*/

	/*
	 *--------------------------------------Data types
	 */
	// create variables
	myNum = 5; // integer
	myFloatNum = 5.99; // floating point number
	myLetter = 'D'; // string
	// High precision floating point data or numbers
	double myDouble = 3.2325467;
	// print output variables
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	printf("%lf\n", myDouble);
	/*	char	character type
	short	short integer
	int	integer type
	long	long integer
	float	single-precision floating-point type
	double	double-precision floating-point type
	void	no type		*/

	/*
	 *--------------------------------------Basic format specifiers
	 */
	/*	%d or %i	int integer
	%f	float single-precision decimal type
	%lf	double high precision floating point data or number
	%c	char character
	%s	for strings strings		*/

	/*
	 *--------------------------------------Basic format specifiers
	 */
	/*	Octal	%ho	%o	%lo
	Decimal	%hd	%d	%ld
	Hexadecimal	%hx /%hX	%x /%X	%lx /%lX		*/

	/*
	 *--------------------------------------Data format example
	 */
	myNum = 5;
	myFloatNum = 5.99; // floating point number
	myLetter = 'D';     // string
	// print output variables
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);


	/* **********C Preprocessor********** */

	/*
	 *--------------------------------------Preprocessor Directives
	 */

	/*	#define		define a macro
	#include	include a source code file
	#undef		undefined macro
	#ifdef		Returns true if the macro is defined
	#ifndef		Returns true if the macro is not defined
	#if			Compile the following code if the given condition is true
	#else		Alternative to #if
	#elif		If the #if condition is false, the current condition is true
	#endif		End a #if...#else conditional compilation block
	#error		Print an error message when standard error is encountered
	#pragma		Issue special commands to the compiler using the standardized method		*/

	// replace all MAX_ARRAY_LENGTH with 20
#define MAX_ARRAY_LENGTH 20
	// Get stdio.h from the system library
	//#include <stdio.h>
	// Get myheader.h in the local directory
	//#include "myheader.h"
#undef FILE_SIZE
#define FILE_SIZE 42 // undefine and define to 42

	/*
	 *--------------------------------------Predefined macros
	 */

	/*	__DATE__	The current date, a character constant in the format "MMM DD YYYY"
	__TIME__	The current time, a character constant in the format "HH:MM:SS"
	__FILE__	This will contain the current filename, a string constant
	__LINE__	This will contain the current line number, a decimal constant
	__STDC__	Defined as 1 when the compiler compiles against the ANSI standard		*/
	//ANSI C defines a number of macros that you can use, but you cannot directly modify these predefined macros

	//Predefined macro example

	printf("File :%s\n", __FILE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);
	printf("Line :%d\n", __LINE__);
	printf("ANSI :%d\n", __STDC__);

	/*
	 *--------------------------------------Macro continuation operator ()
	 */
	//A macro is usually written on a single line.

#define message_for(a, b) \
		printf(#a " and " #b ": We love you!\n")
	//If the macro is too long to fit on a single line, use the macro continuation operator backslash

	/*
	 *--------------------------------------String Constantization Operator (#)
	 */
#define message_for(a, b) \
		printf(#a " and " #b ": We love you!\n")

	message_for(Carole, Debra);

	//When the above code is compiled and executed, it produces the following result:
	//Carole and Debra: We love you!
	//When you need to convert a macro parameter to a string constant, use the string constant operator #

	/*
	 *--------------------------------------tag paste operator (##)
	 */
#define tokenpaster(n) printf ("token" #n " = %d", token##n)

	int token34 = 40;
	tokenpaster(34);

	/*
	 *--------------------------------------defined() operator
	 */
#if !defined (MESSAGE)
#define MESSAGE "You wish!"
#endif


	printf("Here is the message: %s\n", MESSAGE);

	/*
	 *--------------------------------------Parameterized macros
	 */
	int square(int x){
		return x * x;
	}
	//The macro rewrites the above code as follows:


#define square(x) ( (x) * (x) )
	//No spaces are allowed between the macro name and the opening parenthesis

#define MAX(x,y) ( (x) > (y) ? (x) : (y) )

	printf("Max between 20 and 10 is %d\n", MAX(10, 20));

	/* **********C Function********** */

	/*
	 *--------------------------------------Function declaration and definition
	 */
	//int main(void) {
	//	printf("Hello World!");
	//
	//	return 0;
	//}

	//The function consists of two parts
	//void myFunction() { // declaration declaration
	// function body (code to be executed) (definition)
	//}
//Declaration declares the function name, return type and parameters (if any)
//Definition function body (code to execute)

// function declaration
//void myFunction();
// main method
//int main() {
//	myFunction(); // --> call the function
//
//	return 0;
//}

//void myFunction() {// Function definition
//	printf("Good evening!");
//}

/*
 *--------------------------------------Call function
 */
// create function
//void myFunction() {
//	printf("Good evening!");
//}

//int main() {
//	myFunction(); // call the function
//	myFunction(); // can be called multiple times
//
//	return 0;
//}
// Output -> "Good evening!"
// Output -> "Good evening!"

/*
 *--------------------------------------Function parameters
 */
//void myFunction(char name[]) {
//	printf("Hello %s\n", name);
//}

myFunction("Liam");
myFunction("Jenny");

// Hello Liam
// Hello Jenny

/*
 *--------------------------------------Multiple parameters
 */
//void myFunction2(char name[], int age) {
//	printf("Hi %s, you are %d years old.\n",name,age);
//}

myFunction2("Liam", 3);
myFunction2("Jenny", 14);


// Hi Liam you are 3 years old.
// Hi Jenny you are 14 years old.

/*
 *--------------------------------------Return value
 */
//int myFunction3(int x) {
//	return 5 + x;
//}

printf("Result: %d\n", myFunction3(3));

// output 8 (5 + 3)

//two parameters
//int myFunction4(int x, int y) {
//	return x + y;
//}

printf("Result: %d\n", myFunction4(5, 3));
// store the result in a variable
result = myFunction4(5, 3);
printf("Result = %d\n", result);

// result: 8 (5 + 3)
// result = 8 (5 + 3)

/*
 *--------------------------------------Recursive example
 */
result = topla(10);
printf("%d\n", result);


//int topla(int k) {
//	if (k > 0) {
//		return k + topla(k -1);
//	} else {
//		return 0;
//	}
//}

/*
 *--------------------------------------Mathematical functions
 */


//#include <math.h>

printf("%f\n", sqrt(16)); // square root
printf("%f\n", ceil(1.4)); // round up (round)
printf("%f\n", floor(1.4)); // round up (round)
printf("%f\n", pow(4, 3)); // x(4) to the power of y(3)

/*	abs(x) absolute value
	acos(x) arc cosine value
	asin(x) arc sine
	atan(x) arc tangent
	cbrt(x) cube root
	cos(x) cosine
	the value of exp(x) Ex
	sin(x) the sine of x
	tangent of tan(x) angle		*/


/* **********C Structures********** */

/*
 *--------------------------------------Create structure
 */
struct myStructure0 { // structure declaration
	int myNum; // member (int variable)
	char myLetter; // member (char variable)
}; // end the structure with a semicolon
//Create a struct variable called s0

	struct myStructure0 s0;
	s0.myNum = 1;

/*
 *--------------------------------------Strings in the structure
 */
struct myStructure1 {
	int sayi;
	char harf;
	char metin[30]; // String
};

	struct myStructure1 s1;
	strcpy(s1.metin, "Some text");
	// print value
	printf("my string: %s\n", s1.metin);

//Assigning values ​​to strings using the strcpy function

/*
 *--------------------------------------Accessing structure members
 */
	// create a structure called myStructure
	struct myStructure2 {
	int myNum;
	char myLetter;
};

	// Create a structure variable called myStructure called s1
	struct myStructure2 s2_1;
	// Assign values ​​to the members of s1
	s2_1.myNum = 13;
	s2_1.myLetter = 'B';

	// Create a structure variable of myStructure called s2
	// and assign it a value
	struct myStructure2 s2_2 = {13, 'B'};
	// print value
	printf("My number: %d\n", s2_2.myNum);
	printf("My letter: %c\n", s2_2.myLetter);

//Create different structure variables
struct myStructure2 s2_3;
struct myStructure2 s2_4;
// Assign values ​​to different structure variables
s2_3.myNum = 13;
s2_3.myLetter = 'B';

s2_4.myNum = 20;
s2_4.myLetter = 'C';

/*
 *--------------------------------------Copy structure
 */
struct myStructure1 s1_2 = {
		13, 'B', "Some text"
};

struct myStructure1 s1_3;
s1_3 = s1_2;
printf("s1_3.sayi: %d\n", s1_3.sayi);
//In the example, the value of s1 is copied to s2

/*
 *--------------------------------------Modify value
 */
// Create a struct variable and assign it a value
struct myStructure2 s2_5 = {13, 'B'};
// modify the value
s2_5.myNum = 30;
s2_5.myLetter = 'C';
// print value
printf("%d %c\n", s2_5.myNum, s2_5.myLetter);


/* **********file processing********** */

/*
 *--------------------------------------File processing function
 */
/*	fopen()	open a new or existing file
	fprintf()	write data to file
	fscanf()	read data from a file
	fputc()	write a character to file
	fgetc()	read a character from a file
	fclose()	close the file
	fseek()	set the file pointer to the given position
	fputw()	Write an integer to a file
	fgetw()	read an integer from a file
	ftell()	returns the current position
	rewind()	set the file pointer to the beginning of the file		*/
//There are many functions in the C library to open/read/write/search and close files

/*
 *--------------------------------------Open mode parameter
 */
/*	r	Open a text file in read mode, allowing the file to be read
	w	Open a text file in write mode, allowing writing to the file
	a	Open a text file in append mode
	If the file does not exist, a new one will be created
	r+	Open a text file in read-write mode, allowing reading and writing of the file
	w+	Open a text file in read-write mode, allowing reading and writing of the file
	a+	Open a text file in read-write mode, allowing reading and writing of the file
	rb	Open a binary file in read mode
	wb	Open binary file in write mode
	ab	Open a binary file in append mode
	rb+	open binary file in read-write mode
	wb+	Open binary file in read-write mode
	ab+	open binary file in read-write mode		*/


/*
 *--------------------------------------Open the file: fopen()
 */
	fp = fopen("file_handle.txt", "r");

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
	fclose(fp);
	printf("\n");

//After performing all operations on the file, the file must be closed with fclose()

/*
 *--------------------------------------Write to file: fprintf()
 */
	fp = fopen("file.txt", "w"); // open the file

	// write data to file
	fprintf(fp, "Hello file for fprintf..\n");
	fclose(fp); // close the file

/*
 *--------------------------------------Read the file: fscanf()
 */
	char buff[255]; // Create a char array to store file data
	fp = fopen("file.txt", "r");

	while(fscanf(fp, "%s", buff) != EOF) {
		printf("%s ", buff);
	}
	fclose(fp);
	printf("\n");
/*
 *--------------------------------------Write to file: fputc()
 */
	fp = fopen("file1.txt", "w"); // open the file
	fputc('a',fp); // write a single character to the file
	fclose(fp); // close the file
	printf("\n");

/*
 *--------------------------------------Read the file: fgetc()
 */
	//system("clear");

	fp = fopen("myfile.txt", "r");

	while( (ch = fgetc(fp) ) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
	printf("\n");

	getchar();

/*
 *--------------------------------------Write to file: fputs()
 */
	//system("clear");

	fp = fopen("myfile2.txt","w");
	fputs("hello c programming",fp);
	fclose(fp);
	printf("\n");

	getchar();

/*
 *--------------------------------------Read files: fgets()
 */
	char text[300];

	//system("clear");

	fp = fopen("myfile2.txt", "r");
	printf("%s", fgets(text, 200, fp));
	fclose(fp);
	printf("\n");

	getchar();

/*
 *--------------------------------------fseek()
 */
	fp = fopen("myfile.txt","w+");
	fputs("This is Book", fp);

	// Set file pointer to the given position
	fseek(fp, 7, SEEK_SET);

	fputs("Kenny Wong", fp);
	fclose(fp);
	printf("\n");

//set the file pointer to the given position

/*
 *--------------------------------------rewind()
 */
	//system("clear");

	fp = fopen("file.txt", "r");

	while( (ch = fgetc(fp) ) != EOF) {
		printf("%c", ch);
	}

	rewind(fp); // move the file pointer to the beginning of the file

	while( (ch = fgetc(fp) ) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
	printf("\n");

	getchar();

// output
// Hello World! Hello World!

/*
 *--------------------------------------ftell()
 */
	//system("clear");

	fp = fopen("file.txt", "r");

	fseek(fp, 0, SEEK_END);
	length = ftell(fp); // return current position
	fclose(fp);

	printf("File size: %d bytes", length);
	printf("\n");

	getchar();

// output
// file size: 25 bytes




return 0;
}
