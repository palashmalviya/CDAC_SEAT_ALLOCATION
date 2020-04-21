#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstring>
#include<algorithm>
#include"pref.h"
#include"courses.h"
using namespace std;

    pref::pref()
    {
    }


    pref::pref( int formno, int pref, string courname, string centid)
    {
        this->formno=formno;
        this->prec=pref;
        this->courname=courname;   
        this->centid=centid;
    }

    void pref::addpre()
    {
    }


    void pref::displaypref()
    {
        cout<<this->formno;
        cout<<this->prec;
        cout<<this->courname;
        cout<<this->centid;

    }  


    void pref::givepref(int sid,int prc)
    {
        int pref,i=0,n1=1,n2=1;
        string courname,centid;

            cout<<"\n\tSelect course :";
                        for (int a = 0; a < cours.size(); a++)
                        {
                            cout<<"\n\t\t"<<a+1<<". "<<cours[a].getconame();
                        }
                        cout<<"\n\t\t Enter Choice : ";
                        cin>>n1;
                        --n1;
                        courname=cours[n1].getconame();
            
            cout<<"\n\tSelect Center :";
                        for (int a = 0; a < cent.size(); a++)
                        {
                            cout<<"\n\t\t"<<a+1<<". "<<cent[a].getcenternm();
                        }
                        cout<<"\n\t\t Enter Choice : ";
                        cin>>n2;
                        --n2;
                        centid=cent[n2].getcenterid();

            this->formno=sid;
            this->prec=prc;
            this->courname=courname;
            this->centid=centid;        
    }  

    void pref::setformno(int formno)
    {
        this->formno=formno;
    }
    void pref::setper(int prec)
    {
        this->prec=prec;
    }
    void pref::setcourname(string courname)
    {
        this->courname=courname;
    }
    void pref::setcentid(string centid)
    {
        this->centid=centid;
    }
    

    

    int pref::getformno()
    {
        return this->formno;
    }
    int pref::getper()
    {
        return this->prec;
    }
    string pref::getcourname()
    {
        return this->courname;
    }
    string pref::getcentid()
    {
        return this->centid;
    }
    
    
    
