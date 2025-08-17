#include<iostream>
using namespace std;

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
}