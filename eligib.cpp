#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstring>
#include"eligib.h"
using namespace std;

    eligib::eligib()
    {
    }


    eligib::eligib(string name,string elgdeg, double elgper)
    {
        this->name=name;
        this->elgdeg=elgdeg;
        this->elgper=elgper;
    }

    void eligib::addeligib()
    {

    }
    void eligib::displayeligib()
    {
        cout<<this->name;
        cout<<this->elgdeg;
        cout<<this->elgper;
    }    

    void eligib::setelgname(string name)
    {
        this->name=name;
    }
    void eligib::setelgdeg(string deg)
    {
        this->elgdeg=elgdeg;
    }
    void eligib::setelgper(double per)
    {
        this->elgper=elgper;
    }

    string eligib::getelgname()
    {
        return this->name;
    }
    string eligib::getelgdeg()
    {
        return this->elgdeg;
    }
    double eligib::getelgper()
    {
        return this->elgper;
    }