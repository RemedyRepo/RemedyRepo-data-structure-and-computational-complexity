#include <iostream>
#include "Tablica Dynamiczna/TablicaDynamiczna.h"
#include "Lista Dwukierunkowa/ListaDwukierunkowa.h"
#include "Kopiec Binarny/KopiecBinarny.h"


int main() {
    TablicaDynamiczna *tablicaDynamiczna = new TablicaDynamiczna();
    ListaDwukierunkowa *listaDwukieruna = new ListaDwukierunkowa();
    int gate = 0;
    std::cout << "Projet SDIZO" << std::endl;

    while(gate != 9){
        std::cout << "wybierz co chcesz zrobic: " << std::endl;
        std::cout << "Tablica dynamiczna: 1" << std::endl;
        std::cout << "Lista dwukierunkowa: 2 " << std::endl;
        std::cout << "Kopiec Binarny: 3" << std::endl;
        std::cin >> gate;
        switch (gate) {
            case 1:
                std::cout << "Wybrales Tablice dynamiczna o to jej implementacja: " << std::endl;

                tablicaDynamiczna->dodaj_dane(0,1);
                tablicaDynamiczna->dodaj_dane(1,2);
                tablicaDynamiczna->dodaj_dane(1,3);
                tablicaDynamiczna->usun_dane(1);
                tablicaDynamiczna->dostanTablice();
                exit(1);
                break;

            case 2:
                std::cout << "Wybrales Liste dwukierunkowa o to jej implementacja " << std::endl;
                listaDwukieruna->dodaj_poczatek(1);
                listaDwukieruna->dodaj_koniec(2);
                listaDwukieruna->dodaj_srodek(3,1);
                listaDwukieruna->dodaj_srodek(7,1);
                listaDwukieruna->dodaj_koniec(4);
                listaDwukieruna->usun_srodek(2);






                listaDwukieruna->wyswietl_liste();

                exit(1);
                break;
            case 3:
                std::cout << "Wybrales Kopiec binarny o to jej implementacja: " << std::endl;
                // implementacja funckji z pliku nagłówkowego
                break;


            default:
                std::cout << "Wpisales nieodpowiedni znak" << std::endl;
                break;

        }

    }





    return 0;
}
