#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>

#include"student.h"
#include"centers.h"
#include"pref.h"
#include"capac.h"
#include"eligib.h"
#include"courses.h"


using namespace std;


student::student()
{

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

int student::getstuid()
{
    return this->id;
}
string student::getstuname()
{
    return this->name;
}
int student::getrank_a()
{
    return this->rank_a;
}
int student::getrank_b()
{
    return this->rank_b;
}
int student::getrank_c()
{
    return this->rank_c;
}
string student::getstudeg()
{
    return this->degree;
}
double student::getstudeg_marks()
{
    return this->degree_marks;
}
int student::getpref_all()
{
    return this->pereference_allocated;
}
string student::getallocatedcour()
{
    return this->course_name;
}
string student::getallocatedcent()
{
    return this->center_id;
}
int student::getpayment()
{
    return this->payment;
}
int student::getreported()
{
    return this->reported;
}
string student::getprn()
{
    return this->pnr;
}





void student::setreprted(int rep)
{
    this->reported=rep;
}

void student::setrank_a(int rank_a)
{
    this->rank_a=rank_a;
}


void student::setrank_b(int rank_b)
{
    this->rank_b=rank_b;
}


void student::setrank_c(int rank_c)
{
    this->rank_c=rank_c;
}





void student::addstudent()
{
    int id,n;
    double degree_marks;
    string name,degr;
    vector<string> seldeg;
    

    cout<<"\n\n\t\t Student Registration Form ";
    cout<<"\n---------------------------------------------------------------------------------------------------";
    cout<<"\n\n\tEnter Name : ";
    cin>>name;
    cout<<"\n\tSelect Degree : ";
                ifstream deg;
                deg.open("degrees.txt", ios::in); 
                int i=1;
                while (getline(deg,degr))
                {
                    cout<<"\n\t\t"<<i<<".  "<<degr.c_str();
                    seldeg.push_back(degr);
                    ++i;
                }
    cout<<"\n\t";
    cin>>n;
    --n;
    
    
    cout<<"\n\t"<<seldeg[n];
    cout<<"\n\tEnter Degree Percentage : ";
    cin>>degree_marks;

    sort(stu.begin(), stu.end(), [](const student& lhs, const student& rhs) { return lhs.id < rhs.id;  });

    id=stu.back().id;
    ++id;
    this->id=id;
    this->name=name;
    this->rank_a=-1;
    this->rank_b=-1;
    this->rank_c=-1;
    this->degree=seldeg[n];
    this->degree_marks=degree_marks;
    this->pereference_allocated=0;
    this->course_name="NA";
    this->center_id="NA";
    this->payment=0;
    this->reported=0;
    this->pnr="NA";
    
    cout<<"\n\n\tStudent Registered";


    cout<<"\n\n\tForm No : "<<this->id;
    cout<<"\n\tName : "<<this->name; 
    cout<<"\n\tDegree : "<<this->degree;
    cout<<"\n\tDegree Marks : "<<this->degree_marks;  

     
}



void student::displayallstudent()
{
   
        cout<<setw(6)<<this->id;
        cout<<setw(20)<<this->name;
        cout<<setw(12)<<this->rank_a;
        cout<<setw(12)<<this->rank_b;
        cout<<setw(12)<<this->rank_c;
        cout<<setw(25)<<this->degree;
        cout<<setw(10)<<this->degree_marks;
        cout<<setw(15)<<this->pereference_allocated;
        cout<<setw(15)<<this->course_name;
        cout<<setw(12)<<this->center_id;
        cout<<setw(14)<<this->payment;
        cout<<setw(12)<<this->reported;
        cout<<setw(10)<<this->pnr<<endl;   
    
}


void student::displycoursesforstu(int sid)
{
    for (int i = 0; i < stu.size(); i++)
    { 
        if(stu[i].id==sid)
        { 
            for (int j = 0; j < elig.size(); j++)
            { 
                if (elig[j].getelgdeg()==stu[i].getstudeg())
                {
                    for (int k = 0; k < cours.size(); k++)
                    {
                        if (cours[k].getconame()==elig[j].getelgname())
                        {
                            cout<<setw(6)<<cours[k].getcoid();
                            cout<<setw(15)<<cours[k].getconame();
                            cout<<setw(15)<<cours[k].getcofees();
                            cout<<setw(10)<<cours[k].getcosection()<<endl;
                        }
                        
                    }
                    
                    
                    
                }
                
            }
            
        }
    }
    
}



void student::disppaidstd()
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].payment>11801.00)
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(12)<<stu[i].rank_a;
            cout<<setw(12)<<stu[i].rank_b;
            cout<<setw(12)<<stu[i].rank_c;
            cout<<setw(25)<<stu[i].degree;
            cout<<setw(10)<<stu[i].degree_marks;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(12)<<stu[i].center_id;
            cout<<setw(14)<<stu[i].payment;
            cout<<setw(12)<<stu[i].reported;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
    }
    
   
       
        

}


