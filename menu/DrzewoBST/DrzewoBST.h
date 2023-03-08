//
// Created by Jakub on 08.03.2023.
//

#ifndef MENU_DRZEWOBST_H
#define MENU_DRZEWOBST_H


#include "DrzewoWezel.h"

class DrzewoBST {
public:
    DrzewoBST();
    DrzewoWezel *korzen;
    void dodaj_element(int klucz);
    void usun_element(int wybor_elementu);
    int znajdz_max();
    int znajdz_min();
    int znajdz_wartosc(int klucz);
    void wyswielt_drzewo(DrzewoWezel *szukaj);

};


#endif //MENU_DRZEWOBST_H
