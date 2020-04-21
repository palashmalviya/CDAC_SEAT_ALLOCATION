#ifndef CENTERS_H_
#define CENTERS_H_

#include<iostream>
#include<string>
using namespace std;


class centers 
{
private:
    string id; //A
    string name; //B
    string address; //C
    string coodinator; //D
    string password; //E
    vector<string> courses; //F
    
    
public:
    centers();

    centers(string id, string name,string address, string coodinator, string password);



    string getcenterid();

    string getcenternm();

    string getadd();

    string getcoord();

    string getpass();





    void addcenters();

    void displaycenter();

    void display_centers_capa();

    void display_centers_courese(string cid);

    void centercourses();

    void listcentercourses(string cid);

    

    void setcentcour(string ss);

    int centerlogin(string id, string pass);

};

vector<centers> cent;

#endif
