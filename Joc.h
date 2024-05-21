//
// Created by Moise on 5/21/2024.
//

#ifndef OOP_JOC_H
#define OOP_JOC_H
#include <iostream>
#include "generaretablou.h"
#include "linii.h"
using namespace std;

class Joc{
private:
    int suma;
    int miza;
public:

    Joc(int suma, int miza);
    ~Joc();

    Joc& operator=(const Joc& a);

    friend std::ostream &operator << (std::ostream &o, const Joc &x);
    friend std::istream &operator >> (std::istream &i, Joc &x);
    friend generaretablou;
    friend linii;
    void jocul();
};


#endif //OOP_JOC_H
