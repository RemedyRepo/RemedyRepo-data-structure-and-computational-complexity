//
// Created by Jakub on 08.03.2023.
//

#include <iostream>
#include "DrzewoBST.h"



DrzewoBST::DrzewoBST() {
    this->korzen = nullptr;

}

//ALGORYTM z "Wprowadzenie do Algorytmów" Cormena
void DrzewoBST::dodaj_element(int klucz) {
    DrzewoWezel *y = nullptr;
    DrzewoWezel *x = this->korzen;
    DrzewoWezel *dodaj = new DrzewoWezel(klucz);
        while(x != nullptr) {
            y = x;
            if (dodaj->klucz < x->klucz) {
                x = x->lewa;
            } else {
                x = x->prawa;
            }

        }
        dodaj->rodzic = y;
        if (y == nullptr) {
            this->korzen = dodaj;
        } else if (dodaj->klucz < y->klucz) {
            y->lewa = dodaj;
        } else {
            y->prawa = dodaj;
        }


}
// Do usuwania potrzebne jest znalezienie odpowiedniego elementu!
void::DrzewoBST::usun_element(int wybor_elementu){

}

int DrzewoBST::znajdz_max() {

}


int DrzewoBST::znajdz_min() {

}

int DrzewoBST::znajdz_wartosc(int klucz) {

}
// Algorytm rekurencyjny z Cormena "Wprowadzenie do algorytmów"
void DrzewoBST::wyswielt_drzewo(DrzewoWezel *szukaj) {
    if(szukaj != nullptr){
        wyswielt_drzewo(szukaj->lewa);
        std::cout << szukaj->klucz;
        wyswielt_drzewo(szukaj->prawa);
    }
}

