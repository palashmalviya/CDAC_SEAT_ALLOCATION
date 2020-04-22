#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include"student.h"
using namespace std;

student::student()
{
    this->id=0;
    this->name=" ";
    this->rank_a=0;
    this->rank_b=0;
    this->rank_c=0;
    this->degree=" ";
    this->degree_marks=0.0;
    int pereference_allocated=0;
    this->course_name=" ";
    this->center_id=" ";
    this->payment=0.0;
    this->reported=0;
    this->pnr=" ";
    
}
student::student(int id, string name, int rank_a, int rank_b, int rank_c, string degree, double degree_marks,int pereference_allocated, string course_name, string center_id, double payment, int reported, string pnr)
{
    this->id=id;
    this->name=name;
    this->rank_a=rank_a;
    this->rank_b=rank_b;
    this->rank_c=rank_c;
    this->degree=degree;
    this->degree_marks=degree_marks;
    this->pereference_allocated=pereference_allocated;
    this->course_name=course_name;
    this->center_id=center_id;
    this->payment=payment;
    this->reported=reported;
    this->pnr=pnr;
    
}

void student::displaystu()
{
    ifstream sturec;
    string line,word;
    vector<string> token; 
    sturec.open("students.csv", ios::in);



        while(getline(sturec,line))
        { 
        token.clear(); 

        stringstream ss(line); 
        while (getline(ss, word,',')) 
        {
            token.push_back(word); 
           
        } 

        this->id=stoi(token[0]);
        this->name=token[1];
        this->rank_a=stoi(token[2]);
        this->rank_b=stoi(token[3]);
        this->rank_c=stoi(token[4]);
        this->degree=token[5];
        this->degree_marks=stod(token[6]);
        this->pereference_allocated=stoi(token[7]);
        this->course_name=token[8];
        this->center_id=token[9];
        this->payment=stod(token[10]);
        this->reported=stoi(token[11]);
        this->pnr=token[12];
        
    

        cout<<setw(6)<<this->id;
        cout<<setw(20)<<this->name;
        cout<<setw(6)<<this->rank_a;
        cout<<setw(6)<<this->rank_b;
        cout<<setw(6)<<this->rank_c;
        cout<<setw(25)<<this->degree;
        cout<<setw(10)<<this->degree_marks;
        cout<<setw(3)<<this->pereference_allocated;
        cout<<setw(10)<<this->course_name;
        cout<<setw(6)<<this->center_id;
        cout<<setw(14)<<this->payment;
        cout<<setw(4)<<this->reported;
        cout<<setw(10)<<this->pnr<<endl;
    }

    sturec.close();        
        
}

