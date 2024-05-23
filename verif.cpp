//
// Created by Moise on 5/23/2024.
//

#include "verif.h"
#include <iostream>
using namespace std;
verif::verif(string str) : a(std::move(str)) {
}
string verif::verificare()
{
    return a;
}