void student::dispallotedcent(int sid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].id==sid)
        {
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(12)<<stu[i].course_name;
            cout<<setw(12)<<stu[i].center_id;
        }
        
        
    }
        
}


int student::studentlogin(int id,string pass)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (id==stu[i].id && pass==stu[i].name)
        { 
            return 1;
        } 
    }
    return 0;  
}


void student::displaystudentofcenter(string cid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].center_id==cid && stu[i].payment==0 && stu[i].payment<1)
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(12)<<stu[i].rank_a;
            cout<<setw(12)<<stu[i].rank_b;
            cout<<setw(12)<<stu[i].rank_c;
            cout<<setw(25)<<stu[i].degree;
            cout<<setw(10)<<stu[i].degree_marks;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(14)<<stu[i].payment;
            cout<<setw(12)<<stu[i].reported;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
        
    }
    
}


void student::dispstuadmitted(string cid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].center_id==cid && stu[i].reported==1 && stu[i].pnr!="NA")
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(12)<<stu[i].rank_a;
            cout<<setw(12)<<stu[i].rank_b;
            cout<<setw(12)<<stu[i].rank_c;
            cout<<setw(25)<<stu[i].degree;
            cout<<setw(10)<<stu[i].degree_marks;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(14)<<stu[i].payment;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
        
    }
    
}


void student::dispallotedstu()
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].pereference_allocated>0 && stu[i].payment==0 && stu[i].payment<1) 
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(12)<<stu[i].rank_a;
            cout<<setw(12)<<stu[i].rank_b;
            cout<<setw(12)<<stu[i].rank_c;
            cout<<setw(25)<<stu[i].degree;
            cout<<setw(10)<<stu[i].degree_marks;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(12)<<stu[i].center_id;
            cout<<setw(14)<<stu[i].payment;
            cout<<setw(12)<<stu[i].reported;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
        
    }
    
}


void student::disprepstu()
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].reported==1)
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(12)<<stu[i].rank_a;
            cout<<setw(12)<<stu[i].rank_b;
            cout<<setw(12)<<stu[i].rank_c;
            cout<<setw(25)<<stu[i].degree;
            cout<<setw(10)<<stu[i].degree_marks;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(12)<<stu[i].center_id;
            cout<<setw(14)<<stu[i].payment;
            cout<<setw(12)<<stu[i].reported;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
        
    }
    
}


void student::dispadmittedstuofcent(string ccid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].reported==1 && stu[i].center_id==ccid && stu[i].pnr!="NA")
        {
            cout<<setw(6)<<stu[i].id;
            cout<<setw(20)<<stu[i].name;
            cout<<setw(15)<<stu[i].pereference_allocated;
            cout<<setw(15)<<stu[i].course_name;
            cout<<setw(10)<<stu[i].pnr<<endl; 
        }
        
    }
}


void student::paymentfirst(int sid)
{
     for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].id==sid)
        {
            int flag=0;
            
            if(stu[i].payment==0.00 && stu[i].pereference_allocated!=0)
            {
                cout<<"\n\n\tUpdate Payment status";
                cout<<"\n-----------------------------------";
                cout<<"\n\n\t 1. Pay First Installment of Rs.11,800 ";
                cout<<"\n\t 0. Deny ";
                cout<<"\n\n Enter choice : ";
                cin>>flag;
                if (flag==1)
                {
                    stu[i].payment=11800.00;

                    if (stu[i].payment==11800.00)
                    {
                        cout<<"\n Payment Done............";   
                        break;                 
                    }
                }
                else
                {
                    cout<<"\n Payment Not Done............";
                    break;
                }
                
            }

            else if (stu[i].payment== 11800.00)
            {
                cout<<"First Installment is alreay Paid";
            }
            
            else
            {
                cout<<"\n\n Not Eligible";
            }
            
        }
    }
}


