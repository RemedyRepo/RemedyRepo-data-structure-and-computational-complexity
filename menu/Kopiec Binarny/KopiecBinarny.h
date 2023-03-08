//
// Created by Jakub on 01.03.2023.
//
#include "../Tablica Dynamiczna/TablicaDynamiczna.h"
#ifndef MENU_KOPIECBINARNY_H
#define MENU_KOPIECBINARNY_H


class KopiecBinarny {
public:
    KopiecBinarny();
    TablicaDynamiczna *kopiecBinarny;
    void usun_szczyt();
    void dodaj_element(int dane);
    void printBT(std::string sp, std::string sn, int v);
private:
    std::string cr, cl, cp;

};


#endif //MENU_KOPIECBINARNY_H
