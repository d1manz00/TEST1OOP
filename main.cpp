#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ethernetUser
    {
        private:
        /*HARDCODE (так отображает)
         *string Name = "a";
            string lastName = "b";
            string veryLastName = "c";
            string  number = "d"; */

            string Name;
            string lastName;
            string veryLastName;
            string  number;
            int speed;
            float balance;
            float price;
        public:
    void newInput ()
    {
        cout << "Name:";
        cin >> Name;
        cout << "Last Name:";
        cin >> lastName;
        cout << "VeryLastName:";
        cin >> veryLastName;
        cout << "Phone Number:";
        cin >> number;
        cout << "Ethernet Speed: ";
        cin >> speed;
        cout << "Number Balance: ";
        cin >> balance;
        cout << "Price: ";
        cin >> price;
       // cout << Name << lastName; //!!!Тоже выводит
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
    ethernetUser test;
    test.newInput();
    test.show();
    test.donate();
    test.diff();
  /*  while (true) {
        ethernetUser test;
          string command;
        cout << "Enter 'help' for give command list." << endl << "Enter q for quit." << endl;
        cout << "Enter command: ";
        cin >> command;
        if(command == "NewUser")
        {
            cout << "Enter User info: ";
            test.newInput();
        } else if (command == "ShowUserInfo") {
            test.show();
        } else if (command == "Donate") {
            test.donate();
        } else if (command == "DiffCondition") {
                test.diff();
        } else if (command == "help") {
            cout << "'NewUser' - Enter New User Info" << endl << "'ShowUserInfo' - Show info about User" << endl
                 << "'Donate' - Pay Ethernet Bill" << endl << "'DiffCondition' - change condition" << endl
                 << "'help' - for give help" << endl;
        }
        else
        {
            break;
        }
    }*/
    return 0;
}