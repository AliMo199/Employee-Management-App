#include "benefit.h"

benefit::benefit(){}

benefit::~benefit(){}

void benefit::getbenefit(){
    cout<<"\nDo you want to enter a health benefit plan or dental benefit plan or both(H||D||B)?:";
    cin>>ch;
    if(ch=='H'||ch=='h'){
        cout<<"Enter Plan information: ";
        cin.ignore();
        getline(cin,info1);
        cout<<"Enter Amount:";
        cin>>amount1;
        cout<<"Health plan coverage: ";
        cin.ignore();
        getline(cin,coverage);
    }
    else if(ch=='D'||ch=='d'){
        cout<<"Enter Plan information: ";
        cin.ignore();
        getline(cin,info2);
        cout<<"Enter Amount:";
        cin>>amount2;
    }
    else if(ch=='B'||ch=='b'){
        cout<<"Enter Health plan information: ";
        cin.ignore();
        getline(cin,info1);
        cout<<"Enter Health plan Amount:";
        cin>>amount1;
        cout<<"Health plan coverage: ";
        cin.ignore();
        getline(cin,coverage);
        cout<<"\nEnter Dental plan information: ";
        getline(cin,info2);
        cout<<"Enter Dental plan Amount:";
        cin>>amount2;
    }
    else{
        cout<<"\nInvalid Character!...";
    }
}
void benefit::displaybenefit(){
    if(ch=='H'||ch=='h'){
        double h_benefit=(0.20)*amount1;
        cout<<"\nHealth plan information: "<<info1;
        cout<<"\nBenefits:"<<h_benefit;
        cout<<"\nHealth plan coverage: "<<coverage;
    }
    else if(ch=='D'||ch=='d'){
        double d_benefit=(0.10)*amount2;
        cout<<"\nDental plan information: "<<info2;
        cout<<"\nBenefits:"<<d_benefit<<"\n";
    }
    else if(ch=='B'||ch=='b'){
        double h_benefit=(0.20)*amount1;
        double d_benefit=(0.10)*amount2;
        cout<<"\nHealth plan information: "<<info1;
        cout<<"\nHealth plan Benefits:"<<h_benefit;
        cout<<"\nHealth plan coverage: "<<coverage;
        cout<<"\nDental plan information: "<<info2;
        cout<<"\nBenefits:"<<d_benefit<<"\n";
    }
}
