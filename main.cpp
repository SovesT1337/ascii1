#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
using std::cout;
using std::string;
using std::endl;
using std::cin;

struct person{
    string name;
    int HP;
    int MP;
    int atk;
    int def;
};

person create(){
    person pr;
    cout << "Enter your characters name: ";
    cin >> pr.name;
    cout << endl;
    pr.HP = 100;
    pr.MP = 50;
    pr.atk = 20;
    pr.def = 10;
    return pr;
}

void batgr(){
    string str = {" /\\                 /\\\n"
                  "/ \\'._   (\\_/)   _.'/ \\\n"
                  "|.''._'--(o.o)--'_.''.|\n"
                  " \\_ / `;=/ \" \\=;` \\ _/\n"
                  "   `\\__| \\___/ |__/`\n"
                  "        \\(_|_)/\n"
                  "         \" ` \""};
    cout << str << endl;
}


int main() {

    person one;
    one = create();

    int HP2 = 100;
    while ( one.HP > 0 & HP2 > 0){
        system("cls");
        batgr();
        string comm;
        cout << one.name << ": HP = " << one.HP << " MP = " << one.MP << endl;
        cout << "Bat: HP = " << HP2 << endl;
        cout << "Press A to attack:  ";
        cin >> comm;
        cout << endl;
        if (comm == "A"){
            cout << "Bat looses 20 HP: " << endl;
            HP2 -= 20;

        }
        cout << "Bat attaks" << endl;
        one.HP -= 20 - one.def;
        cout << one.name << " loses " << 20 - one.def << " HP" << endl << endl;
        Sleep(2000);
    }
    cout << "Bat died" << endl;
    cout << "Press F to pay respect: ";
    string comm;
    cin >> comm;
    cout << endl;
    if (comm == "F"){
        cout << "You have payed respect" << endl;
    }
    system("pause");
}
