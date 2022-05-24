#include "punkt.h"

Punkt::Punkt(int _x, int _y)
{
    x=_x;
    y=_y;
}

Punkt::~Punkt()
{
    cout<< "Usunieto punkt: " << "(" << x << "," << y << ")" << endl;
}

void Punkt::print()
{
    cout << "(" << x << "," << y << ")" ;
}




KolorowyPunkt::KolorowyPunkt(int _x, int _y, string _kolor) : Punkt(_x,_y)
{
  kolor = _kolor;
}



void KolorowyPunkt::print()
{
    Punkt::print();
      cout << "O KOLORZE: " << kolor <<  endl;
}
