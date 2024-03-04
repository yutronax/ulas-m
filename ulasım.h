#pragma once

#pragma once
#pragma once
#include <iostream>


using namespace std;



class ulasım {
private:
	int saat;
	
	int dakika[5] = { 00,15,30,45 };
	
	string ad;
	
protected:
	string il[82] = { "boş","Adana", "Adıyaman", "Afyon", "Ağrı", "Amasya", "Ankara", "Antalya", "Artvin", "Aydın", "Balıkesir", "Bilecik", "Bingöl", "Bitlis", "Bolu", "Burdur", "Bursa", "Çanakkale", "Çankırı", "Çorum", "Denizli", "Diyarbakır", "Edirne", "Elazığ", "Erzincan", "Erzurum", "Eskişehir", "Gaziantep", "Giresun", "Gümüşhane", "Hakkari", "Hatay", "Isparta", "Mersin", "İstanbul", "İzmir", "Kars", "Kastamonu", "Kayseri", "Kırklareli", "Kırşehir", "Kocaeli", "Konya", "Kütahya", "Malatya", "Manisa", "Kahramanmaraş", "Mardin", "Muğla", "Muş", "Nevşehir", "Niğde", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirdağ", "Tokat", "Trabzon", "Tunceli", "Şanlıurfa", "Uşak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman", "Kırıkkale", "Batman", "Şırnak", "Bartın", "Ardahan", "Iğdır", "Yalova", "Karabük", "Kilis", "Osmaniye", "Düzce" };

	int* dk;
	int arac;
	int süre;
	int fiyat;
	int* ptr;
public:
	void isim() {
		cout << "isminizi giriniz\n";
	}

	

	void il_bilgisi() {
		cout << il[*ptr];

	};
	void il_tanımlama(int _il)
	{
		
		ptr = &_il;
		


	}
	void saat1(int _saat) {
		saat = _saat;


	}
	void saat2(int _dak) {
		dk = &_dak;
		if (saat > 24 || saat < 0) {
			cout << "lütfen doğru bir saat belirleyin";
			void saat1(int _saat);
		}


		cout << saat << ":" << dakika[*dk]; 
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
		sehir1 = metin1.length();
		ptr = &_sehir2;
		string metin2;
		metin2 = il[*ptr];
		sehir2 = metin1.length();
		sure = (sehir1 + sehir2) * süre;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidiş süresi: " << saat << " saat " << dakika << " dakika\n";
	}

	void gidisfiyatı(int _sehir, int _sehir2) {
		arac = 400;

		string metin;
		string metin1;
		int sehir3;
		int sehir4;

		ptr = &_sehir2;
		metin = il[*ptr];
		 sehir3 = metin.length();
		ptr = &_sehir;
		metin1 = il[*ptr];
	 sehir4 = metin1.length();
		fiyat = (sehir3 + sehir4) * arac;
		cout << "Bilet fiyatı: " << fiyat << " TL\n";
	}

	



};

