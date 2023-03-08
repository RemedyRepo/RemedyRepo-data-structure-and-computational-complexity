//
// Created by Jakub on 01.03.2023.
//

#include <cmath>
#include <iostream>
#include "KopiecBinarny.h"

KopiecBinarny::KopiecBinarny() {
    this->kopiecBinarny = new TablicaDynamiczna();
    cr = "  ";
    cl = "  ";
    cp = "  ";
    cr[0] = 218;
    cr[1] = 196;
    cl[0] = 192;
    cl[1] = 196;
    cp[0] = 179;

}


void KopiecBinarny::dodaj_element(int dane) {
    kopiecBinarny->dodaj_dane(kopiecBinarny->dostanRozmiar(), dane);
    int pomocnik = kopiecBinarny->dostanRozmiar() - 1;
    int indexOjca = (pomocnik - 1) / 2;
    while (pomocnik > 0 && kopiecBinarny->dostanElement(indexOjca) < kopiecBinarny->dostanElement(pomocnik)) {
        kopiecBinarny->zamien_wartosci(indexOjca, kopiecBinarny->dostanElement(indexOjca), pomocnik,
                                       kopiecBinarny->dostanElement(pomocnik));
        pomocnik = indexOjca;
        indexOjca = (pomocnik - 1) / 2;

    }

}
//TODO usun
void KopiecBinarny::usun_szczyt() {
    kopiecBinarny->usun_dane(0);
    int pomocnik = kopiecBinarny->dostanRozmiar() - 1;
    int indexOjca = (pomocnik - 1) / 2;
    while (pomocnik > 0 && kopiecBinarny->dostanElement(indexOjca) < kopiecBinarny->dostanElement(pomocnik)) {
        kopiecBinarny->zamien_wartosci(indexOjca, kopiecBinarny->dostanElement(indexOjca), pomocnik,
                                       kopiecBinarny->dostanElement(pomocnik));
        pomocnik = indexOjca;
        indexOjca = (pomocnik - 1) / 2;

    }


}

void KopiecBinarny::printBT(std::string sp, std::string sn, int v) {
    std::string s;

    if (v < kopiecBinarny->dostanRozmiar()) {
        s = sp;
        if (sn == cr) s[s.length() - 2] = ' ';
        printBT(s + cp, cr, 2 * v + 2);

        s = s.substr(0, sp.length() - 2);

        std::cout << s << sn << kopiecBinarny->dostanElement(v) << std::endl;

        s = sp;
        if (sn == cl) s[s.length() - 2] = ' ';
        printBT(s + cp, cl, 2 * v + 1);
    }
}




