#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
#include<sstream>



#include"courses.h"
#include"courses.cpp"

#include"student.h"
#include"student.cpp"

#include"centers.h"
#include"centers.cpp"

#include"eligib.h"
#include"eligib.cpp"

#include"capac.h"
#include"capac.cpp"

#include"pref.h"
#include"pref.cpp"



#include"studentmenu.cpp"
#include"adminmenu.cpp"
#include"centermenu.cpp"

using namespace std;







int main()
{
    void load_student();
    void load_center();
    void load_course();
    void load_eligib();
    void load_capa();
    void load_pref();

    void save_student();
    void save_center();
    void save_course();
    void save_enigb();
    void save_capa();
    void save_pref();


    load_student();
    load_center();
    load_course();
    load_eligib();
    load_capa();
    load_pref();

 


    int choice;
    do
    {
        cout<<"\n\n------------------Main Menu------------------\n";
        cout<<"\n\t 1.  Student";
        cout<<"\n\t 2.  Admin";
        cout<<"\n\t 3.  Center coordinator";
           
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch (choice)
        {  
            case 1 :                    
                    {
                        int choice;
                            do
                            {
                                
                                cout<<"\n\n------------------Student Menu------------------\n";
                                cout<<"\n\t 1.  Register Student";
                                cout<<"\n\t 2.  Student Sign In ";
                                        
                                cout<<"\n\t 0.  Exit";
                                cout<<"\n_________________________________";
                                cout<<"\n\t Enter Choice : ";
                                cin>>choice;

                            switch (choice)
                            {  
                                case 1 :                    
                                        {
                                            student s;
                                            s.addstudent();
                                            stu.push_back(s);
                                            break;
                                        }

                                case 2 :
                                        {   
                                            student stt;
                                            int id,flag=0;
                                            string pas;
                                            cout<<"\n\t Enter Student ID : ";
                                            cin>>id;
                                            cout<<"\tEnter Password : ";
                                            cin>>pas;
                                            flag=stt.studentlogin(id,pas);
                                        

                                            if (flag==0)
                                            {
                                                cout<<"\n\tEntered Wrong Student ID or Password";
                                            }
                                            else
                                            {
                                                studentmenu(id);
                                            }
                                            break;
                                        }

                            
                                case 0 :

                                        {
                                                            ofstream st;
                                                st.open("studentsafter1install.csv");

                                                for (int i = 0; i < stu.size(); i++)
                                                {
                                                    st<<stu[i].getstuid()<<","
                                                    <<stu[i].getstuname()<<","
                                                    <<stu[i].getrank_a()<<","
                                                    <<stu[i].getrank_b()<<","
                                                    <<stu[i].getrank_c()<<","
                                                    <<stu[i].getstudeg()<<","
                                                    <<stu[i].getstudeg_marks()<<","
                                                    <<stu[i].getpref_all()<<","
                                                    <<stu[i].getallocatedcour()<<","
                                                    <<stu[i].getallocatedcent()<<","
                                                    <<stu[i].getpayment()<<","
                                                    <<stu[i].getreported()<<","
                                                    <<stu[i].getprn()<<endl;
                                                }
                                                
                                                st.close();
                                                cout<<"Student Data Saved";
                                            cout<<"Exiting.......";
                                            break;
                                        }

                                default:
                                    cout<<"Wrong Input.....";
                                    break;
                            }
                            } while (choice!=0);  
                        break;
                    }


            case 2 :
                    {   
                        string uid,pas;
                        cout<<"\n\n\t Enter Admin UserID : ";
                        cin>>uid;

                        cout<<"\t Enter Password : ";
                        cin>>pas; 

                        if (uid=="admin" && pas=="admin")
                        {
                            adminmenu();
                        }
                        else
                        {
                            cerr<<"\n\n\t Wrong Admin Username or Password\n";
                        }               
                            
                        break;
                    }


            case 3 :
                    {
                        int flag=0;
                        string id,pass;
                        
                        cout<<"\n\n\t Enter Center UserID : ";
                        cin>>id;

                        cout<<"\t Enter Password : ";
                        cin>>pass; 

                        centers c;
                        flag=c.centerlogin(id,pass);

                        if (flag==1)
                        {
                            centermenu(id);
                        }
                        
                        else
                        {   
                            cout<<"\n\n\t Entered Center ID or Password is Wrong..";
                        }
                                                
                        break;
                    }
                    

            
            case 0 :
                    {
                        save_student();
                        save_center();
                        save_course();
                        save_enigb();
                        save_capa();
                        save_pref();
                        cout<<"\n\nAll data saved and now exiting.......\n\n";
                    break;
                    }

            default:
                cout<<"Wrong Input.....";
                break;
        }
        } while (choice!=0);
    
    return 0;
}



void load_student()
{
    ifstream sturec;
    string line,word;
    vector<string> token; 
    sturec.open("students.csv", ios::in);

    if(!sturec)
    {
        cout<<"\n\t Error in opening file";
        return;
    }
    while(getline(sturec,line))
    { 
        token.clear(); 
        stringstream ss(line); 
        while (getline(ss, word,',')) 
        {
            token.push_back(word);  
        } 

        student s(stoi(token[0]),token[1],stoi(token[2]),stoi(token[3]),stoi(token[4]),token[5],stod(token[6]),stoi(token[7]),token[8], token[9], stod(token[10]), stoi(token[11]), token[12]);
        stu.push_back(s);
        
    }

    sturec.close();        
    
}



