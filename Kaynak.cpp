#include <iostream>
#include <list>
#include <conio.h>
#include "ulasım.h"
#include "fonksiyon.h"

using namespace std;

static int artır = 0;

void bilet_ekle(list<fonksiyon>* b) {
    artır = artır++;
   
    fonksiyon bilet;
    bilet.setbiletnumarası(artır);
    bilet.ana_fonksiyon(); 
    b->push_back(bilet);
}

void bilet_listele(list<fonksiyon>* b) {
    list<fonksiyon>::iterator it;if (b->empty()) {
            cout << "bu liste boş\n";
        }else {
    for (it = b->begin(); it != b->end(); it++) {
        
        
            it->bilgi();
            cout << endl;
    }
        }
}
void bilet_arama(list<fonksiyon>* b) {
    list<fonksiyon>::iterator it;
    int numara;
    cout << "lütfen aramak istediğiniz kişinin numarasını girin : ";
  cin>> numara;
  for (it = b->begin(); it != b->end(); it++) {
     
          if (it->getbiletnumarası() == numara) {
          it->bilgi();
              cout << endl;
              return;
          }
          else {
              cout << "bu bilet numarasına ait bir kişi bulunamamıştır.\n lütfen tekrar deneyiniz.\n";
              
          
  }
    }
}

void bilet_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    int numaram;
    cout << "lütfen aramak istediğiniz kişinin numarasını girin : ";
    cin >> numaram;
    for (it = b->begin(); it != b->end(); it++) {
       
            if (it->getbiletnumarası() == numaram) {
               it=b->erase(it);
               return;
            }
            else {
            
                cout << "bu bilet numarasına ait bir kişi bulunamamıştır.\n lütfen tekrar deneyiniz.\n";
                break;
            }
           
        
    }

}
void toplu_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    if (b->empty()) {
        cout << "bu liste boş\n";
    }
    else {
        b->clear();
        cout << "liste boşaltıldı\n";
    }
}
int main() {
    setlocale(LC_ALL, "turkish");
    list<fonksiyon>* ulasım = new list<fonksiyon>();

    for (;;) {
        cout << "ekle :e liste :l arama:a silme:s toplu silme:t\n";
        switch (_getch()) {
        case 'e':
            system("cls");
            bilet_ekle(ulasım);
            break;

        case 'l':
        
            system("cls");
            bilet_listele(ulasım);
            break;
        case 'a':
            system("cls");

            bilet_arama(ulasım);
            break;
        case 't':
            system("cls");

           toplu_silme(ulasım);
            break;
        case 's':
            system("cls");

            bilet_silme(ulasım);
            break;
        case 'c':
            system("cls");

            exit(0);

        default:
            continue;
        }
    }

    delete ulasım; 
    return 0;
}
