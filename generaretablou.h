#ifndef OOP_GENERARETABLOU_H
#define OOP_GENERARETABLOU_H
#include <iostream>
#include <random>
using namespace std;

class generaretablou{
private:
    int v[4][6];
public:
    int get2(int i, int j);
    void generare();
};


#endif //OOP_GENERARETABLOU_H
