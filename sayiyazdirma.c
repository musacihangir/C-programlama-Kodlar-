#include <stdio.h>
// Kullanıcıdan sayı alarak ekrana sayı yazdırma
int main() {
    
    int sayi;
   
    printf("Bir sayı girin: ");
    
    // Girilen sayıyı okur ve kaydeder
    scanf("%d", &sayi);

    // ekran çıktısı yani göreceğimiz kısım
    printf("Girdiğiniz sayı: %d",sayi);
    
    return 0;
}

