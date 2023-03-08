//
// Created by Jakub on 08.03.2023.
//

#ifndef MENU_DRZEWOWEZEL_H
#define MENU_DRZEWOWEZEL_H


class DrzewoWezel {
public:
    DrzewoWezel(int klucz);
    int klucz;
    DrzewoWezel *lewa;
    DrzewoWezel *prawa;
    DrzewoWezel *rodzic;
};


#endif //MENU_DRZEWOWEZEL_H
