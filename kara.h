#pragma once
#pragma once
#include "ulasım.h"

class kara : public ulasım {
public:
	
	void bilgi() {
		
	}
	void gidisfiyatı(int _sehir, int _sehir2) {
		arac = 40;

		string metin;
		string metin1;
		int sehir;
		int sehir2;

		ptr = &_sehir2;
		metin = il[*ptr];
	 sehir2 = metin.length();
		ptr = &_sehir;
		metin1 = il[*ptr];
		 sehir = metin1.length();
		fiyat = (sehir + sehir2) * arac;
		cout << "Bilet fiyatı: " << fiyat << " TL\n";
	}
	void gidissüresi(int _sehir,int _sehir2) {
		süre = 25;
		int saat = 0;
		int dakika = 0;
		int sure;
		int sehir1;
		int sehir2;
		ptr = &_sehir;
		string metin1;
		metin1 = il[*ptr];
		sehir1 = metin1.length() ;
		ptr = &_sehir2;
		string metin2;
		metin2 = il[*ptr];
		sehir2 = metin1.length();
		sure = (sehir1 + sehir2) * süre;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidiş süresi: " << saat << " saat " << dakika << " dakika\n";
	}
private:
	string ad;
};
