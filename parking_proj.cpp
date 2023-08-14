#include<iostream>
using namespace std;
class two_wheeler{
    protected:
    int noc=0,nos=0,noB=0,amount=0,count=0;
  public:  
  void cycle(){
    cout<<"\n "<<"entry succesful "<<"\n";
    noc++;
    amount=amount+20;
    count++;
}
void scooty(){
    cout<<"\n "<<"entry succesful "<<"\n";
    nos++;
    amount=amount+30;
    count++;
}
void bike(){
    cout<<"\n "<<"entry succesful "<<"\n";
    noB++;
    amount=amount+40;
    count++;
}
void show(){
    cout<<"\n"<< "number of cycle="<<noc;
    cout<<"\n"<<" number of scooty="<<nos;
    cout<<"\n"<<" number of bike="<<noB;
}
};

class four_wheeler{
    protected:
    int noC=0,nor=0,nob=0,Amount=0,Count=0;
    public:
    void car(){
    cout<<"\n "<<"entry succesful "<<"\n";
    noC++;
    Amount=Amount+80;
    Count++;
}
    void rikhsa(){
    cout<<"\n "<<"entry succesful "<<"\n";
    nor++;
    Amount=Amount+50;
    Count++;
}
void bus(){
    cout<<"\n "<<"entry succesful "<<"\n";
    nob++;
    Amount=Amount+100;
    Count++;
}
void show(){
    cout<<"\n"<<" number of car="<<noC;
    cout<<"\n"<<" number of riksha="<<nor;
    cout<<"\n"<<" number of bus="<<nob;
}
};
class vehicle:public two_wheeler,public four_wheeler{
    public:
    int ch;
void menu_driven(){
    cout<<"\n\n***********  WELCOME TO THE PARKING MANAGEMENT SYSTEM    ************\n\n";
    cout<<"\n YOU CAN PARK CYCLE,SCOOTY,BIKE,CAR,RIKSHA AS WELL AS BUS\n";
    cout<<"\n CHARGES ARE:-\n";
    cout<<"BUS=100\n"<<"car=80\n"<<"riksha=50\n"<<"cycle=20\n"<<"scooty=30\n"<<"bike=40\n\n";
    while(1){
    switch(menu() ){
        case 1:cycle();
              break;
        case 2:scooty();
               break;
        case 3:bike();
               break;
        case 4:car();
               break;
        case 5:rikhsa();
               break;
        case 6:bus();
               break;
        case 7:two_wheeler::show();
            four_wheeler::show();
            total();
            break;
        case 8:del();
            break;
        case 9:
        cout<<"\n****THANKS FOR COMING****";
               exit(0);
        default:
        printf("\n invalid choice ");
    }
    }
}
    int menu()
{
    cout<<"press 1. to enter cycle: "<<"\n";
    cout<<"press 2. to enter scooty: "<<"\n";
    cout<<"press 3. to enter bike: "<<"\n";
    cout<<"press 4. to enter car: "<<"\n";
    cout<<"press 5. to enter riksha: "<<"\n";
    cout<<"press 6. to enter bus: "<<"\n";
    cout<<"press 7. to show status: "<<"\n";
    cout<<"press 8. to delete data: "<<"\n";
    cout<<"press 9. to exit:"<<"\n";
    cout<<" please enter your choice: "<<"\n";
    cin>>ch;
    return(ch);
}
int del(){
    nob=0;
    noc=0;
    nos=0;     
    noB=0;
    noC=0;
    nor=0;
    amount=0;
    count=0;
    return 0;
}
void total(){
    cout<<"\n "<<"total number of vehicle="<<noc+nos+noB+noC+nob+nor;
    cout<<"\n"<<" total gain amount="<<two_wheeler::amount+four_wheeler::Amount<<"\n\n";
}
};
int main(){
    vehicle obj1;
    obj1.menu_driven();
}
    
