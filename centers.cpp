#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstring>

#include"centers.h"
#include"capac.h"
#include"courses.h"


using namespace std;

centers::centers()
{
}



centers::centers(string id, string name,string address, string coordinator,  string password )
{
    this->id=id;
    this->name=name;
    this->address=address;
    this->coodinator=coordinator;
    this->password=password;
    
}




string centers::getcenterid()
{
    return this->id;
}


string centers::getcenternm()
{
    return this->name;
}

string centers::getadd()
{
    return this->address;
}

string centers::getcoord()
{
    return this->coodinator;
}

string centers::getpass()
{
    return this->password;
}






void centers::displaycenter()
{
    for (int i = 0; i < cent.size(); i++)
    {
        cout<<setw(6)<<cent[i].id;
        cout<<setw(20)<<cent[i].name;
        cout<<setw(25)<<cent[i].address;
        cout<<setw(25)<<cent[i].coodinator<<endl;
    }
}



void centers::display_centers_courese(string cid)
{
 for (int i = 0; i < cent.size(); i++)
 {
     
     for (int j = 0; j < ::capa.size(); j++)
     {
         if (cent[i].id==::capa[j].getcentid())
         {
            if(cent[i].id==cid)
            {  
                cout<<"\n\t"<<capa[j].getcentcour();
                courses.push_back(capa[j].getcentcour());
            }
         }         
     }
     cout<<endl;
 }  

}




void centers::display_centers_capa()
{
 for (int i = 0; i < cent.size(); i++)
 {
     cout<<setw(6)<<cent[i].id;
     cout<<setw(20)<<cent[i].name;
     cout<<setw(25)<<cent[i].address;
     cout<<setw(25)<<cent[i].coodinator;
     cout<<setw(20);
     for (int j = 0; j < ::capa.size(); j++)
     {
         if (cent[i].id==::capa[j].getcentid())
         {
            cout<<::capa[j].getcentcour()<<"->"<<::capa[j].getcapa()<<"  ";
         }         
     }
     cout<<endl;
 }  

}



int centers::centerlogin(string id, string pass)
{

        for (int i = 0; i < cent.size(); i++)
        {
            if (id==cent[i].id && pass==cent[i].password)
            { 
                return 1;
                cout<<"ceeh";
            } 
        }
        return 0;          
}


