#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
    Management(){
        mainMenu();
    }
};
class Details
{
public:
    static string name, gender;
    int phoneNo, age;
    string add;
    static int cId;
    char arr[100];

    void information(){
        cout<<">>Enter the customer ID: "<<endl;
        cin>>cId;
        cout<<">>Enter the name: "<<endl;
        cin>>name;
        cout<<">>Enter the age: "<<endl;
        cin>>age;
        cout<<">>Enter the gender: "<<endl;
        cin>>gender;
        cout<<">>Enter the address: "<<endl;
        cin>>add;
        cout<<">>>>>>Your details are saved with us.<<<<<<"<<endl;
    }
};
int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1, back;
    static float charges;

    void flights(){
        string flightN[] = {"Dubai","Canada","UK","USA","Australia","Europe"};
        for (int i = 0; i < 6; i++)
        {
            cout<<(i+1)<<". Flight to "<<flightN[i]<<endl;
        }
        cout<<endl;
        cout<<"Welcome to the Airlines!"<<endl;
        cout<<"Press the number of country of which you want to book a flight: ";
        cin>>choice;
        cout<<endl;
        switch (choice)
        {
        case 1:
            cout<<"Welcome to Dubai Emirates"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) DUB - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) DUB - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) DUB - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) DUB - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight DUB - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight DUB - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight DUB - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight DUB - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0){
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            
            break;
       
        case 2:
            cout<<"Welcome to Canadian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) CA - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) CA - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) CA - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) CA - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight CA - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight CA - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight CA - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight CA - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        
        case 3:
            cout<<"Welcome to United Kingdom Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) UK - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) UK - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) UK - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) UK - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight UK - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight UK - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight UK - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight UK - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            
        case 4:
            cout<<"Welcome to USA Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) USA - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) USA - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) USA - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) USA - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight USA - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight USA - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight USA - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight USA - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        case 5:
            cout<<"Welcome to Australian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) AS - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) AS - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) AS - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) AS - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight AS - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight AS - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight AS - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight AS - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Invalid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            case 6:
            cout<<"Welcome to Europian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) EU - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"2) EU - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. 16000"<<endl;
            cout<<"3) EU - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. 14000"<<endl;
            cout<<"4) EU - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. 10000"<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choice1;
            if (choice1==1)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight EU - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==2)
            {
                charges = 16000;
                cout<<"You have succesfully books the flight EU - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==3)
            {
                charges = 14000;
                cout<<"You have succesfully books the flight EU - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else if (choice1==4)
            {
                charges = 10000;
                cout<<"You have succesfully books the flight EU - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
            }else{
                cout<<"Invalid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            
        default:
            cout<<"Invalid input, shifting to the main menu.";
            mainMenu();
            break;
        }
        
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:
    void bill(){
        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"_______________XYZ Airlines_______________"<<endl;
            outf<<"__________________Ticket__________________"<<endl;
            outf<<"__________________________________________"<<endl;
            outf<<"Customer ID: "<<Details::cId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender: "<<Details::gender<<endl;
            outf<<"Description "<<endl<<endl;
            if (registration::choice==1)
            {
                destination="Dubai";
            }else if (registration::choice==2)
            {
                destination="Canada";
            }else if (registration::choice==3)
            {
                destination="UK";
            }else if (registration::choice==4)
            {
                destination="USA";
            }else if (registration::choice==5)
            {
                destination="Australia";
            }else if (registration::choice==6)
            {
                destination="Europe";
            }
            outf<<"Destination:\t\t\t"<<destination<<endl;
            outf<<"Flight Cost:\t\t\tRs."<<registration::charges<<endl;
        }outf.close();
    }
    void dispBill(){
        ifstream ifs("records.txt");{
            if (!ifs)
            {
                cout<<"File error!!"<<endl;
            }while (!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }ifs.close();
    } 
};




void mainMenu(){
    int lchoice, schoice, back;
    cout<<"\t\t\t\t   XYZ Airlines"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t>>>>>Main Menu<<<<"<<endl;
    cout<<"Press 1 to add the Customer Details."<<endl;
    cout<<"Press 2 for Flight Registration."<<endl;
    cout<<"Press 3 for Ticket and Charges."<<endl;
    cout<<"Press 4 to Exit."<<endl;
    cout<<endl;
    cout<<"Enter the choice: "<<endl;
    cin>>lchoice;
    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:{
        system("cls");
        cout<<"Customer:"<<endl;
        d.information();
        cout<<"Press 0 to go back to main menu.";
        cin>>back;
        if (back==0)
        {
            mainMenu();
        }
        else{
            mainMenu();
        }
        break;
    }
        
    case 2:{
        cout<<endl;
        cout<<"Book a flight using this system."<<endl;
        cout<<endl;
        r.flights();
    }
        break;
    case 3:
    {
        cout<<endl;
        cout<<">>>>Get your ticket<<<<"<<endl;
        t.bill();
        cout<<"Your ticket is printed, you can collect it."<<endl;
        cout<<"Press 1 to display your ticket"<<endl;
        cin>>back;
        if (back==1)
        {
            t.dispBill();
            cout<<"Press 0 to go back to Main menu.";
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }else
            {
                mainMenu();
            }
    }
        break;
    case 4:
    {
        system("cls");
        cout<<"\t\t\t>>>Thank-you<<<"<<endl;
    }
       break;
    default:{
        cout<<"Invalid input. Please try again!"<<endl;
        mainMenu();
    }
        break;
    }
}


int main(){
    Management Mobj;
    return 0;
}