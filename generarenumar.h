//
// Created by Moise on 5/26/2024.
//

#ifndef OOP_GENERARENUMAR_H
#define OOP_GENERARENUMAR_H
#include <iostream>
#include <random>
using namespace std;

class generarenumar{
private:
    generarenumar(){
        std::random_device nr;
        rez.seed(nr());
    }
    std::mt19937 rez;
public:
    static generarenumar& getInstance()
    {
        static generarenumar instance;
        return instance;
    }
    generarenumar(const generarenumar&) = delete;
    generarenumar& operator=(const generarenumar&) = delete;
    int rnr(int a, int b){
        std::uniform_int_distribution<int> dis(a,b);
        return dis(rez);
    }
};

#endif //OOP_GENERARENUMAR_H
