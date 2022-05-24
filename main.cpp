#include "punkt.h"
#include "zbior.h"

using namespace std;

int main()
{
    Punkt g(2,0);
    Punkt h(4,5);
    Punkt i(10,10);
    Punkt d(5,11);
    Punkt s(5,11);
    Zbior z;
    g >> z;
    h >> z;
    i >> z;
    d >> z;
    s >> z;
   // cout << z << endl;


    Zbior y;
    Punkt l(2,5);
    Punkt f(6,1);
    l >> y;
    f >> y;


    (y+z).drukuj();

   KolorowyZbior x;

   x.dodaj(l,"zielony");
   x.dodaj(f,"niebieski");
    x.print();





    return 0;
}
