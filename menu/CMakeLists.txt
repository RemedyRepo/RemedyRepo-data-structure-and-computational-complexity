cmake_minimum_required(VERSION 3.24)
project(menu)

set(CMAKE_CXX_STANDARD 11)

add_executable(menu main.cpp "Tablica Dynamiczna/TablicaDynamiczna.cpp" "Tablica Dynamiczna/TablicaDynamiczna.h" "Lista Dwukierunkowa/ListaDwukierunkowa.cpp" "Lista Dwukierunkowa/ListaDwukierunkowa.h" "Kopiec Binarny/KopiecBinarny.cpp" "Kopiec Binarny/KopiecBinarny.h" "Lista Dwukierunkowa/ListaWezel.cpp" "Lista Dwukierunkowa/ListaWezel.h")
