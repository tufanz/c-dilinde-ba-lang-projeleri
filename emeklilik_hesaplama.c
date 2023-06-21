#include <stdio.h>

int main() {
    char cinsiyet;
    int yas, calisma_statusu, prim_gunu, ise_giris_yili, sigorta;
    
    printf("CINSIYETINIZI YAZINIZ, E,K: ");
    scanf("%c", &cinsiyet);
    
    printf("YASINIZI GIRINIZ: ");
    scanf("%d", &yas);
    
    if ((yas <= 60 && cinsiyet == 'E') || (yas <= 50 && cinsiyet == 'K')) {
        printf("MEMUR MUSUNUZ, E,H: ");
        scanf(" %c", &calisma_statusu);
        
        if (calisma_statusu == 'H') {
            printf("PRIM GUNUNUZU GIRINIZ: ");
            scanf("%d", &prim_gunu);
        } else {
            printf("1999 ONCESINDE MI ISE GIRDINIZ, E,H: ");
            scanf(" %c", &ise_giris_yili);
            
            printf("KAC YILDIR SIGORTALI CALISIYORSUNUZ: ");
            scanf("%d", &sigorta);
        }
        
        if (cinsiyet == 'E') {
            if (yas >= 60) {
                printf("Tebrikler, ölUme az kaldı.\n");
            }
            
            if (calisma_statusu == 'E' && ise_giris_yili == 'E' && sigorta >= 24) {
                printf("ARTIK EYT'sin.\n");
            }
            
            if (calisma_statusu == 'H' && prim_gunu >= 7000) {
                printf("Haadi bakam!\n");
            }
        }
        
        if (cinsiyet == 'K') {
            if (yas >= 50) {
                printf("Tebrikler, ölUme az kaldı.\n");
            }
            
            if (calisma_statusu == 'E' && ise_giris_yili == 'E' && sigorta >= 15) {
                printf("ARTIK EYT'sin.\n");
            }
            
            if (calisma_statusu == 'H' && prim_gunu >= 3600) {
                printf("İşçisin sen, işçi kal.\n");
            }
        }
    } else {
        if (cinsiyet == 'E') {
            printf("EMEKLİSİN.\n");
        } else {
            printf("EMEKLİSİN BACIM.\n");
        }
    }
    
    return 0;
}
