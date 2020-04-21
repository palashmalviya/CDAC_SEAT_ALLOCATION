#ifndef COURSES_H_
#define COURSES_H_

#include<iostream>
#include<string>
using namespace std;


class courses
{
private:
    int id; //A
    string name; //B
    string fees; //C
    string section; //D
    vector<string> eligibility; //E
    vector<string> centers; //F
    
    
public:
    courses();

    courses(int id, string name,string fees, string section);

    void addcourses();

    void displycourses();

    void displycoursesforstu(int sid);

    void display_courses_eligib();    

    void listcoursescenter();

    int getcoid();

    string getconame();

    string getcofees();
 
    string getcosection();
 
 
    void setcoureligib(string el);
    
};

vector<courses> cours;

#endif
