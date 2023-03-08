#include <iostream>
#include "Tablica Dynamiczna/TablicaDynamiczna.h"
#include "Lista Dwukierunkowa/ListaDwukierunkowa.h"
#include "Kopiec Binarny/KopiecBinarny.h"
#include "DrzewoBST/DrzewoBST.h"


int main() {
    TablicaDynamiczna *tablicaDynamiczna = new TablicaDynamiczna();
    ListaDwukierunkowa *listaDwukieruna = new ListaDwukierunkowa();
    KopiecBinarny *kopiec = new KopiecBinarny();
    DrzewoBST *drzewoBst = new DrzewoBST();

    int gate = 0;
    std::cout << "Projet SDIZO" << std::endl;

    while(gate != 9){
        std::cout << "wybierz co chcesz zrobic: " << std::endl;
        std::cout << "Tablica dynamiczna: 1" << std::endl;
        std::cout << "Lista dwukierunkowa: 2 " << std::endl;
        std::cout << "Kopiec Binarny: 3" << std::endl;
        std::cout << "Drzewo przeszukiwań binarnych: 4" << std::endl;
        std::cin >> gate;
        switch (gate) {
            case 1:
                std::cout << "Wybrales Tablice dynamiczna o to jej implementacja: " << std::endl;

                tablicaDynamiczna->dodaj_dane(0,1);
                tablicaDynamiczna->dodaj_dane(1,3);
                tablicaDynamiczna->dodaj_dane(1,3);
                tablicaDynamiczna->dodaj_dane(3,3);
                tablicaDynamiczna->dodaj_dane(4,3);
                tablicaDynamiczna->dodaj_dane(5,3);
                tablicaDynamiczna->dodaj_dane(6,3);
                tablicaDynamiczna->dodaj_dane(7,3);
                tablicaDynamiczna->dodaj_dane(8,3);
                tablicaDynamiczna->dodaj_dane(9,3);
                tablicaDynamiczna->dostanTablice();

                break;

            case 2:
                std::cout << "Wybrales Liste dwukierunkowa o to jej implementacja " << std::endl;
                listaDwukieruna->dodaj_poczatek(1);
                listaDwukieruna->dodaj_koniec(2);
                listaDwukieruna->dodaj_srodek(3,1);
                listaDwukieruna->dodaj_srodek(7,1);
                listaDwukieruna->dodaj_koniec(4);
                listaDwukieruna->usun_koniec();
                listaDwukieruna->usun_koniec();
                listaDwukieruna->usun_koniec();
                listaDwukieruna->usun_koniec();
                listaDwukieruna->usun_koniec();
                listaDwukieruna->wyswietl_liste();
                exit(1);
                break;
            case 3:
                std::cout << "Wybrales Kopiec binarny o to jej implementacja: " << std::endl;
                kopiec->dodaj_element(6);
                kopiec->dodaj_element(8);
                kopiec->dodaj_element(6);
                kopiec->dodaj_element(6);
                kopiec->dodaj_element(6);
                kopiec->dodaj_element(7);
                kopiec->dodaj_element(5);
                kopiec->dodaj_element(1);
                kopiec->dodaj_element(4);
                kopiec->dodaj_element(3);
                kopiec->dodaj_element(4);
                kopiec->dodaj_element(2);
                kopiec->dodaj_element(4);
                kopiec->dodaj_element(2);
                //kopiec->dodaj_element(14);
                //kopiec->usun_szczyt();
                kopiec->printBT("","",0);
                kopiec->kopiecBinarny->dostanTablice();
                exit(1);
                 break;

            case 4:
                std::cout << "Wybrales Drzewo przeszukiwanń binarnych o to jej implementacja: " << std::endl;
                drzewoBst->dodaj_element(8);
                drzewoBst->dodaj_element(7);
                drzewoBst->dodaj_element(5);
                drzewoBst->dodaj_element(5);
                drzewoBst->dodaj_element(3);
                drzewoBst->dodaj_element(2);
                drzewoBst->wyswielt_drzewo(drzewoBst->korzen);
                exit(1);
                break;
            default:
                std::cout << "Wpisales nieodpowiedni znak" << std::endl;

                break;

        }

    }





    return 0;
}
