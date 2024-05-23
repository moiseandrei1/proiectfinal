//
// Created by Moise on 5/21/2024.
//

#ifndef OOP_JOC_H
#define OOP_JOC_H
#include <iostream>
#include "generaretablou.h"
#include "linii.h"
#include "verif.h"
using namespace std;

class Joc : public verif{
private:
    int suma;
    int miza;
public:

    Joc(string a, int suma, int miza);

    Joc& operator=(const Joc& a);

    friend std::ostream &operator << (std::ostream &o, const Joc &x);
    friend std::istream &operator >> (std::istream &i, Joc &x);
    friend generaretablou;
    friend linii;
    void jocul();
    ~Joc() = default;
};


#endif //OOP_JOC_H
