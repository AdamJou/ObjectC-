#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>

using namespace std;

class Punkt
{
    int x;
    int y;
public:
    Punkt(int _x =0, int _y = 0);
   virtual ~Punkt();
    int getX(){return x;}
    int getY(){return y;}
    void print();


};


class KolorowyPunkt : public Punkt
{
    string kolor;
public:
    KolorowyPunkt(int _x, int _y, string _kolor);
  //  ~KolorowyPunkt();
    void print();
};






#endif // PUNKT_H

