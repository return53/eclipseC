#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

#define True 1
#define False 0

int main(){

	int saat, dakika, saniye;
	saat = dakika = saniye = 0;

    printf("Saat değerini girin: ");
    scanf("%d", &saat);

    printf("Dakika değerini girin: ");
    scanf("%d", &dakika);

    // Girilen saat ve dakika değerlerini kontrol et
    if (saat < 0 || saat > 23 || dakika < 0 || dakika > 59) {
        printf("Geçersiz saat veya dakika değeri.\n");
        return 1; // Programı hata ile sonlandır
    }

	while(True){
		system("clear"); //// Terminali temizle
		//printf("\033[2J\033[H"); // Terminali temizle
		printf("%02d : %02d : %02d", saat, dakika, saniye);
		fflush(stdout);
		saniye++;

		if (saniye == 60) {
			dakika++;
			saniye = 0;
		}

		if (dakika == 60) {
			saat++;
			dakika = 0;
		}

		if (saat == 24) {
			saat = 0;
		}

		sleep(1);
	}
	return 0;
}
