// Copyright 2020 SovesT
// Created by SovesT on 24.01.2021.
//

#include "header.hpp"

void status(enemy en1, person one){
    cout << en1.skin;
    cout << one.name << ": HP = " << one.HP << " MP = " << one.MP << endl;
    cout << "Bat: HP = " << en1.HP << endl;
}

void respect(){
    string comm;
    cout << "Press F to pay respect: ";
    cin >> comm;
    if (comm == "F"){
        cout << "You have payed respect" << endl;
    }
}

void yturn(enemy en1, person one){
    string comm;
    cout << "Press A to attack:  ";
    cin >> comm;
    if (comm == "A"){
        cout << "Bat looses 20 HP: " << endl;
        en1.HP -= one.atk - en1.def;
    }
}

void eturn(enemy en1, person one){
    cout << "Bat attaks" << endl;
    one.HP -= en1.atk - one.def;
    cout << one.name << " loses " << 20 - one.def << " HP" << endl << endl;
    Sleep(2000);
}

void result(person one){
    if (one.HP > 0) {
        cout << "Bat died" << endl;
        respect();
    } else {
        cout << "You died" << endl;
    }
}

void battle(){
    enemy en1 = batgr();
    while ( one.HP > 0 & en1.HP > 0){
        system("cls");
        status(en1, one);
        yturn(en1, one);
        eturn(en1, one);
    }
    result(one);
}

