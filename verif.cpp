//
// Created by Moise on 5/23/2024.
//

#include "verif.h"
#include <iostream>
using namespace std;
verif::verif(string str) : data(std::move(str)) {
}
string verif::verificare()
{
    return data;
}