#include<iostream>
using namespace std;


void ticketCheck()
{
    cout<<"\n--------Ticket Check--------"<<endl;
    cout<<"\nTicket check by the inspector\n";
    cout<<"\nDo you have a discount ticket? (yes/no): ";
    string ticket;
    cin>>ticket;
    if(ticket == "yes")
    {
        cout<<"\nShow valid documents for the discount ticket\n";
    }
    else
    {
        cout<<"\nShow valid documents for the normal ticket\n";
    }
    while(true)
    {
        cout<<"\nHas your destination arrived? (yes/no): ";
        string des;
        cin>>des;
        if(des=="yes")
        {
            cout<<"Leave the train at your destination\n";
            break;
        }
        else
        {
            cout<<"Continue your journey\n";
        }
    }
}

void boardTrain()
{
    cout<<"\n--------Boarding the Train--------"<<endl;
    cout<<"\nDo you have a reservation? (yes/no): ";
    string board;
    cin>>board;
    if(board == "yes")
    {
        cout<<"\nLook for the reserved seat\n";
    }
    else
    {
        cout<<"\nLook for any unreserved seat\n";
    }
}

void collectTicket()
{
    cout<<"\n--------Ticket Collection--------"<<endl;
    cout<<"\nHow do you want to collect your ticket? \n1.Mail\n2.Ticket Machine \n ";
    int tic;
    cin >> tic;
    if(tic==1)
    {
        cout<<"\nCheck your letter box in 3 days for the ticket\n";
    }
    else
    {
        cout<<"\nCollect your ticket from the ticket machine at the station\n";
    }
}

void reservation()
{
    cout<<"\n--------Train Reservation--------"<<endl;
    cout<<"\nDo you need a reservation? (yes/no): ";
    string res;
    cin >> res;
    if (res == "yes") {
        cout <<"\nSelect seat for reservation\n";
    } 
    else
    {
        cout << "\nNo reservation needed.\n";
    }
    collectTicket();
}


int main()
{
    cout<<"--------Train Journey--------"<<endl;
    cout<<"Buying a train ticket"<<endl;
    reservation();
    boardTrain();
    ticketCheck();
}