void student::paymentsecond(int sid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].id==sid)
        {
            int flag=0;
            
            if(stu[i].payment==11800.00)
            {
                cout<<"\n\n\tUpdate Payment status";
                cout<<"\n-----------------------------------";
                cout<<"\nFirst Installment is Paid";
                cout<<"\n\n\t 1. Pay Second Installment";
                cout<<"\n\t 0. Deny ";
                cout<<"\n\n Enter choice : ";
                cin>>flag;
                if (flag==1 && (stu[i].course_name=="PG-DAC"||stu[i].course_name=="PG-DMC"  ||stu[i].course_name=="PG-DESD"))
                {
                    stu[i].payment=stu[i].payment+94000;

                    if (stu[i].payment==105800.00)
                    {
                        cout<<"\n Payment Done............";   
                        break;                 
                    }
                }

                else if (flag==1 && stu[i].course_name=="PG-DGI")
                {
                    stu[i].payment=stu[i].payment+80000;

                    if (stu[i].payment==91800.00)
                    {
                        cout<<"\n Payment Done............";   
                        break;                 
                    }
                }


                else if (flag==1 && stu[i].course_name=="PG-DBDA")
                {
                    stu[i].payment=stu[i].payment+115000;

                    if (stu[i].payment==126800.00)
                    {
                        cout<<"\n Payment Done............";   
                        break;                 
                    }
                }

                else
                {
                    cout<<"\n Payment Not Done............";
                    break;
                }
                
            }

            else if(stu[i].payment==0.00 && stu[i].pereference_allocated!=0)
            {
                cout<<"\n\n First installement is not paid yet";
                break;
            }

            else if(stu[i].payment>11801.00)
            {
                cout<<"\n\n First and Second installement is already paid";
                break;
            }  

            else
            {
                cout<<"\n\n Not Eligible";
            }
        }
             
    }
}

void student::updatereport(int sid)
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].id==sid)
        {   
            int n;
            cout<<"\n\n\t 1. Reported ";
            cout<<"\n\t 2. Not Reported ";
            cin>>n;

            if (n==1)
            {
                cout<<"\n\t"<<stu[i].name<<" status changed to reported";
                stu[i].setreprted(1);
            }
            else if(n==0)
            {
                cout<<"\n\t"<<stu[i].name<<" status changed to reported";
                stu[i].setreprted(2);
            }
            else
            {
                cout<<"\n\tWrong Input";
            }
            
            
            

        }
        
    }
    
}

void student::updaterank(int sid)
{  int a,b,c;
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].id==sid)
        {
            cout<<"\n\n\t"<<stu[i].getstuname();
            cout<<"\n\n\t Enter Rank A : ";
            cin>>a;
            cout<<"\n\t Enter Rank B : ";
            cin>>b;
            cout<<"\n\t Enter Rank C : ";
            cin>>c;
            stu[i].setrank_a(a);
            stu[i].setrank_b(b);
            stu[i].setrank_c(c);
        }
    } 
} 


 void student::generateprn()
 {
     for (int i = 0; i < stu.size(); i++)
     {
         if (stu[i].reported==1 && stu[i].payment>11801.00 && stu[i].pnr=="NA")
         {
             int x=stu[i].id;
             x=x+100000;
             string p = to_string(x);

             stu[i].pnr= stu[i].center_id + p;
         }
         
     }
     
 }


// void student::paymentupdate()
// {
   
        
//         else if (stu[i].payment==11800.00)
//         {
//             cout<<"\n\n First Installment is Paid";
//             cout<<"\n\n\t 1. Pay Second Installment";
//             cout<<"\n\t 0. Deny ";
//             cout<<"\n\n Enter choice : ";
//             cin>>flag;
//             if (flag==1)
//             {
//                 if(stu[i].course_name=="PG-DGI")
//                 {
//                     stu[i].payment=stu[i].payment+80000.00;

