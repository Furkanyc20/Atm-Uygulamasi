#include <stdio.h>

int main() {
	int YapilacakIslem = 0, Sorgu, GirilenparaMiktari;
 	float bakiye= 100, GirilenParaMiktari;
	
	
	while (YapilacakIslem != 4) {
		printf("Yapmak istediginiz islemi secin;\n\n1 - Para Cekme\n2 - Para Yatirma\n3 - Hesap Bakiyesi\n4 - Cikis\nlutfen yapmak istediginiz islemin numarasini girin:");
		scanf_s("%d", &YapilacakIslem);

		switch (YapilacakIslem)
		{
		case 1:
			printf("Bakiyeniz:%.2f\nCekmek istediginiz tutari giriniz:", bakiye);
			scanf_s("%f", &GirilenParaMiktari);
			if (GirilenParaMiktari <= bakiye) {
				printf("Cekilecek tutar:%.2f\nEmin misiniz?\n1 - Evet\n2 - Hayir\nLutfen Seciniz:", GirilenParaMiktari);
				scanf_s("%d", &Sorgu);
				switch (Sorgu)
				{
				case 1:
					bakiye -= GirilenParaMiktari;
					printf("Hesapta kalan para:%.2f\nIsleminiz basariyla gerceklesti.\n", bakiye);
					break;
				case 2:
					printf("isleminiz iptal edildi\n");
					break;
				default:
					printf("lutfen gecerli bir numara griniz!\n");
					break;
				}

			}
			else {
				printf("Yetersiz Bakiye!\n");
			}
			break;
		case 2:
			printf("Yatirmak istediginiz tutari giriniz:");
			scanf_s("%d", &GirilenparaMiktari);

			if (GirilenparaMiktari <= 0) {
				printf("Lutfen Girilen Tutarý Konrtrol ediniz!\n");
			}
			else {
				printf("Yatirilacak tutar:%d\nEmin misiniz?\n1 - Evet\n2 - Hayir\nLutfen Seciniz:", GirilenparaMiktari);
				scanf_s("%d", &Sorgu);
				switch (Sorgu)
				{
				case 1:
					bakiye += GirilenparaMiktari;
					printf("Guncel Bakiyeniz:%.2f\nIsleminiz basariyla gerceklesti.\n", bakiye);
					break;
				case 2:
					printf("isleminiz iptal edildi\n");
					break;
				default:
					printf("lutfen gecerli bir numara griniz!\n");
					break;
				}
			}

			break;
		case 3:
			printf("Bakiye:%f\n", bakiye);
			break;
		case 4: break;
		default:
			printf("lutfen gecerli bir numara griniz!");
			break;
		}
	}




	return 0;
}