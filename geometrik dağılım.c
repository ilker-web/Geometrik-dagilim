#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi;
    float p,formul,ortalama,varyans;

    while (1){
        printf("\nDeneme sayisini giriniz : ");
        scanf("%d",&sayi);

        printf("Basari olasiligini giriniz : ");
        scanf("%f",&p);
        if (p > 1 || p < 0) {
            printf("P degeri 1 den buyuk yada 0 dan kucuk olamaz!\n");
            continue;
        }

        double a = pow(1 - p , sayi - 1);
        double b = pow(p, 2);

        formul = p * a;
        ortalama = 1 / p;
        varyans = (1 - p) / b;

        printf("\nIste geometrik dagilimin cevabi     : %.4f",formul);
        printf("\nIste geometrik dagilimin ortalamasi : %.4f",ortalama);
        printf("\nIste geometrik dagilimin varyansi   : %.4f\n",varyans);
    }
    return 0;
}
