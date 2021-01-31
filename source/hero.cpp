// Copyright 2020 SovesT
// Created by SovesT on 24.01.2021.
//

#include "../header/header.hpp"

person create(){
    person one;
    cout << "Enter your characters name: ";
    cin >> one.name;
    cout << endl;
    one.HP = 100;
    one.MP = 50;
    one.atk = 20;
    one.def = 10;
    return one;
}
