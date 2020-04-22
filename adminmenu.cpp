#include<iostream>
#include<string>
using namespace std;

void adminmenu()
{
    int choice;
    do
    {
        cout<<"\n\n------------------Admin Menu------------------\n";
        cout<<"\n\t 1.  List courses & eligibilities";
        cout<<"\n\t 2.  List center & capacities";
        cout<<"\n\t 3.  List Student";
        cout<<"\n\t 4.  Update student rank";
        cout<<"\n\t 5.  Allocate centers (Round 1)";
        cout<<"\n\t 6.  Allocate centers (Round 2)";
        cout<<"\n\t 7.  List allocated students";
        cout<<"\n\t 8.  List paid students";
        cout<<"\n\t 9.  List student reported (at center)";
        cout<<"\n\t 10. Generate PRN";
        cout<<"\n\t 11. List admitted student (with PRN) for given center";



                   
        cout<<"\n\t 0.  Sign Out....";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

     switch (choice)
     {  
        case 1 :                    
                {
                    courses c;
                    cout<<"\n------------------------------------------";                    
                    cout<<"\n      All Courses With Eligibilities";
                    cout<<"\n------------------------------------------";

                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(15)<<"Name";
                    cout<<setw(15)<<"Fees";
                    cout<<setw(10)<<"Section";
                    cout<<setw(45)<<"Eligibility (Degree with Percent)"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    c.display_courses_eligib();
                    break;
                }


        case 2 :
                {   
                    centers c;
                    cout<<"\n------------------------------------------";                    
                    cout<<"\n       All Centers with Capacities";
                    cout<<"\n------------------------------------------";

                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(25)<<"Address";
                    cout<<setw(25)<<"Coordinator";
                    cout<<setw(45)<<"Capacity (Course with seats)"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    c.display_centers_capa();
                    break;
                }
        

        case 3 :                    
                { 
                    cout<<"\n---------------------------------------------";                  
                    cout<<"\n            All Students Records";
                    cout<<"\n---------------------------------------------";                  

    
                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(12)<<"Rank A";
                    cout<<setw(12)<<"Rank B";
                    cout<<setw(12)<<"Rank C";
                    cout<<setw(25)<<"Degree";
                    cout<<setw(10)<<"Marks";
                    cout<<setw(15)<<"Pereference";
                    cout<<setw(15)<<"Course Name";
                    cout<<setw(12)<<"Center Id";
                    cout<<setw(14)<<"Payment";
                    cout<<setw(12)<<"Reported";
                    cout<<setw(10)<<"PNR"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    
                    
                    for (int i = 0; i < stu.size(); i++)
                     {
                        stu[i].displayallstudent();
                     }
    
                  
                    
                    break;
                }


        case 4 :
                {   
                    int sid,a,b,c;
                    cout<<"\n\n\tEnter Student ID : ";
                    cin>>sid;

                    student s;
                    s.updaterank(sid);   
                    break;
                }


        case 5 :                    
                {   student s;

                    for (int a = 1; a <=10; a++)
                    {
                        s.sectionA(a);
                        s.sectionB(a);
                        s.sectionC(a);
                    }

                    //                                 ofstream cp;
                    //                 cp.open("capacities.csv");

                    //                 for (int i = 0; i < capa.size(); i++)
                    //                 {
                    //                     cp<<capa[i].getcentid()<<","
                    //                     <<capa[i].getcentcour()<<","
                    //                     <<capa[i].getcapa()<<","
                    //                     <<capa[i].getremcapa()<<endl;
                    //                 }
                                    
                    //                 cp.close();
                    //                 cout<<"\nCapacity Data Saved";
                    //             ofstream st;
                    //                 st.open("studentsafter1.csv");

                    //     for (int i = 0; i < stu.size(); i++)
                    //     {
                    //         st<<stu[i].getstuid()<<","
                    //         <<stu[i].getstuname()<<","
                    //         <<stu[i].getrank_a()<<","
                    //         <<stu[i].getrank_b()<<","
                    //         <<stu[i].getrank_c()<<","
                    //         <<stu[i].getstudeg()<<","
                    //         <<stu[i].getstudeg_marks()<<","
                    //         <<stu[i].getpref_all()<<","
                    //         <<stu[i].getallocatedcour()<<","
                    //         <<stu[i].getallocatedcent()<<","
                    //         <<stu[i].getpayment()<<","
                    //         <<stu[i].getreported()<<","
                    //         <<stu[i].getprn()<<endl;
                    //     }
                        
                    //     st.close();
                    //     cout<<"Student Data Saved";
                    // cout<<"\n\n\tFirst Round Seat Allocated";
                    break;
                }


        case 6 :
                {   
                    student s;

                        
                        
//                         s.froundAverfiy();
//                         s.froundBverfiy();
//                         s.froundCverfiy();

                    s.verify();

                    for (int a = 1; a <=10; a++)
                    {
                        s.sectionA(a);
                        s.sectionB(a);
                        s.sectionC(a);
                    }



//                         s.froundAdealloc();
//                         s.froundBdealloc();
//                         s.froundCdealloc();


                        // ofstream st;
                        // st.open("studentsafter2.csv");

                        // for (int i = 0; i < stu.size(); i++)
                        // {
                        //     st<<stu[i].getstuid()<<","
                        //     <<stu[i].getstuname()<<","
                        //     <<stu[i].getrank_a()<<","
                        //     <<stu[i].getrank_b()<<","
                        //     <<stu[i].getrank_c()<<","
                        //     <<stu[i].getstudeg()<<","
                        //     <<stu[i].getstudeg_marks()<<","
                        //     <<stu[i].getpref_all()<<","
                        //     <<stu[i].getallocatedcour()<<","
                        //     <<stu[i].getallocatedcent()<<","
                        //     <<stu[i].getpayment()<<","
                        //     <<stu[i].getreported()<<","
                        //     <<stu[i].getprn()<<endl;
                        // }
                        
                        // st.close();
                        // cout<<"Student Data Saved";
                        // cout<<"\n\n\tSecond Round Seat Allocated";
                        
                    break;
                }


        case 7 :                    
                {
                    student s;
                    cout<<"\n---------------------------------------------";                  
                    cout<<"\n             Students Allocated";
                    cout<<"\n---------------------------------------------";                  

    
                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(12)<<"Rank A";
                    cout<<setw(12)<<"Rank B";
                    cout<<setw(12)<<"Rank C";
                    cout<<setw(25)<<"Degree";
                    cout<<setw(10)<<"Marks";
                    cout<<setw(15)<<"Pereference";
                    cout<<setw(15)<<"Course Name";
                    cout<<setw(12)<<"Center Id";
                    cout<<setw(14)<<"Payment";
                    cout<<setw(12)<<"Reported";
                    cout<<setw(10)<<"PNR"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    s.dispallotedstu();
                    break;
                }


        case 8 :
                {
                    student s;


                    cout<<"\n---------------------------------------------";                  
                    cout<<"\n            Fees Paid Students";
                    cout<<"\n---------------------------------------------";                  

    
                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(12)<<"Rank A";
                    cout<<setw(12)<<"Rank B";
                    cout<<setw(12)<<"Rank C";
                    cout<<setw(25)<<"Degree";
                    cout<<setw(10)<<"Marks";
                    cout<<setw(15)<<"Pereference";
                    cout<<setw(15)<<"Course Name";
                    cout<<setw(12)<<"Center Id";
                    cout<<setw(14)<<"Payment";
                    cout<<setw(12)<<"Reported";
                    cout<<setw(10)<<"PNR"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    s.disppaidstd();
                    break;
                }
        

        case 9 :                    
                {
                    student s;
                    cout<<"\n---------------------------------------------";                  
                    cout<<"\n             Students Reported";
                    cout<<"\n---------------------------------------------";                  

    
                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(12)<<"Rank A";
                    cout<<setw(12)<<"Rank B";
                    cout<<setw(12)<<"Rank C";
                    cout<<setw(25)<<"Degree";
                    cout<<setw(10)<<"Marks";
                    cout<<setw(15)<<"Pereference";
                    cout<<setw(15)<<"Course Name";
                    cout<<setw(12)<<"Center Id";
                    cout<<setw(14)<<"Payment";
                    cout<<setw(12)<<"Reported";
                    cout<<setw(10)<<"PNR"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    s.disprepstu();
                    break;
                }


        case 10 :
                {   
                    student s;
                    s.generateprn();
                    cout<<"\n\n\tPRN Generated Sucessfully";
                    break;
                }


        case 11 :                    
                {
                    student s;
                    string ccid;
                    cout<<"\n\t Enter Center ID";
                    cin>>ccid;
                    
                    cout<<"\n---------------------------------------------";                  
                    cout<<"\n         Students Admitted In Center";
                    cout<<"\n---------------------------------------------";                  

    
                    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<setw(6)<<"ID";
                    cout<<setw(20)<<"Name";
                    cout<<setw(15)<<"Pereference";
                    cout<<setw(15)<<"Course Name";
                    cout<<setw(10)<<"PNR"<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                    s.dispadmittedstuofcent(ccid);
                    break;
                }

    
        case 0 :
            cout<<"Exiting.......";
            break;

        default:
            cout<<"Wrong Input.....";
            break;
    }
    } while (choice!=0);
}
