#include<iostream>
using namespace std;

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
    // collectTicket();
}


int main()
{
    cout<<"--------Train Journey--------"<<endl;
    cout<<"Buying a train ticket"<<endl;
    reservation();
}