void load_center()
{
    ifstream cen;
    string line,eline,word,eword;
    vector<string> tokencent,tokencour;
    cen.open("centers.csv");  

    if(!cen)
    {
        cout<<"\n\t Error in opening file";
        return;
    }      

    while(getline(cen,line))
    {
            tokencent.clear();
        stringstream ss(line);
        while (getline(ss,word,','))
        {
            tokencent.push_back(word);
        }

        centers c(tokencent[0], tokencent[1], tokencent[2], tokencent[3], tokencent[4]);

        cent.push_back(c);
    }
    cen.close();
}



void load_course()
{
    ifstream cour;
    int x=0;
    string line,word;
    vector<string> tokencour;
            
    cour.open("courses.csv");            
    while (getline(cour,line))
    {
        tokencour.clear();
        int x;
        stringstream ss(line);
        while (getline(ss,word,','))
        {
            tokencour.push_back(word);
        }

        courses c(stoi(tokencour[0]), tokencour[1], tokencour[2],tokencour[3]); 

        cours.push_back(c);      
    }
    cour.close();
}



void load_eligib()
{
    string eline,eword,x;
    vector<string> tokenelg;
    ifstream elg;
    elg.open("eligibilities.csv");
    while(getline(elg,eline))
    {   tokenelg.clear();
        stringstream ess(eline);
        while (getline(ess,eword,','))
        {
            tokenelg.push_back(eword);
        }
        eligib e(tokenelg[0], tokenelg[1],stod(tokenelg[2]));

       elig.push_back(e);
    }
    elg.close();
}



void load_capa()
{
    string eline,eword,x;
    vector<string> tokencapa;
    ifstream cap;
    cap.open("capacities.csv");
    while(getline(cap,eline))
    {   tokencapa.clear();
        stringstream ess(eline);
        while (getline(ess,eword,','))
        {
            tokencapa.push_back(eword);
        }
            capac ca(tokencapa[0],tokencapa[1], stoi(tokencapa[2]),stoi(tokencapa[3]));
            
            capa.push_back(ca);
    }
    cap.close();
}



void load_pref()
{
    string eline,eword,x;
    vector<string> tokenpre;
    ifstream preff;
    preff.open("preferences.csv");
    while(getline(preff,eline))
    {   tokenpre.clear();
        stringstream ess(eline);
        while (getline(ess,eword,','))
        {
            tokenpre.push_back(eword);
        }
            pref p(stoi(tokenpre[0]), stoi(tokenpre[1]), tokenpre[2], tokenpre[3] );
            
            pre.push_back(p);
    }
    preff.close();
}





void save_student()
{
    ofstream st;
    st.open("students.csv");

    for (int i = 0; i < stu.size(); i++)
    {
        st<<stu[i].getstuid()<<","
          <<stu[i].getstuname()<<","
          <<stu[i].getrank_a()<<","
          <<stu[i].getrank_b()<<","
          <<stu[i].getrank_c()<<","
          <<stu[i].getstudeg()<<","
          <<stu[i].getstudeg_marks()<<","
          <<stu[i].getpref_all()<<","
          <<stu[i].getallocatedcour()<<","
          <<stu[i].getallocatedcent()<<","
          <<stu[i].getpayment()<<","
          <<stu[i].getreported()<<","
          <<stu[i].getprn()<<endl;
    }
    
    st.close();
    cout<<"Student Data Saved";
}

void save_center()
{
     ofstream ct;
    ct.open("centers.csv");

    for (int i = 0; i < cent.size(); i++)
    {
        ct<<cent[i].getcenterid()<<","
          <<cent[i].getcenternm()<<","
          <<cent[i].getadd()<<","
          <<cent[i].getcoord()<<","
          <<cent[i].getpass()<<endl;
    }
    
    ct.close();
    cout<<"\nCenter Data Saved";
}

void save_course()
{
    ofstream co;
    co.open("courses.csv");

    for (int i = 0; i < cours.size(); i++)
    {
        co<<cours[i].getcoid()<<","
          <<cours[i].getconame()<<","
          <<cours[i].getcofees()<<","
          <<cours[i].getcosection()<<endl;
    }
    
    co.close();
    cout<<"\nCourse Data Saved";
}
    
void save_enigb()
{
    ofstream eg;
    eg.open("eligibilities.csv");

    for (int i = 0; i < elig.size(); i++)
    {
        eg<<elig[i].getelgname()<<","
          <<elig[i].getelgdeg()<<","
          <<elig[i].getelgper()<<endl;
    }
    
    eg.close();
    cout<<"\nEligibility Data Saved";   
}

void save_capa()
{
    ofstream cp;
    cp.open("capacities.csv");

    for (int i = 0; i < capa.size(); i++)
    {
        cp<<capa[i].getcentid()<<","
          <<capa[i].getcentcour()<<","
          <<capa[i].getcapa()<<","
          <<capa[i].getremcapa()<<endl;
    }
    
    cp.close();
    cout<<"\nCapacity Data Saved";
}
void save_pref()
{
    ofstream prf;
    prf.open("preferences.csv");

    for (int i = 0; i < pre.size(); i++)
    {
        prf<<pre[i].getformno()<<","
          <<pre[i].getper()<<","
          <<pre[i].getcourname()<<","
          <<pre[i].getcentid()<<endl;
    }
    
    prf.close();
    cout<<"\nPreference Data Saved";
}