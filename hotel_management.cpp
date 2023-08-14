#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    int qrooms=0,qpasta=0,qburger=0,qshake=0,qnoodles=0,qrolls=0;
    int srooms=0,spasta=0,sburger=0,sshake=0,snoodles=0,srolls=0;
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_rolls=0;
    cout<<"\n\t quantity of iteams we have";
    cout<<"\n rooms availbe:";
    cin>>qrooms;
    cout<<"\n quantity of pasta: ";
    cin>>qpasta;
    cout<<"\n quantity of burger: ";
    cin>>qburger;
    cout<<"\n quantity of shake: ";
    cin>>qshake;
    cout<<"\n quantity of noodles: ";
    cin>>qnoodles;
    cout<<"\n quantity of rolls: ";
    cin>>qrolls;
    m:
    cout<<"\n\t\t\t please select from the menu options: ";
    cout<<"\n\n 1.rooms: ";
    cout<<"\n\n 2.pasta: ";
    cout<<"\n\n 3.burger: ";
    cout<<"\n\n 4.shake: ";
    cout<<"\n\n 5.noodles: ";
    cout<<"\n\n 6.rolls: ";
    cout<<"\n\n 7.information regarding sales and collection ";
    cout<<"\n\n 8.exit";
    cout<<"\n\n please enter your choice ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"\n\nenter no. of rooms you wants: ";
            cin>>quant;
            if(qrooms-srooms>=quant){
                srooms=srooms+quant;
                total_rooms=total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"rooms have been allotted to you :";
            }
            else{
                cout<<"\n\tonly"<<qrooms-srooms<<"rooms remaining in hotel";
            }
            break;
    case 2:
            cout<<"\n\nenter pasta quantity: ";
            cin>>quant;
            if(qpasta-spasta>=quant){
                spasta=spasta+quant;
                total_pasta=total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<"pasta is in order :";
            }
            else{
                cout<<"\n\tonly"<<qpasta-spasta<<"pasta remaining in hotel";
            }
            break;
    case 3:
            cout<<"\n\nenter quantity of burger: ";
            cin>>quant;
            if(qburger-sburger>=quant){
                sburger=sburger+quant;
                total_burger=total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<"burger is in order :";
            }
            else{
                cout<<"\n\tonly"<<qburger-sburger<<"burgers remaining in hotel";
            }
            break;
    
case 4:
            cout<<"\n\nenter glass of shake : ";
            cin>>quant;
            if(qshake-sshake>=quant){
                sshake=sshake+quant;
                total_shake=total_shake+quant*120;
                cout<<"\n\n\t\t"<<quant<<"shake is in order :";
            }
            else{
                cout<<"\n\tonly"<<qshake-sshake<<"shakes remaining in hotel";
            }
            break;
    case 5:
            cout<<"\n\nenter quantity of noodles: ";
            cin>>quant;
            if(qnoodles-snoodles>=quant){
                snoodles=snoodles+quant;
                total_noodles=total_noodles+quant*140;
                cout<<"\n\n\t\t"<<quant<<"noodles is in order :";
            }
            else{
                cout<<"\n\tonly"<<qnoodles-snoodles<<"noodles remaining in hotel";
            }
            break;
    case 6:
            cout<<"\n\nenter quantity of rolls: ";
            cin>>quant;
            if(qrolls-srolls>=quant){
                srolls=srolls+quant;
                total_rolls=total_rolls+quant*150;
                cout<<"\n\n\t\t"<<quant<<"rolls is in order :";
            }
            else{
                cout<<"\n\tonly"<<qrolls-srolls<<"rolls remaining in hotel";
            }
            break;
    case 7:
    cout<<"\n\t\t details of sales and collection ";
    cout<<"\n\n number of rooms we had: "<<qrooms;
    cout<<"\n\n number of rooms we give for rent: "<<srooms;
    cout<<"\n\n remaining rooms: "<<qrooms-srooms;
    cout<<"\n\n total rooms collection of the day: "<<total_rooms;

    cout<<"\n\n number of pasta we had: "<<qpasta;
    cout<<"\n\n number of pasta we sold: "<<spasta;
    cout<<"\n\n remaining pasta: "<<qpasta-spasta;
    cout<<"\n\n total pasta collection of the day: "<<total_pasta;

    cout<<"\n\n number of burger we had: "<<qburger;
    cout<<"\n\n number of burger we sold: "<<sburger;
    cout<<"\n\n remaining burger: "<<qburger-sburger;
    cout<<"\n\n total burger collection of the day: "<<total_burger;

    cout<<"\n\n number of shake we had: "<<qshake;
    cout<<"\n\n number of shake we sold: "<<sshake;
    cout<<"\n\n remaining shake: "<<qshake-sshake;
    cout<<"\n\n total shake collection of the day: "<<total_shake;

    cout<<"\n\n number of noodles we had: "<<qnoodles;
    cout<<"\n\n number of noodles we sold: "<<qnoodles;
    cout<<"\n\n remaining noodles: "<<qnoodles-snoodles;
    cout<<"\n\n total noodles collection of the day: "<<total_noodles;

    cout<<"\n\n number of rolls we had: "<<qrolls;
    cout<<"\n\n number of rolls we sold: "<<srolls;
    cout<<"\n\n remaining rolls: "<<qrolls-srolls;
    cout<<"\n\n total rolls collection of the day: "<<total_rolls;

    cout<<"\n\n\n total collection for the day: "<<total_rooms+total_burger+total_noodles+total_pasta+total_rolls+total_shake;
    break;    
    case 8:
        exit(0);
        default:
            cout<<"\n please select the numbers mentioned above ";
}
            goto m;
}
    
    
    