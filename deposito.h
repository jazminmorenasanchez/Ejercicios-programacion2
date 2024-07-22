#ifndef DEPOSITO_H
#define DEPOSITO_H

#include<iostream>
using namespace std;

class deposito{
    private:
    int dispo;
    int pi;
    int pr;
    int di;

    public:
    void setdispo(int dispo_);
    void setpi(int pi_);
    void setpr(int pr_);
    void setdi(int di_);

    int getdispo();
    int getpi();
    int getpr();
    int getdi();

};
#endif