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
    student ();
    student (int id, string name, int rank_a, int rank_b, int rank_c, string degree, double degree_marks,int pereference_allocated, string course_name, string center_id, double payment, int reported, string pnr);
    
    
        
    int getstuid();

    string getstuname();  
    
    int getrank_a();

    int getrank_b();

    int getrank_c();

    string getstudeg();

    double getstudeg_marks();

    int getpref_all();

    string getallocatedcour();

    string getallocatedcent();

    int getpayment();

    int getreported();

    string getprn();





    void setreprted(int rep);

    void setrank_c(int);

    void setrank_b(int );

    void setrank_a(int );











    void addstudent();

    void displayallstudent(); 

    void generateprn();
    
    void dispallotedcent(int sid);

    void displycoursesforstu(int sid);

    void displaystudentofcenter(string cid);

    void dispstuadmitted(string cid);

    void dispallotedstu();

    int studentlogin(int id,string pass);

    void disppaidstd();

    void disprepstu();

    void updatereport(int sid);

    void updaterank(int sid);


    void dispadmittedstuofcent(string ccid);



    void verify();

    void sectionA(int j);

    void sectionB(int j);

    void sectionC(int j);





    void paymentfirst(int);

    void paymentsecond(int);



    // void froundAverfiy();
    // void froundBverfiy();
    // void froundCverfiy();

    // void froundAdealloc();
    // void froundBdealloc();
    // void froundCdealloc();







     
};

vector<student> stu;

#endif





