//
//  main.c
//  2.KISA SINAV
//
//  Created by Enes Turan on 23.12.2023.
//
#include <stdio.h>

typedef struct AcikArtirma {
float baslangicFiyati , enYuksekTeklif ; // baslangicfiyati ve enYuksekteklif in tanimlanmasi
};

void artirmayiBaslat(struct AcikArtirma* artirma, float baslangicFiyati) { //artirmayiBaslat fonksiyonunun tanimlanmasi
artirma[0].baslangicFiyati = baslangicFiyati;
artirma[0].enYuksekTeklif = baslangicFiyati;
}

void odeme(struct AcikArtirma* artirma) {  //teklif vermemizi sağlayan fonksiyonun tanimlanmasi
float teklif ; // teklifin tanimlanmasi
    
printf("Lutfen teklifinizi giriniz : "); // lutfen teklif giriniz yazisinin ekrana yazdirilmasi
scanf("%f", &teklif); // kullanicidan teklif alinmasi

if (teklif > artirma[0].enYuksekTeklif) { // yeni teklif , en son söylenen tekliften yuksek ise teklifi guncelliyoruz
artirma[0].enYuksekTeklif = teklif;
}else{
    printf("Teklifiniz en yuksek tekliften yuksek olmalidir  \n ") ;
}
}
int main(int argc, const char * argv[]) {

struct AcikArtirma OdevArtirmasi;
float baslangicFiyati;
int katilimciSayisi;

printf("Artirmayi baslatmak icin lutfen bir fiyat giriniz : "); // kullanicidan baslangic fiyati isteme
scanf("%f", &baslangicFiyati);

printf("Katilimci sayisini girin: "); // kullanicidan katilimci sayisini isteme
scanf("%d", &katilimciSayisi);

artirmayiBaslat(&OdevArtirmasi, baslangicFiyati); // artirmayi baslatan fonksiyonun cagirilmasi
    
for (int i = 0; i < katilimciSayisi; i++) { // her bir katilimcinin teklif vermesini saglama
odeme(&OdevArtirmasi);
}
printf(" Kazanan Katilimci : %.2f TL veren katilimcimiz \n ",   OdevArtirmasi.enYuksekTeklif); // kazanan katilimcinin ekrana yazdirilmasi
return 0;
}
