//
// Created by SovesT on 24.01.2021.
//

#include "header.hpp"

enemy batgr(){
    enemy bat;
    bat.skin = " /\\                 /\\\n"
                  "/ \\'._   (\\_/)   _.'/ \\\n"
                  "|.''._'--(o.o)--'_.''.|\n"
                  " \\_ / `;=/ \" \\=;` \\ _/\n"
                  "   `\\__| \\___/ |__/`\n"
                  "        \\(_|_)/\n"
                  "         \" ` \"";
    bat.name = "Bat";
    bat.HP = 100;
    bat.MP = 0;
    bat.def = 0;
    bat.atk = 20;
    return bat;
}
