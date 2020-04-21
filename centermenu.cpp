#include<iostream>
#include<string>
using namespace std;


void centermenu(string cid)
{
    int choice;
    do
    {
        cout<<"\n\n------------------Center Menu------------------\n";
        cout<<"\n\t 1.  List courses";
        cout<<"\n\t 2.  List Students";
        cout<<"\n\t 3.  Update Report Status";
        cout<<"\n\t 4.  List Admitted Student";
                           
        cout<<"\n\t 0.  Sign Out";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch (choice)
        {  
            case 1 :                    
                    {
                        centers c; 
                        
                        cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        cout<<setw(6)<<"All Courses"<<endl;              
                        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                        c.display_centers_courese(cid);
                    
                        break;
                    }


            case 2 :
                    {   
                        student s;

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
                        cout<<setw(14)<<"Payment";
                        cout<<setw(12)<<"Reported";
                        cout<<setw(10)<<"PNR"<<endl;
                        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";


                        s.displaystudentofcenter(cid);
                        break;
                    }
            

          
            case 3 :                    
                    {
                        student s;
                        int sid;
                        cout<<"\n\n\tEnter Student ID : ";
                        cin>>sid;
                        s.updatereport(sid);
                        break;
                    }


            case 4 :
                    {   
                        student s;

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
                        cout<<setw(14)<<"Payment";
                        cout<<setw(10)<<"PNR"<<endl;
                        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                        s.dispstuadmitted(cid);


                        break;
                    }



        
            case 0 :
                cout<<"\nSigned Out.......";
                break;

            default:
                cout<<"\nWrong Input.....";
                break;
        }
        
    } while (choice!=0);
}