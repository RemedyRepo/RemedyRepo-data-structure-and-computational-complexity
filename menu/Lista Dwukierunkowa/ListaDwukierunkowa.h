//
// Created by Jakub on 01.03.2023.
//

#include "ListaWezel.h"
#ifndef MENU_LISTADWUKIERUNKOWA_H
#define MENU_LISTADWUKIERUNKOWA_H


class ListaDwukierunkowa {
    private:
    ListaWezel *glowa;
    ListaWezel *ogon;
public:
    ListaDwukierunkowa();
    void dodaj_poczatek(int dane);
    void dodaj_koniec(int dane);
    void dodaj_srodek(int dane, int wybor_miejsca);
    void usun_pocztek();
    void usun_srodek(int wybor_miejsca);
    void usun_koniec();
    void wyswietl_liste();
    int ilosc;

};


#endif //MENU_LISTADWUKIERUNKOWA_H
