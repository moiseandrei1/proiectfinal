#include <iostream>
#include "Joc.h"
int main() {
    std::cout << "Pentru a juca introduceti 2 inturi (suma initiala de bani, si miza pe care jucati), si pentru a genera un tabel nou\n";
    std::cout << "scrieti un caracter. Daca doriti sa schimbati miza scrieti 'miza' si dupa aceea numarul nou.\n";
    std::cout << "Pentru a opri jocul scrieti stop\n";
    int suma2, miza2;
    std::cin >> suma2 >> miza2;
    Joc a(suma2, miza2);
    a.jocul();
    return 0;
}