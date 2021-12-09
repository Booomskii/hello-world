#include <iostream>
#include <string>
using namespace std;

int main()
{
    string regusername;
    string regfname;
    string reglname;
    string regpass;
    string regeaddress;
    string regaddress1;
    string regaddress2;
    string regnum;
    string defuser = "dev123";
    string defpass = "foodmonkey123";
    string deffname = "Food";
    string deflname = "Monkey";
    string defeaddress = "foodmonkey@gmail.com";
    string defaddress1 = "Blk 1 Lot 55, Villa Celina 2C";
    string defaddress2 = "Pakigne, Minglanilla, Cebu";
    string defnum = "09271271924";
    string loguser;
    string logpass;
    int exit;
    int command;
    int n=1;

    while (n==1)
    {
        cout << "\n\t\t\t\t\t\t FoodMonkey"<< endl;
        cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n"<< endl;
        cout << "\n\t\t\t\t  (1)\t\t      (2)\t\t (3)" << endl;
        cout << "\n\t\t\t\t Log-in       |\t    Register \t|\tExit"<< endl;
        cout << "\nPress number of instruction:" << endl;
        cin >> command;
        switch (command)
        {
            case 1:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t Username: ";
            cin.ignore(1,'\n');
            getline (cin, loguser);
            cout << "\n\t\t\t Password: ";
            getline (cin, logpass);
            if (loguser==regusername && logpass==regpass)
            {
                cout << "\n\n\n\t\t\t\t\t     Welcome back, "<< regfname << "!" << endl;
                n=0;
            }
            else if (loguser=="dev123" && logpass=="foodmonkey123")
            {
                cout << "\n\n\n\t\t\t\t\t     Welcome back, "<< deffname << "!" << endl;
                n=0;
            }
            else
            {
                cout << "\n\t\t\t\tYou have entered wrong Username/Password!" << endl;
                n=1;
            }
            break;
            case 2:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t\tRegistration\n";
            cout << "\n\t\t\tFirst Name: ";
            cin.ignore(1,'\n');
            getline (cin, regfname);
            cout << "\n\t\t\tLast Name: ";
            getline (cin, reglname);
            cout << "\n\t\t\tEmail Address: ";
            getline (cin, regeaddress);
            cout << "\n\t\t\tAddress 1: ";
            getline (cin, regaddress1);
            cout << "\n\t\t\tAddress 2: ";
            getline (cin, regaddress2);
            cout << "\n\t\t\tPhone Number/Telephone Num: ";
            getline (cin, regnum);
            cout << "\n\t\t\tUsername: ";
            getline (cin, regusername);
            cout << "\n\t\t\tPassword: ";
            getline (cin, regpass);
            cout << "\n\t\t\t\t\t     Registration Done!\n\n\n" << endl;
            n=1;
            break;
            case 3:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t      Exit Application?\n" << endl;
            cout << "\n\t\t\t\t\t\t(1)\t(2)" << endl;
            cout << "\n\t\t\t\t\t\tYes  |  No" << endl;
            cout << "\nPress number of instruction:" << endl;
            cin >> exit;
            switch (exit)
            {
                case 1:
                cout << "\n\t\t\t\t\tThank you for using the App!";
                n=0;
                break;
                case 2:
                n=1;
                break;
                default:
                cout << "\n\t\t\t\tInputted number of instruction not assigned!\n\n\n" << endl;
            }
            break;
            default:
            cout << "\n\t\t\tInputted number of instruction not assigned!" << endl;
        }
    }
return 0;
}
