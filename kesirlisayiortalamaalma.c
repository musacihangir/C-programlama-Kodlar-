//kesirli iki sayının ortalamasını alma

#include <stdio.h>

int main() {
    
    double sayi1, sayi2;
    
    double ort;
    
    printf("Lütfen iki sayı giriniz:");
    
    scanf("%lf %lf", &sayi1, &sayi2);
    
    ort=(sayi1+sayi2)/2;
    
    printf("iki sayının ortalaması: %.3f\n", ort);
    //.3 noktadan sonra 3 basamak olacağını gösterir
    return 0;
}
