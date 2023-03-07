//
// Created by Jakub on 01.03.2023.
//

#ifndef MENU_TABLICADYNAMICZNA_H
#define MENU_TABLICADYNAMICZNA_H


class TablicaDynamiczna {
public:
    TablicaDynamiczna();
    void dodaj_dane(int wybor_elementu, int nowy_element);
    void usun_dane(int wybor_elementu);
    int dostanRozmiar();
    int dostanTablice();

private:
    int rozmiar_tablic;
    int *wsk;



};


#endif //MENU_TABLICADYNAMICZNA_H