//                     if (stu[i].payment==91800.00)
//                     {
//                         cout<<"\n Payment Done";   
//                         break;                 
//                     }
//                 }

//                 if(stu[i].course_name=="PG-DGI")
//                 {
//                     stu[i].payment=stu[i].payment+115000.00;

//                     if (stu[i].payment==126800.00)
//                     {
//                         cout<<"\n Payment Done";    
//                         break;                
//                     }
//                 }


//                 if(stu[i].course_name=="PG-DMC" ||stu[i].course_name=="PG-DESD" || stu[i].course_name=="PG-DAC")
//                 {
//                     stu[i].payment=stu[i].payment+94000.00;

//                     if (stu[i].payment==105800.00)
//                     {
//                         cout<<"\n Payment Done";    
//                         break;                
//                     }
//                 }
//                 break;
                
//             }
//             else
//             {
//                 cout<<"\n Payment Not Done";
//             }
//         }
        
//         else if (stu[i].payment> 11801.00)
//         {
//             cout<<"First and Second Installement has Paid";
//             break;
//         }
    

//     }
// }



// void student::firstroundA()
// {
//     sort(stu.begin(), stu.end(), [](const student& lhs, const student& rhs) { return lhs.rank_a < rhs.rank_a;  });

//     for (int n = 1; n <= 10; n++)
//     {
//         for (int i = 0; i < stu.size(); i++)
//         {
//             for (int j = 0; j < pre.size(); j++)
//             {
//                 if (pre[j].getcourname()=="PG-DGI" && pre[j].getformno()==stu[i].id && pre[j].getper()==n)
//                 {
//                     for (int k = 0; k < cent.size(); k++)
//                     {
//                         for (int l = 0; l < capa.size(); l++)
//                         {
//                             if ( pre[j].getcentid()==capa[l].getcentid())
//                             {
//                                  if (cent[k].getcenterid()==pre[j].getcentid())
//                                  {
//                                     if (capa[l].getremcapa()<capa[l].getcapa())
//                                     {
//                                         stu[i].pereference_allocated=n;
//                                         int x=0;
//                                         x=capa[l].getremcapa()+1;
//                                         capa[l].setremcapa(x);                                            
//                                         stu[i].center_id=pre[k].getcentid();
//                                         stu[i].course_name="PG-DGI";
//                                     }
//                                 }                                 
//                             }                            
//                         }                        
//                     }                    
//                 }                
//             }            
//         }        
//     }
// }





