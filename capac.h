#ifndef CAPAC_H_
#define CAPAC_H_

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class capac
{
private:

    string centid;
    string centcourse;
    int capaci;
    int remcapa; 
    
    
public:
    capac();
    capac(string ,string , int, int);

    void addcapa();
    void displaycapa();    

    void setcentid(string);
    void setcentcourse(string);
    void setcapa(int);
    void setremcapa(int);


    string getcentid();
    string getcentcour();
    int getcapa();
    int getremcapa();
};

vector<capac> capa;

#endif