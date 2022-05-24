#include "zbior.h"
#include <cstdlib>
#include <time.h>



istream& operator>>(Punkt& p, Zbior& zb)
{
    zb.punkty.push_back(&p);

}

ostream& operator<<(ostream& os, const Zbior& zb)
{
    for(int i = 0; i < zb.punkty.size(); i++)
    {
        os << "(" << zb.punkty[i]->getX() << "," << zb.punkty[i]->getY() << ")" << endl;
    }
    return os;
}

void Zbior::drukuj()
{
    if(punkty.size()==0)
    {
        cout<<"Pusty zbior"<<endl; return;

    }
    int maxX=0;
    int maxY=0;
    for(int i = 0 ; i < punkty.size();i++)
    {
        if(maxX < punkty[i]->getX())
        {
            maxX = punkty[i]->getX();
        }
        if(maxY < punkty[i]->getY())
        {
            maxY = punkty[i]->getY();
        }
    }

    maxX=maxX+1;
    maxY=maxY+1;
    bool punkt = false;
    for(int i = 0 ; i < maxY ; i++)
    {

        for(int j = 0 ; j < maxX ; j++)
        {
            for(int k = 0 ; k < punkty.size(); k++)
            {
                if(j == punkty[k]->getX() && i == punkty[k]->getY())
                {
                    cout<<"O";
                    punkt = true;
                    break;


                }
            }
            if(!punkt)
            {
             cout<<" ";

            }
            else
            {
                punkt = false;
            }
        }
        cout<<endl;
    }
}


void Zbior::usun()
{

    punkty.clear();
}
Zbior::Zbior(const Zbior& z)
{
   for(int i = 0 ; i < z.punkty.size() ; i++)
   {
       Punkt * tmp = new Punkt(z.punkty[i]->getX(),z.punkty[i]->getY());
       this->punkty.push_back(tmp);
   }

}

Zbior& Zbior::operator=(const Zbior& z)
{
    if(this == &z)
        return * this;
    for(int i = 0 ; i < z.punkty.size() ; i++)
   {
       Punkt * tmp = new Punkt(z.punkty[i]->getX(),z.punkty[i]->getY());
       this->punkty.push_back(tmp);
   }
   return * this;
}


Zbior& Zbior::operator+(const Zbior& z)
{
   Zbior* g = new Zbior;

    for(int i =0 ; i < this->punkty.size(); i++)
    {

        g->punkty.push_back(new Punkt(this->punkty[i]->getX(),this->punkty[i]->getY()));
    }
    for(int i =0 ; i < z.punkty.size(); i++)
    {
        g->punkty.push_back(new Punkt(z.punkty[i]->getX(),z.punkty[i]->getY()));
    }

    return *g;



}


void KolorowyZbior::dodaj(Punkt& p, string k)
{
    kolor.push_back(k);
    Zbior::dodaj(p);
}





