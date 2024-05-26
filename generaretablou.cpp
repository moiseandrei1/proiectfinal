#include "generaretablou.h"
#include "generarenumar.h"
using namespace std;
int generaretablou::get2(int i, int j)
{
    return v[i][j];
}
void generaretablou::generare()
{
    generarenumar& nr = generarenumar::getInstance();
    //std::random_device rd;
    //std::mt19937 gen(rd());
    //std::uniform_int_distribution<int> dis(1, 9);
    v[1][1] = nr.rnr(1, 9);
    v[2][1] = nr.rnr(1, 9);
    v[3][1] = nr.rnr(1, 9);
    for(int i = 1; i <= 3; i ++)
    {
        for(int j = 2; j <= 5; j ++)
        {
            int h = nr.rnr(1, 9);
            if(h <= 2)
            {
                v[i][j] = v[i][j - 1];
                if(v[i][j] == 10 && j == 5)
                    v[i][j] = nr.rnr(1, 9);
            }
            else {
                v[i][j] = nr.rnr(1, 9);
                if(v[i][j] == 10)
                {
                    std::bernoulli_distribution bd(0.01);
                    v[i][j] = nr.rnr(1, 9);
                }
            }
        }
    }
    for(int i = 1; i <= 3; i ++)
    {
        for(int j = 1; j <= 5; j ++) {
            if (v[i][j] == 10)
                v[1][j] = 10, v[2][j] = 10, v[3][j] = 10;
        }
    }
}