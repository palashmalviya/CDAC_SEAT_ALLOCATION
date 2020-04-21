#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstring>


#include"courses.h"
#include"capac.h"
#include"eligib.h"
#include"student.h"

using namespace std;

courses::courses()
{
    
}


courses::courses(int id, string name,string fees, string section)
{
    this->id=id;
    this->name=name;
    this->fees=fees;
    this->section=section;    
}

int courses::getcoid()
{
    return this->id;
}

string courses::getconame()
{
    return this->name;
}

string courses::getcofees()
{
    return this->fees;
}
string courses::getcosection()
{
    return this->section;
}

void courses::displycourses()
{
    for (int i = 0; i < cours.size(); i++)
    {
        cout<<setw(6)<<cours[i].id;
        cout<<setw(15)<<cours[i].name;
        cout<<setw(15)<<cours[i].fees;
        cout<<setw(10)<<cours[i].section<<endl;
    }
}





void courses::display_courses_eligib()
{
 for (int i = 0; i < cours.size(); i++)
 {
     cout<<setw(6)<<cours[i].id;
     cout<<setw(15)<<cours[i].name;
     cout<<setw(15)<<cours[i].fees;
     cout<<setw(10)<<cours[i].section;
     cout<<setw(20);
     for (int j = 0; j < ::elig.size(); j++)
     {
         if (cours[i].name==::elig[j].getelgname())
         {
            cout<<::elig[j].getelgdeg()<<"->"<<::elig[j].getelgper()<<"     ";
            cours[i].centers.push_back(elig[j].getelgdeg());
         }         
     }
     cout<<endl;
 } 

}



void courses::listcoursescenter()
{
    for (int i = 0; i < cours.size(); i++)
    {     
        for (int j = 0; j < ::capa.size(); j++)
        {
            if (cours[i].name==::capa[j].getcentcour())
            {
                cours[i].centers.push_back(capa[j].getcentid());
            }         
     }
     cout<<endl;
 }  
}


  


