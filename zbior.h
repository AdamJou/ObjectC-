#ifndef ZBIOR_H
#define ZBIOR_H
#include "punkt.h"
#include <vector>

class Zbior
{
    vector<Punkt*> punkty;
public:
    Zbior() = default;
    ~Zbior(){};
   friend ostream& operator<<(ostream& os, const Zbior& zb);
   friend istream& operator>>(Punkt& p, Zbior& zb);
    void drukuj();
    void usun();
    Zbior(const Zbior& z);//kopiujacy
    Zbior& operator=(const Zbior& z);
    Zbior& operator+(const Zbior& z);
   vector<Punkt*>& getVector() {return punkty;}
    void dodaj(Punkt& p) {punkty.push_back(&p);}
    Punkt* getPunkt(int x) {return punkty[x];}

};



class KolorowyZbior : public Zbior
{
   vector<string> kolor;
   public:
    KolorowyZbior() = default;
    void dodaj(Punkt& p, string k);
    void print()
    {
        for(int i = 0 ; i< kolor.size();i++)
        {
            Zbior::getPunkt(i)->print();
             cout<< " " << kolor[i] << endl;
        }
    }

};


#endif // ZBIOR_H

