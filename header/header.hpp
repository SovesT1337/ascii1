//
// Created by SovesT on 24.01.2021.
//

#ifndef ASCII1_HEADER_HPP
#define ASCII1_HEADER_HPP

#endif //ASCII1_HEADER_HPP

#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
using std::cout;
using std::string;
using std::endl;
using std::cin;

struct person{
    string name;
    int HP{};
    int MP{};
    int atk{};
    int def{};
};

struct enemy {
    string name;
    int HP;
    int MP;
    int atk;
    int def;
    string skin;
};



person create();

enemy batgr();

void battle(person);
