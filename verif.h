//
// Created by Moise on 5/23/2024.
//

#ifndef OOP_VERIF_H
#define OOP_VERIF_H
#include <iostream>
#include <string>
using namespace std;
class verif{
private:
    string data;
public:
    explicit verif(string str);
    string verificare();
    virtual ~verif() = default;
};

#endif //OOP_VERIF_H
