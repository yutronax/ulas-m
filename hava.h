#pragma once
#pragma once
#include "ulasım.h"

class hava : public ulasım {
public:
	
	
	void bilgi2() {
		
	}
	void gidisfiyatı(int _sehir2) {
arac = 400;
		
		string metin;
		ptr = &_sehir2;
		metin = il[*ptr];
		int fiyat = metin.length() * arac;
		cout << "Bilet fiyatı: " << fiyat << " TL\n";
	}
	void gidissüresi(int _sehir) {
		süre = 15;
		int saat = 0;
		int dakika = 0;
		int sure;
		ptr = &_sehir;
		string metin1;
		metin1 = il[*ptr];
		sure = metin1.length() * süre;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidiş süresi: " << saat << " saat " << dakika << " dakika\n";
	}

private:
	string ad;

};
