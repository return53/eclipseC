// fonksiyonlar.c

#include "degiskenler.h"
#include "fonksiyonlar.h"
#include <stdio.h>



void myFunction(char name[]) {
		printf("Hello %s\n", name);
}

void myFunction2(char name[], int age) {
		printf("Hi %s, you are %d years old.\n",name,age);
	}

int myFunction3(int x) {
		return 5 + x;
	}

int myFunction4(int x, int y) {
		return x + y;
	}

int topla(int k) {
		if (k > 0) {
			return k + topla(k -1);
		} else {
			return 0;
		}
	}












