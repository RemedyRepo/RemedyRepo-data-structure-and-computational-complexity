//
// Created by Jakub on 01.03.2023.
//

#include <string>
#include "TablicaDynamiczna.h"
#include <iostream>


TablicaDynamiczna::TablicaDynamiczna() {
    this->rozmiar_tablic = 0;
    this->wsk = nullptr;


    }
    //TODO dodać zabezpieczenia
    void TablicaDynamiczna::dodaj_dane(int wybor_elementu, int nowy_element){
        std::cout << "dodales nowy element to tablicy" << std::endl;
//        if(wybor_elementu == 0){
//            int *temp = new int(this->rozmiar_tablic);
//            for(int i = 0 ; i < this->rozmiar_tablic; i++){
//                temp[i+1] = wsk[i];
//            }
//            this->rozmiar_tablic = rozmiar_tablic+1;
//            delete [] wsk;
//            wsk = temp;
//            wsk[wybor_elementu] = nowy_element;
//
//        }else if(wybor_elementu == rozmiar_tablic){
//            int *temp = new int(this->rozmiar_tablic);
//            for(int i = 0 ; i < this->rozmiar_tablic; i++){
//                temp[i] = wsk[i];
//            }
//            this->rozmiar_tablic = rozmiar_tablic+1;
//            delete [] wsk;
//            wsk = temp;
//            wsk[wybor_elementu] = nowy_element;
//        }
//        else{
            int helper = 0;
            std::cout << "test" << std::endl;
            this->rozmiar_tablic = rozmiar_tablic+1;
            int *temp = new int(this->rozmiar_tablic);
            for(int i = 0 ; i < this->rozmiar_tablic; i++){

                if(i == wybor_elementu){
                    temp[i] = nowy_element;
                    helper--;
                }else{
                    temp[i] = wsk[helper];
                }
                helper++;
            }
            delete [] wsk;
            wsk = temp;
        }

//    }

    void TablicaDynamiczna::usun_dane(int wybor_elementu) {
        int helper = 0;
        std::cout << "test" << std::endl;
        std::cout << this->rozmiar_tablic;
        this->rozmiar_tablic = rozmiar_tablic-1;
        std::cout << this->rozmiar_tablic;
        int *temp = new int(this->rozmiar_tablic);
        for(int i = 0 ; i < this->rozmiar_tablic; i++){
            if(i == wybor_elementu){
                std::cout << "usunal" << std::endl;
                helper++;
            }
                temp[i] = wsk[helper];

            helper++;
        }


        delete [] wsk;
        wsk = temp;
    }

    int TablicaDynamiczna::dostanRozmiar() {
        return this->rozmiar_tablic;
    }

    int TablicaDynamiczna::dostanTablice() {
        std::cout <<"Twoja tablica: " << std::endl;
        for(int i = 0; i < this->rozmiar_tablic; i++){
            std::cout << wsk[i];
        }
}
