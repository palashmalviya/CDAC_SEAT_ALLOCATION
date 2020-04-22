#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int id; //A
    string name; //B
    int rank_a; //C
    int rank_b; //D
    int rank_c; //E
    string degree; //F
    double degree_marks; //G
    int pereference_allocated; //H
    string course_name; //I
    string center_id; //J
    double payment; //K
    int reported; //L
    string pnr; //M
    
public:
    student();
    student (int id, string name, int rank_a, int rank_b, int rank_c, string degree, double degree_marks,int pereference_allocated, string course_name, string center_id, double payment, int reported, string pnr);
    void addstu();
    void displaystu();    
};

vector<student> stu;

#endif





