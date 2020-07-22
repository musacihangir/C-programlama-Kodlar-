#include <stdio.h>
int main() {
//kullanıcının yazdığı iki sayıyı hesaplama
    int sayi1, sayi2, toplam;
    
    printf("İki sayi giriniz: ");
    
    scanf("%d %d", &sayi1,&sayi2);

    // toplamı hesaplama
    toplam = sayi1 + sayi2;
    
    printf("%d + %d = %d\n", sayi1, sayi2, toplam);
    
    return 0;
}
