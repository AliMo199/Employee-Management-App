#include <iostream>
#include <string>
#include <conio.h>
#include <unistd.h>
#include "department.h"
#include "benefit.h"
#include "employee.h"
#include "hourlyemployee.h"
#include "salaryemployee.h"
#include "comissionemployee.h"
#include "manageremployee.h"
#include "hrsystem.h"
using namespace std;

int main()
{
    unsigned int c;
    hrsystem a;
    string f,g;
    int d;
    do{
        system("cls");
        cout<<"\n\n\t\tEMPLOYEE MANAGEMENT APP.\n"
        <<"\t\t--------------------------\n"
        <<"\t1.Employee Information Management.\n"
        <<"\t2.Benefits Modification.\n"
        <<"\t3.Reporting.\n"
        <<"\t4.Search.\n"
        <<"\t0.Quit Application.\n"
        <<"\t--------------------------------------\n"
        <<"\tService no.?:";
        cin>>c;
        switch(c){
        case 1:
            int ch1;
            do{
                system("cls");
                cout<<"\n\t#Employee information management#\n"
                <<"\n 1.Add new employee."
                <<"\n 2.Edit existing employee."
                <<"\n 3.Delete existing employee."
                <<"\n 0.Exit to main menu."
                <<"\n------------------------------"
                <<"\nService no.:";
                cin>>ch1;
                switch(ch1){
                case 1:
                    a.addemp();
                    cout<<"\t\nDATA SAVED!..";
                    sleep(2);
                    break;
                case 2:
                    a.editemp();
                    sleep(2);
                    break;
                case 3:
                    a.deleteemp();
                    sleep(2);
                    cout<<"\t\nSuccessfully deleted!..";
                    break;
                case 0:
                    break;
                default:
                    cout<<"\n\tNo such service!\n";
                    sleep(2);
                    break;
                }
            }while(ch1!=0);
            system("cls");
            break;
        case 2:
            system("cls");
            cout<<"\n\t#Benefits Modification#\n";
            a.editben();
            sleep(2);
            break;
        case 3:
            int ch2;
            do{
                system("cls");
                cout<<"\n\t#Reporting#\n"
                <<"\n 1.Employee information."
                <<"\n 2.Benefits information."
                <<"\n 3.Salary Calculation."
                <<"\n 0.Exit to main menu."
                <<"\n--------------------------\n"
                <<"Service no.:";
                cin>>ch2;
                switch(ch2){
                case 1:
                    a.showemp();
                    cout<<"\n\tPress any key to continue...";
                    getch();
                    break;
                case 2:
                    cout<<"\n\t||Benefits list||\n";
                    a.showben();
                    cout<<"\n\tPress any key to continue...";
                    getch();
                    break;
                case 3:
                    a.totalsalary();
                    cout<<"\n\tPress any key to continue...";
                    getch();
                    break;
                case 0:
                    break;
                }
            }while(ch2!=0);
            break;
        case 4:
           int ch3;
           do{
               system("cls");
               cout<<"\n\t#search#\n"
               <<"\n 1.Search by name."
               <<"\n 2.Search by job title."
               <<"\n 3.Search by id."
               <<"\n 0.Exit to main menu."
               <<"\n------------------------\n"
               <<"\n Service no.:";
               cin>>ch3;
               switch(ch3){
               case 1:
                   cout<<"Enter the employee name: ";
                   cin.ignore();
                   getline(cin,f);
                   a.empsearch(f);
                   cout<<"\n\tPress any key to continue...";
                   getch();
                   break;
               case 2:
                   cout<<"Enter the Employee job title: ";
                   cin.ignore();
                   getline(cin,g);
                   a.titlesearch(g);
                   cout<<"\n\tPress any key to continue...";
                   getch();
                   break;
               case 3:
                   cout<<"Enter the Employee id:";
                   cin>>d;
                   a.idsearch(d);
                   cout<<"\n\tPress any key to continue...";
                   getch();
                   break;
               case 0:
                   break;
               default:
                cout<<"\n\tNo such service!\n";
                sleep(2);
                system("cls");
                break;
               }
        }while(ch3!=0);
    }
    }while(c!=0);
    system("cls");
    cout<<"\n\tThank you!\n";
    return 0;
}
