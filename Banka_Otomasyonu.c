#include <stdio.h>

int main() {
    int bakiye = 1000, tutar, tercih;
    int devam = 1;

    while (devam) {
        printf("\nYapmak Istediginiz Işlemi Seciniz:\n");
        printf("1. Para Cekme\n");
        printf("2. Para Yatirma\n");
        printf("3. Havale\n");
        printf("4. Bakiye Sorgulama\n");
        printf("5. Kart Iade\n");
        printf("6. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &tercih);

        switch (tercih) {
            case 1:
                printf("\nÇekilecek Tutar: ");
                scanf("%d", &tutar);

                if (tutar > bakiye) {
                    printf("Yetersiz Bakiye\n");
                } else {
                    bakiye -= tutar;
                    printf("Cekilen Tutar: %d TL\n", tutar);
                    printf("Kalan Bakiye: %d TL\n", bakiye);
                }
                break;

            case 2:
                printf("\nYatırılacak Tutar: ");
                scanf("%d", &tutar);
                bakiye += tutar;
                printf("Yatırılan Tutar: %d TL\n", tutar);
                printf("Bakiye: %d TL\n", bakiye);
                break;

            case 3:
                printf("\nHavale Miktarı: ");
                scanf("%d", &tutar);

                if (tutar > bakiye) {
                    printf("Yetersiz Bakiye\n");
                } else {
                    bakiye -= tutar;
                    printf("Havale Miktarı: %d TL\n", tutar);
                    printf("Kalan Bakiye: %d TL\n", bakiye);
                }
                break;

            case 4:
                printf("\nBakiye: %d TL\n", bakiye);
                break;

            case 5:
                printf("\nBizi Tercih Ettiğiniz İçin Tesekkur Ederiz...\n");
                break;

            case 6:
                devam = 0;
                break;

            default:
                printf("\nGecersiz Islem\n");
                break;
        }

        if (devam) {
            printf("----------------------------------\n");
            printf("Bakiye: %d TL\n", bakiye);
            tercih = 0;
        }
    }

    return 0;
}