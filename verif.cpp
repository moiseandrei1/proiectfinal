//
// Created by Moise on 5/23/2024.
//

#include "verif.h"
#include <iostream>
#include <utility>
using namespace std;
verif::verif(string a){
    this->a = std::move(a);
}
string verif::verificare()
{
    return a;
}