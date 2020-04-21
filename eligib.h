#ifndef ELIGIB_H_
#define ELIGIB_H_

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class eligib
{
private:

    string name;
    string elgdeg;
    double elgper; 
    
    
public:
    eligib();
    eligib(string name,string elgdeg, double elgper);

    void addeligib();
    void displayeligib();    

    void setelgname(string);
    void setelgdeg(string);
    void setelgper(double);

    string getelgname();
    string getelgdeg();
    double getelgper();
};

vector<eligib> elig;

#endif