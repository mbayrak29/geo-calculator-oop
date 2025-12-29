#include <iostream>
#include <vector>
#include "Sekil.h"
#include "Dikdortgen.h"
#include "Kare.h"

using namespace std;

void raporVer(const Sekil* s) {
    s->whoAreYou();
    cout << "Alan: " << s->alanHesapla() << endl;
    cout << "Cevre: " << s->cevreHesapla() << endl;
    cout << "-------------------------" << endl;
}

int main() {

    cout << "Object Count at the beginning: "
        << Dikdortgen::getCount() << endl;

    vector<Sekil*> sekiller;

    int secim;
    do {
        cout << "\n===== GEO CALCULATOR =====\n";
        cout << "1 - Dikdortgen ekle\n";
        cout << "2 - Kare ekle\n";
        cout << "3 - Tum sekilleri raporla\n";
        cout << "0 - Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        if (secim == 1) {
            int l, w;
            cout << "Dikdortgen uzunlugu: ";
            cin >> l;
            cout << "Dikdortgen genisligi: ";
            cin >> w;

            Dikdortgen* d = new Dikdortgen(l, w);
            sekiller.push_back(d);
        }
        else if (secim == 2) {
            int kenar;
            cout << "Karenin kenari: ";
            cin >> kenar;

            Kare* k = new Kare(kenar);
            sekiller.push_back(k);
        }
        else if (secim == 3) {
            cout << "\n--- SEKIL RAPORU ---\n";
            for (Sekil* s : sekiller) {
                raporVer(s);
            }
        }

    } while (secim != 0);

    for (Sekil* s : sekiller) {
        delete s;
    }
    sekiller.clear();

    cout << "Object Count at the end: "
        << Dikdortgen::getCount() << endl;

    return 0;
}