void student::sectionA(int j)
{
sort(stu.begin(), stu.end(), [](const student& lhs, const student& rhs){ return lhs.rank_a < rhs.rank_a;});
    for (int i = 0; i < stu.size(); i++)
    {   
        if (stu[i].pereference_allocated==0 && stu[i].rank_a>0 && stu[i].payment>=0) 
        {
            for (int k = 0; k < pre.size(); k++)
            {      
                for (int m = 0; m < capa.size(); m++)
                {
                    if (pre[k].getcourname()=="PG-DGI" && pre[k].getformno()==stu[i].id && pre[k].getper()==j && capa[m].getcentid()==pre[k].getcentid() && capa[m].getcentcour()==pre[k].getcourname() ) 
                    {   
                        if( capa[m].getremcapa()<capa[m].getcapa())
                        {
                            stu[i].pereference_allocated=j;
                            int x=0;
                            x=capa[m].getremcapa()+1;
                            capa[m].setremcapa(x);                                            
                            stu[i].center_id=pre[k].getcentid();
                            stu[i].course_name=pre[k].getcourname();
                        }
                    }                               
                }                        
            }                   
        }
    }
}
void student::sectionB(int j)
{
sort(stu.begin(), stu.end(), [](const student& lhs, const student& rhs){ return lhs.rank_b < rhs.rank_b;});
    for (int i = 0; i < stu.size(); i++)
    {   
        if (stu[i].pereference_allocated==0 && stu[i].rank_b>0 && stu[i].payment>=0)
        {
            for (int k = 0; k < pre.size(); k++)
            {      
                for (int m = 0; m < capa.size(); m++)
                {




                    if (pre[k].getcourname()=="PG-DBDA" && pre[k].getformno()==stu[i].id && pre[k].getper()==j && capa[m].getcentid()==pre[k].getcentid() && capa[m].getcentcour()==pre[k].getcourname() ) 
                    {   
                        if( capa[m].getremcapa()<capa[m].getcapa() )
                        {
                            stu[i].pereference_allocated=j;
                            int x=0;
                            x=capa[m].getremcapa()+1;
                            capa[m].setremcapa(x);                                            
                            stu[i].center_id=pre[k].getcentid();
                            stu[i].course_name=pre[k].getcourname();

                        }
                    }                               
                    else if (pre[k].getcourname()=="PG-DMC" && pre[k].getformno()==stu[i].id && pre[k].getper()==j && capa[m].getcentid()==pre[k].getcentid() && capa[m].getcentcour()==pre[k].getcourname() ) 
                    {   
                        if( capa[m].getremcapa()<capa[m].getcapa() )
                        {
                            stu[i].pereference_allocated=j;
                            int x=0;
                            x=capa[m].getremcapa()+1;
                            capa[m].setremcapa(x);                                            
                            stu[i].center_id=pre[k].getcentid();
                            stu[i].course_name=pre[k].getcourname();

                        }
                    } 
                    else if (pre[k].getcourname()=="PG-DAC" && pre[k].getformno()==stu[i].id && pre[k].getper()==j && capa[m].getcentid()==pre[k].getcentid() && capa[m].getcentcour()==pre[k].getcourname()) 
                    {   
                        if( capa[m].getremcapa()<capa[m].getcapa() )
                        {
                            stu[i].pereference_allocated=j;
                            int x=0;
                            x=capa[m].getremcapa()+1;
                            capa[m].setremcapa(x);                                            
                            stu[i].center_id=pre[k].getcentid();
                            stu[i].course_name=pre[k].getcourname();

                        }
                    }
                }
            }
        }
    }
}
void student::sectionC(int j)
{
sort(stu.begin(), stu.end(), [](const student& lhs, const student& rhs){ return lhs.rank_c < rhs.rank_c;});
    for (int i = 0; i < stu.size(); i++)
    {   
        if (stu[i].pereference_allocated==0 && stu[i].rank_c>0 && stu[i].payment>=0)
        {
            for (int k = 0; k < pre.size(); k++)
            {      
                for (int m = 0; m < capa.size(); m++)
                {
                    if (pre[k].getcourname()=="PG-DESD" && pre[k].getformno()==stu[i].id && pre[k].getper()==j && capa[m].getcentid()==pre[k].getcentid() && capa[m].getcentcour()==pre[k].getcourname() ) 
                    {   
                        if( capa[m].getremcapa()<capa[m].getcapa() )
                        {
                            stu[i].pereference_allocated=j;
                            int x=0;
                            x=capa[m].getremcapa()+1;
                            capa[m].setremcapa(x);                                            
                            stu[i].center_id=pre[k].getcentid();
                            stu[i].course_name=pre[k].getcourname();

                        }
                    }                               
                }                        
            }                   
        }
    }
}




void student::verify()
{
    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].course_name!="NA" && stu[i].payment==0.00)
        {
            stu[i].pereference_allocated=0;
            stu[i].course_name="NA";
            stu[i].center_id="NA";
            stu[i].payment=-1;
        }

        else
        {
            stu[i].pereference_allocated=0;
            stu[i].course_name="NA";
            stu[i].center_id="NA";
        }
        
    }

    for (int i = 0; i < capa.size(); i++)
    {
        capa[i].setremcapa(0);
    }
    
    
}





// void student::froundAverfiy()
// {
//     for (int i = 0; i < stu.size(); i++)
//     {
//         if (stu[i].course_name!="NA" && stu[i].payment==0.00)
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DGI" && stu[i].course_name==capa[k].getcentcour() && stu[i].center_id==capa[k].getcentid())
//                 {
//                     int x=capa[k].getremcapa();
//                     x=x-1;
//                     capa[k].setremcapa(x);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NAAA";
//                     stu[i].payment=-1;
//                 }
//             }
//         }

