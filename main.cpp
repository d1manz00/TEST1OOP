#include <iostream>
#include <string>

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
    void newInput (string f, string i, string o, string num, int sped, float bal, float pr)
        {
            Name = f;
            lastName = i;
            veryLastName = o;
            number = num;
            speed = sped;
            balance = bal;
            price = pr;
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
            void diff (int dspeed, float dprice)
            {
                speed = dspeed;
                price = dprice;
            }
    };



int main()
{
    string name, lastName, lastLastName, number;
    int speed;
    float balance, price;
    ethernetUser test;
    cout << "name: ";
    cin >> name;
    cout << "last Name: ";
    cin >> lastName;
    cout << "veryLastName: ";
    cin >> lastLastName;
    cout << "Phone Number: ";
    cin >> number;
    cout << "Ethernet Speed";
    cin >> speed;
    cout << "Number Balance: ";
    cin >> balance;
    cout << "price: ";
    cin >> price;

    test.newInput(name, lastName, lastLastName, number, speed, balance, price);
    test.show();
    test.donate();
    test.show();
    float dspeed, dprice;
    cout << "dspeed: ";
    cin >> dspeed;
    cout << "dprice: ";
    cin >> dprice;
    test.diff(dspeed, dprice);
    test.show();
    return 0;
}