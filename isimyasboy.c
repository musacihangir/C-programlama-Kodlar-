//kullanıcıdan isim,yas,boy alıp ekrana yazdırma

#include<stdio.h>

int main() {
    
    char isim[25];
    int yas;
    double boy;
    
   printf("İsminizi girin:");
    
        scanf("%s", &isim);
            
   printf("Yasinizi girin:");
    
        scanf("%d", &yas);
    
    printf("Boyunuzu girin:");
        
        scanf("%lf", &boy);
    
    printf("Adınız:%s \n"
           "Yasiniz:%d \n"
           "Boyunuz: %.2f\n",
           isim, yas, boy);
    
    return 0;
}
