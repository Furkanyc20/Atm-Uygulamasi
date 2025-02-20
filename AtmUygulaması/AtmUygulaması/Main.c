#include <stdio.h>


int main() {
	int islemturu, Sorgu;
	float anapara = 30000, Cekilecekpara, Yatiralacakpara;
	printf("Yapmak istenilen islemi seciniz\n");
	printf("Para Cekme - 1\nPara Yatirma - 2\nBakiye Bilgisi - 3\n");
	printf("yapmak istediginiz islemin numarasini giriniz: ");
	scanf_s("%d", &islemturu);
	if (islemturu == 1) {
		printf("Hesaptaki Para: %.00f\n", anapara);
		printf("ne kadar para cekmek isterseniz: ");
		scanf_s("%f", &Cekilecekpara);
		printf("Cekilecek Para:%.00f Emin misiniz?\nEvet - 1\nHayir -2\n", Cekilecekpara);
		scanf_s("%d", &Sorgu);
		if (Sorgu == 1) {
			if (anapara >= Cekilecekpara) {
				anapara = anapara - Cekilecekpara;
				printf("kalan tutar: %.00f", anapara);
			}
			else {
				printf("Yetersiz Bakiye:)");
			}
		}
		else if (Sorgu == 2) {
			printf("islem iptal edildi.");
		}
		else {
			printf("Hatali islem tekrar deneyiniz.");
		}
	}
	else if (islemturu == 2) {
		printf("Hesaptaki Para: %.00f\n", anapara);
		printf("Ne kadar para yatirmak isterseniz: ");
		scanf_s("%f", &Yatiralacakpara);
		if (Yatiralacakpara < 0) {
			printf("Girilen Tutar Gecersizdir!");
		}
		else if (Yatiralacakpara == 0) {
			printf("Girilen tutar sifiridir islem iptal edildi.");
		}
		else {
			printf("Girilen para: %.00f\nEmin misiniz?\nEvet - 1\nHayir - 2\n", Yatiralacakpara);
			scanf_s("%d", &Sorgu);
			if (Sorgu == 1) {
				anapara = Yatiralacakpara + anapara;
				printf("Paraniz yatirilmistir.\n Guncel Bakiye:%.00f", anapara);
			}
			else if (Sorgu == 2) {
				anapara -= Yatiralacakpara;
				printf("İsleminiz iptal edildi ");
			}
			else {
				printf("Hatali Numara Tekrar Giriniz.");
			}
		}


	}
	else if (islemturu == 3) {
		printf("Hesap Bakyesi = %.00f", anapara);
	}
	else {
		printf("Girilen sayi gecersizdir, Lutfen tekrar kontrol edin!");
	}


	return 0;
}