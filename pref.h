#ifndef PREF_H_
#define PREF_H_

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class pref
{
private:

    int formno; 
    int prec;
    string courname;
    string centid;
    
    
public:
    pref();
    pref(int formno, int pref, string courname, string centid);

    void addpre();
    void displaypref();    

    void setformno(int);
    void setper(int);
    void setcourname(string);
    void setcentid(string);

    int getformno();
    int getper();
    string getcourname();
    string getcentid();

    void givepref(int sid,int prc);


};

vector<pref> pre;

#endif