//
// Created by Jakub on 08.03.2023.
//

#include "DrzewoWezel.h"


DrzewoWezel::DrzewoWezel(int klucz) {
    this->lewa = nullptr;
    this->prawa = nullptr;
    this->rodzic = nullptr;
    this->klucz = klucz;
}