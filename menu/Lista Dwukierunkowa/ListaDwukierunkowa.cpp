//
// Created by Jakub on 01.03.2023.
//

#include "ListaDwukierunkowa.h"
#include "ListaWezel.h"
#include <iostream>

//TODO error handling + ograniczenia

ListaDwukierunkowa::ListaDwukierunkowa() {
    this->glowa = nullptr;
    this->ogon = nullptr;
    this->ilosc = 0;
}
void ListaDwukierunkowa::dodaj_poczatek(int dane) {
    ListaWezel *temp = new ListaWezel(dane);
    temp->nastepna = this->glowa;
    temp->ostania = nullptr;
    this->glowa = temp;
    if(temp->nastepna != nullptr){
        temp->nastepna->ostania = temp;
    }else{
        this->ogon = temp;
    }
    this->ilosc++;
}
void ListaDwukierunkowa::dodaj_koniec(int dane) {
    ListaWezel *temp = new ListaWezel(dane);
    temp->nastepna = nullptr;
    temp->ostania= this->ogon;
    this->ogon = temp;
    if(temp->ostania != nullptr){
        temp->ostania->nastepna= temp;
    }else{
        this->glowa = temp;
    }
    this->ilosc++;
}
void ListaDwukierunkowa::dodaj_srodek(int dane, int wybor_miejsca) {
    std::cout << this->ilosc  << std::endl;
    ListaWezel *temp = glowa;
    ListaWezel *nowy_element = new ListaWezel(dane);
    for(int i = 0; i < this->ilosc; i++){
        if(i == wybor_miejsca ){
            nowy_element->nastepna = temp;
            nowy_element->ostania = temp->ostania;
            nowy_element->ostania->nastepna=nowy_element;
            nowy_element->nastepna->ostania = nowy_element;
            break;
        }
        temp = temp->nastepna;
    }


    std::cout << "dziala" << std::endl;
    ilosc++;
}

void ListaDwukierunkowa::usun_koniec() {
    if(ilosc == 1){
        glowa = nullptr;
    }else{
        ListaWezel *temp = ogon;
        ogon = temp->ostania;
        ogon->nastepna = nullptr;
        delete temp;
    }

    ilosc--;
}

void ListaDwukierunkowa::usun_pocztek() {
    if(ilosc ==1){
        ogon = nullptr;
    }else{
        ListaWezel *temp = glowa;
        glowa = temp->nastepna;
        glowa->ostania = nullptr;
        delete temp;
    }
    ilosc--;
}

void ListaDwukierunkowa::usun_srodek(int wybor_miejsca) {
    std::cout << this->ilosc  << std::endl;
    ListaWezel *temp = glowa;
    for(int i = 0; i < this->ilosc; i++){
        if(i == wybor_miejsca ){
            temp->nastepna->ostania =  temp->ostania;
            temp->ostania->nastepna = temp->nastepna;
            delete temp;
            break;
        }
        temp = temp->nastepna;
    }
    ilosc--;
}
void ListaDwukierunkowa::wyswietl_liste() {

   ListaWezel *temp = glowa;
   while(temp){
       std::cout << temp->dane <<  " " << "Wartoscdanego elementu listu" << std::endl;
       temp = temp->nastepna;
   }

}