//         else 
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DGI")
//                 {
//                     capa[k].setremcapa(0);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NA";
//                     stu[i].center_id="NA";
//                     stu[i].pereference_allocated=0;
//                 }
//             }
//         }
//     }
// }
// void student::froundBverfiy()
// {
//     for (int i = 0; i < stu.size(); i++)
//     {
//         if (stu[i].course_name!="NA" && stu[i].payment==0.00)
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DAC" && stu[i].course_name==capa[k].getcentcour() && stu[i].center_id==capa[k].getcentid())
//                 {
//                     int x=capa[k].getremcapa();
//                     x=x-1;
//                     capa[k].setremcapa(x);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NAAA";
//                     stu[i].payment=-1;
//                 }

//                 else if (capa[k].getcentcour()=="PG-DMC" && stu[i].course_name==capa[k].getcentcour() && stu[i].center_id==capa[k].getcentid())
//                 {
//                     int x=capa[k].getremcapa();
//                     x=x-1;
//                     capa[k].setremcapa(x);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NAAA";
//                     stu[i].payment=-1;
//                 }

//                 else if (capa[k].getcentcour()=="PG-DBDA" && stu[i].course_name==capa[k].getcentcour() && stu[i].center_id==capa[k].getcentid())
//                 {
//                     int x=capa[k].getremcapa();
//                     x=x-1;
//                     capa[k].setremcapa(x);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NAAA";
//                     stu[i].payment=-1;
//                 }
//             }
//         }

//         else 
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DAC")
//                 {
//                     capa[k].setremcapa(0);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NA";
//                     stu[i].center_id="NA";
//                 }

//                 else if (capa[k].getcentcour()=="PG-DMC")
//                 {
//                     capa[k].setremcapa(0);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NA";
//                     stu[i].center_id="NA";
//                 }

//                 else if (capa[k].getcentcour()=="PG-DBDA")
//                 {
//                     capa[k].setremcapa(0);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NA";
//                     stu[i].center_id="NA";
//                 }
//             }
//         }
//     }
    
// }
// void student::froundCverfiy()
// {
//     for (int i = 0; i < stu.size(); i++)
//     {
//         if (stu[i].course_name!="NA" && stu[i].payment==0.00)
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DESD" && stu[i].course_name==capa[k].getcentcour() && stu[i].center_id==capa[k].getcentid())
//                 {
//                     int x=capa[k].getremcapa();
//                     x=x-1;
//                     capa[k].setremcapa(x);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NAAA";
//                     stu[i].payment=-1;
//                 }
//             }
//         }

//         else 
//         {
//             for (int k = 0; k < capa.size(); k++)
//             {
//                 if (capa[k].getcentcour()=="PG-DESD")
//                 {
//                     capa[k].setremcapa(0);
//                     //cout<<capa[k].getcentcour()<<"    "<<capa[k].getcapa()<<"   "<<capa[k].getremcapa()<<endl;
//                     stu[i].course_name="NA";
//                     stu[i].center_id="NA";
//                 }
//             }
//         }
//     }
// }







// void student::froundAdealloc()
// {
//     for (int j = 0; j < capa.size(); j++)
//     { 
//         for (int i = 0; i < stu.size(); i++)
//         {
//             if (stu[i].course_name=="NAAA")
//             {
//                 stu[i].pereference_allocated=0;
//                 stu[i].course_name="NA";
//                 stu[i].center_id="NA";
//             }
//             else
//             {
            
//             }
//         }
//     }
    
// }
// void student::froundBdealloc()
// {
//     for (int j = 0; j < capa.size(); j++)
//     { 
//         for (int i = 0; i < stu.size(); i++)
//         {
//             if (stu[i].course_name=="NAAA")
//             {
//                 stu[i].pereference_allocated=0;
//                 stu[i].course_name="NA";
//                 stu[i].center_id="NA";
//             }
//             else
//             {
            
//             }
//         }
//     }
// }
// void student::froundCdealloc()
// {
//     for (int j = 0; j < capa.size(); j++)
//     { 
//         for (int i = 0; i < stu.size(); i++)
//         {
//             if (stu[i].course_name=="NAAA")
//             {
//                 stu[i].pereference_allocated=0;
//                 stu[i].course_name="NA";
//                 stu[i].center_id="NA";
//             }
//             else
//             {
            
//             }
//         }
//     }
// }
