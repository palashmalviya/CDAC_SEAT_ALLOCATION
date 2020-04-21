#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstring>

#include"capac.h"
using namespace std;

    capac::capac()
    {
    }


    capac::capac(string centid,string centcourse, int capaci, int remcapa)
    {
        this->centid=centid;
        this->centcourse=centcourse;
        this->capaci=capaci;
        this->remcapa=remcapa;
    }


    void capac::addcapa()
    {
    }


    void capac::displaycapa()
    {
        cout<<this->centid;
        cout<<this->centcourse;
        cout<<this->capaci;
        cout<<this->remcapa;

    }    



    void capac::setcentid(string centid)
    {
        this->centid=centid;
    }
    void capac::setcentcourse(string centcouse)
    {
        this->centcourse=centcourse;
    }
    void capac::setcapa(int capaci)
    {
        this->capaci=capaci;
    }
    void capac::setremcapa(int remcapa)
    {
        this->remcapa=remcapa;
    }



    string capac::getcentid()
    {
        return this->centid;
    }
    string capac::getcentcour()
    {
        return this->centcourse;
    }
    int capac::getcapa()
    {
        return this->capaci;
    }
    int capac::getremcapa()
    {
        return this->remcapa;
    }