#include<iostream>
#include<string>
using namespace std;


void studentmenu(int sid)
{
     int ch;
        do
        {
                cout<<"\n\n------------------Student Menu------------------\n";
                cout<<"\n\t 1.  List courses";
                cout<<"\n\t 2.  List center ";
                cout<<"\n\t 3.  Give preferences";
                cout<<"\n\t 4.  Seat allocated";
                cout<<"\n\t 5.  Update Payment Details ";
                
                        
                cout<<"\n\t 0.  Sign Out....";
                cout<<"\n_________________________________";
                cout<<"\n\t Enter Choice : ";
                cin>>ch;

            switch (ch)
            {  
                case 1 :                    
                        {
                            student s;

                            cout<<"\n------------------------------------------";                    
                            cout<<"\n         All Courses for You";
                            cout<<"\n------------------------------------------";

                            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            cout<<setw(6)<<"ID";
                            cout<<setw(15)<<"Name";
                            cout<<setw(15)<<"Fees";
                            cout<<setw(10)<<"Section"<<endl;
                            cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                            
                          
                            s.displycoursesforstu(sid);
                            break;
                        }


                case 2 :
                        {   
                            centers c;
                            cout<<"\n------------------------------------------";                    
                            cout<<"\n             All Centers";
                            cout<<"\n------------------------------------------";

                            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            cout<<setw(6)<<"ID";
                            cout<<setw(20)<<"Name";
                            cout<<setw(25)<<"Address";
                            cout<<setw(25)<<"Coordinator"<<endl;
                            cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                            c.displaycenter();
                            break;
                        }
                

                case 3 :                    
                        {   int i=0,flag=1;
                            char ch;
                            pref p;
                            do
                            { ++i;
                                
                                cout<<"\n\n\tFor Preference "<<i<<" select course and college";

                                p.givepref(sid,i);

                                    for (int j = 0; j < pre.size(); j++)
                                    {
                                        if (p.getformno()==pre[j].getformno() && p.getcourname()==pre[j].getcourname() && p.getcentid()==pre[j].getcentid())
                                        {
                                            cout<<"\n\tThis Preference is already inserted";
                                            flag=0;
                                            --i;
                                        }                                                                            
                                    }

                                    if (flag==1)
                                    {
                                            pre.push_back(p);
                                            cout<<"\n\t Preference Inserted Sucessfully";                                        
                                    }                                    
                                

                                cout<<"\n\t Want to add more preference";
                                cin>>ch;

                            } while ((ch=='y' || ch=='Y') && i<11);
                            
                            break;
                        }


                case 4 :
                        {   
                            student s;
                            cout<<"\n------------------------------------------";                    
                            cout<<"\n             Allotment";
                            cout<<"\n------------------------------------------";

                            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                            cout<<setw(15)<<"Pereference";
                            cout<<setw(15)<<"Course Name";
                            cout<<setw(12)<<"Center Id";
                            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

                            s.dispallotedcent(sid);
                            break;
                        }


                case 5 :                    
                        {
                            student s;
                            int n;
                            cout<<"\n\t1. Pay First Installement";
                            cout<<"\n\t2. Pay Second Installement";
                            cout<<"\n\n\tEnter Choice";
                            cin>>n;
                            if (n==1)
                            {
                                s.paymentfirst(sid);
                            }

                            else if (n==2)
                            {
                                s.paymentsecond(sid);
                            }
                            break;
                        }


            
                case 0 :
                
                    cout<<"Exiting.......";
                    break;

                default:
                    cout<<"Wrong Input.....";
                    break;
            }
        } while (ch!=0);


    
}