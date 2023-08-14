#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void login();
void registration();
void forget();
int main(){
    int c;
    cout<<"\t\t\t_____________________________________________\n\n\n";
    cout<<"\t\t\t                   welcome to the login page           \n\n\n"
    cout<<"\t\t\t_______________        MENU          ___________________\n\n\n";
    cout<<"\t press 1 to LOGIN              "<<endl;
    cout<<"\t press 2 to REGISTER              "<<endl;
    cout<<"\t press 3 to if you forget your password                   "<<endl;
    cout<<"\t\t press 4 to EXIT                 "<<endl;
    cout<<"\t\t\t please enter your choice:     ";
    cin>>c;
    cout<<endl;
    switch(c){
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forget();
            break;
        case 4:
            cout<<"\t\t\t THANK YOU!    \n\n";
            break;
        default:
            system("cls");
            cout<<"\t\t\t please select from the options given above\n"<<endl;
            main();
    }
}
void login(){
    int count;
    string userID,password,id,pass;
    system("clas");
    cout<<"\t\t\t please enter the uasername and password:  "<<endl;
    cout<<"\t\t\t USERNAME  ";
    cin>>userID;
    cout<<"\t\t\t password  ";
    cin>>password;
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id==userID&&pass==password){
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count++1){
        cout<<userID<<"\n YOUR LOGIN IS SUCCESSFULL \n THANKS FOR LOGGING IN \n";
        main();
    }
    }
    void registration(){
        string ruserid,rpassword,rid,rpass;
        system("cls");
        cout<<"\t\t\t enter the username :";
        cin<<ruserid;
        cout<<"\t\t\t enter the password: ";
        cin>>rpassword;
        ofstream f1("records.txt",ios::app);
        f1<<ruserid<<' '<<rpassword<<endl;
        system("cls");
        cout<<"\n\t\t registration is succesfull!\n";
        main();
            }
            void forgot(){
                int option;
                system("cls");
                cout<<"\t\t\t you forgot the password? NO WORRIES\n";
                cout<<" press  1 to search your id by username"<<endl;
                cout<<" press  2 to go to main menu"<<endl;
                cout<<"\t\t\t enter your choice :"<<endl;
                cin>>option;
                switch(option){
                    case 1:
                        {
                            int count=0;
                            string suserID,sid,spass;
                            cout<<"\n\t\t\t enter the username which remembered";
                            cin>>suserID;
                            ifstream f2("records.txt");
                            while(f2>>sid>>spass){
                                if(sid==suserID){
                                    count=1;
                                }  
                            }        
                            f2.close();
                            if(count==1){
                                cout<<"\n\n your account is found: \n";
                                cout<<"\n\n your password is: "<<spass;
                                main();
                            }        
                            
                else{
                    cout<<"sorry your account is not found";
                    main();
                }
                break;
                }
                case 2:
                {
                    main();
                }
                default:
                    cout<<"\t\t\t wrong choice! please try again "<<endl;
                    forgot();
             }
                }
            
            