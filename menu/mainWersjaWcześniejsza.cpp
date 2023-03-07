#include <iostream>
#include "Tablica Dynamiczna/TablicaDynamiczna.h"
#include "Lista Dwukierunkowa/ListaDwukierunkowa.h"
#include "Kopiec Binarny/KopiecBinarny.h"


int main() {

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
                // implementacja funckji z pliku nagłówkowego
                break;
            case 2:
                std::cout << "Wybrales Liste dwukierunkowa o to jej implementacja " << std::endl;
                // implementacja funckji z pliku nagłówkowego
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
