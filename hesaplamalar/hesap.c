#include <stdio.h>
#include <string.h>

int main(){

	int not[] = {8,9,1,2,7,5,4,6,3};

	int toplam = 0;
	int ortalama = 0;
	int eleman = sizeof(not)/sizeof(not[0]);

	for(int i = 0; i < eleman; i++){
		toplam = toplam + not[i];
	}

	ortalama = toplam / eleman;

	printf("toplam: %d\n", toplam);
	printf("ortalama: %d\n", ortalama);
	printf("eleman: %d\n", eleman);

	char test[4] = "test";
	printf("%s\n", test);

	for(int i = 0; i < 10; i++){
		printf("%c", test[i]);
	}
	printf("\n");
	int length = strlen(test);
	printf("length: %d", length);

	return 0;
}


