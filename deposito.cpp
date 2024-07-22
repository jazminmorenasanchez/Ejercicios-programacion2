#include<iostream>
#include "deposito.h"
using namespace std;

void deposito::setdispo(int dispo_){
    dispo=dispo_;
}
void deposito::setpi(int pi_){
    pi=pi_;
}
void deposito::setpr(int pr_){
    pr=pr_;
}
void deposito::setdi(int di_){
    di=di_;
}

int deposito::getdispo(){
    return dispo;
}
int deposito::getpi(){
    return pi;
}
int deposito::getpr(){
    return pr;
}
int deposito::getdi(){
    return di;
}

