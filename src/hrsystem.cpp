#include "hrsystem.h"

hrsystem::hrsystem(){
    emp_list= new employee*[30];
    emp_size=30;
    emp_count=0;
}

hrsystem::~hrsystem(){
    for(int i=0;i<emp_count;i++){
        delete emp_list[i];
    }
    delete []emp_list;
}

void hrsystem::addemp(){
    int ch1;
    cout<<"Enter Employee Type\n(1_Salary, 2_Commission, 3_Hourly, 4_Manager): ";
    cin>>ch1;
    switch(ch1){
    case 1:
        emp_list[emp_count]=new salaryemployee;
        emp_list[emp_count]->getinfo();
        emp_count++;
        break;
    case 2:
        emp_list[emp_count]=new comissionemployee;
        emp_list[emp_count]->getinfo();
        emp_count++;
        break;
    case 3:
        emp_list[emp_count]=new hourlyemployee;
        emp_list[emp_count]->getinfo();
        emp_count++;
        break;
    case 4:
        emp_list[emp_count]=new manageremployee;
        emp_list[emp_count]->getinfo();
        emp_count++;
        break;
    default:
        cout<<"\nNo Such Input!...";
        break;
    }
}
void hrsystem::showemp(){
    if(emp_count>0){
        cout<<"\n\t||Employee list||\n";
        for(int i=0;i<emp_count;i++){
            emp_list[i]->displayinfo();
        }
    }
    else{
        cout<<"\n\tNO EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::totalsalary(){
    if(emp_count>0){
            double total_s;
        for(int i=0;i<emp_count;i++){
                total_s=total_s+(emp_list[i]->pay());
        }
        cout<<"\nEmployees current number:"<<emp_count;
        cout<<"\nTotal Employee Payroll according to data= "<<total_s;
    }
    else{
        cout<<"\n\tNO EMPLOYEE DATA AVAILABLE!...";
    }
}
int hrsystem::findname(string key){
    for(int i=0;i<emp_count;i++){
        if(key==emp_list[i]->getname()){
            return i;
            break;
        }
    }
    return -1;
}
int hrsystem::findid(int key){
    for(int i=0;i<emp_count;i++){
        if(key==emp_list[i]->getid()){
            return i;
            break;
        }
    }
    return -1;
}
int hrsystem::findtitle(string key){
    for(int i=0;i<emp_count;i++){
        if(key==emp_list[i]->gettitle()){
            return i;
            break;
        }
    }
    return -1;
}
void hrsystem::editemp(){
    string a;
    cout<<"Search for employee you want to edit(by name): ";
    cin.ignore();
    getline(cin,a);
    if(findname(a)!=(-1)&&emp_count>0){
        cout<<"\t||EMPLOYEE FOUND!||\n";
        emp_list[findname(a)]->displayinfo();
        cout<<"Enter new data:-"
        <<"\n--------------------------\n";
        emp_list[findname(a)]->getinfo();
        cout<<"\n\tData Saved!..";
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::deleteemp(){
    string b;
    cout<<"Enter Employee name that you want to delete: ";
    cin.ignore();
    getline(cin,b);
    if(findname(b)!=(-1)&&emp_count>0){
        int i=findname(b);
        delete emp_list[i];
        for(int i;i<emp_count;i++){
            emp_list[i]=emp_list[i+1];
        }

        --emp_count;
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::editben(){
    string d;
    cout<<"\nEnter employee name that you want to edit benefits for: ";
    cin.ignore();
    getline(cin,d);
    if(findname(d)!=(-1)&&emp_count>0){
        emp_list[findname(d)]->editbenefit();
        cout<<"\n\tData Saved!..\n";
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::showben(){
    if(emp_count>0){
        for(int i=0;i<emp_count;i++){
            cout<<"Employee name:"<<emp_list[i]->getname();
            emp_list[i]->showbenefit();
            cout<<"\n----------------------------\n";
        }
    }
    else{
        cout<<"\n\tNo Data Available!...";
    }
}
void hrsystem::empsearch(string f){
    if(findname(f)!=(-1)&&emp_count>0){
        cout<<"\n\t||Employee found||\n";
        emp_list[findname(f)]->displayinfo();
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::titlesearch(string g){
    if(findtitle(g)!=-1&&emp_count>0){
        cout<<"\n\t||Employee found||\n";
        emp_list[findtitle(g)]->displayinfo();
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
void hrsystem::idsearch(int n){
    if(findid(n)!=-1&&emp_count>0){
        cout<<"\n\t||Employee found||\n";
        emp_list[findid(n)]->displayinfo();
    }
    else{
        cout<<"\n\tNO SUCH EMPLOYEE DATA AVAILABLE!...";
    }
}
