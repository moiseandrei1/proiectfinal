#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include "Joc.h"
map <int, int> mp;
pair <int, int> pp[2005];
int sortare(pair <int, int> a, pair <int, int> b)
{
    return a.second < b.second;
}

class Jocc{
private:
    std::string ss;
    int suma{};
    int miza{};
    friend class Jocc_builder;
public:
    string afisaress(){
        return ss;
    }
    [[nodiscard]] int afisaresuma() const{
        return suma;
    }
    [[nodiscard]] int afisaremiza() const
    {
        return miza;
    }
    Jocc() = default;
};

class Jocc_builder{
private:
    Jocc d;
public:
    Jocc_builder() = default;
    Jocc_builder& ss(string strr)
    {
        d.ss = std::move(strr);
        return *this;
    }
    Jocc_builder& suma(int ssum)
    {
        d.suma = ssum;
        return *this;
    }
    Jocc_builder& miza(int mizz)
    {
        d.miza = mizz;
        return *this;
    }
    Jocc build(){
        return d;
    }
};

int main() {
    std::cout << "Pentru a juca introduceti un numar de baconte, dupa aceea introduceti valorile bacnoterlor si miza,si pentru a genera un tabel nou\n";
    std::cout << "scrieti un caracter. Daca doriti sa schimbati miza scrieti 'miza' si dupa aceea numarul nou.\n";
    std::cout << "Pentru a opri jocul scrieti stop\n";
    int n, suma2 = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        int a;
        cin >> a;
        suma2 = suma2 + a;
        mp[a] ++;
    }
    int cnt = 0;
    for(auto it : mp)
    {
        cnt ++;
        pp[cnt] = make_pair(it.first, it.second);
    }
    sort(pp + 1, pp + cnt + 1, sortare);
    for(int i = 1; i <= cnt; i ++)
    {
        cout << "Ai introdus " << pp[i].second;
        if(pp[i].second == 1)
            cout << " bacnota de ";
        else
            cout << " bacnote de ";
        cout << pp[i].first;
        if(pp[i].first == 1)
            cout << " leu\n";
        else
            cout << " lei\n";
    }
    int miza2;
    std::cin >> miza2;
    std::string ss;
    Jocc_builder b;
    Jocc c = b.ss(ss).suma(suma2).miza(miza2).build();
    Joc a(c.afisaress(), c.afisaresuma(), c.afisaremiza());
    a.jocul();
    return 0;
}