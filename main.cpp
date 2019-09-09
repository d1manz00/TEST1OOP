#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ethernetUser
    {
    private:
            string Name;
            string lastName;
            string veryLastName;
            string  number;
            int speed;
            float balance;
            float price;
        public:
    vector <ethernetUser> usrArr;
    void newInput ()
        {
            cout << "Name: ";
            cin >> Name;
            cout << "Last Name: ";
            cin >> lastName;
            cout << "VeryLastName: ";
            cin >> veryLastName;
            cout << "Phone Number: ";
            cin >> number;
            cout << "Ethernet Speed";
            cin >> speed;
            cout << "Number Balance: ";
            cin >> balance;
            cout << "Price: ";
            cin >> price;
        }
    void show ()
        {
            cout << "name: " << Name << endl;
            cout << "last Name: " << lastName << endl;
            cout << "veryLastName: " << veryLastName <<endl;
            cout << "Phone Number: " << number << endl;
            cout << "Ethernet Speed" << speed << endl;
            cout << "Number Balance: " << balance << endl;
            cout << "price: " << price << endl;
        }
        void donate()
            {
                if (balance > 0)
                {
                    balance = balance - price;
                }
            }
            void diff ()
            {
                float dspeed, dprice;
                cout << "diffSpeed: ";
                cin >> dspeed;
                cout << "diffPrice: ";
                cin >> dprice;
                speed = dspeed;
                price = dprice;
                cout << "Ready." <<endl;
            }
    };



int main() {
    while (true) {
        string command;
        cout << "Enter 'help' for give command list." << endl << "Press Enter for quit." << endl;
        cout << "Enter command: ";
        cin >> command;
        if (command == "NewUser") {
            cout << "Enter User info: ";
            //!  ethernetUser::newInput();
            // usrArr.push_back(newInput());
        } else if (command == "ShowUserInfo") {
            cout << "Enter User's Name: ";
            //! cin >> Name ???
            //!!! ethernetUser::show(Name);
        } else if (command == "Donate") {
            //! ethernetUser Name;
            cout << "Enter User's Name: ";
            //!! cin >> Name;
            //!!! ethernetUser::donate(Name);
        } else if (command == "DiffCondition") {
            cout << "Enter User's Name: ";
            //!! cin >> Name;
            //!!  ethernetUser::diff()
        } else if (command == "help") {
            cout << "'NewUser' - Enter New User Info" << endl << "'ShowUserInfo' - Show info about User" << endl
                 << "'Donate' - Pay Ethernet Bill" << endl << "'DiffCondition' - change condition" << endl
                 << "'help' - for give help" << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}