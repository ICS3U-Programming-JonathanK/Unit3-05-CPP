// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Date: May 13, 2021
// This program uses a switch statement. It asks the user
// for a number between 1 and 12 and tells them which
// month that corresponds to.
#include <iostream>

int main() {
    // declare variables
    int month;

    // get the user input
    std::cout << "Enter the number between 1 and 12: ";
    std::cin >> month;

    // state the month that the number represents
    switch (month) {
        case 1 :
        std::cout << month << " represents January.\n";
        break;

        case 2 :
        std::cout << month << " represents February.\n";
        break;

        case 3 :
        std::cout << month << " represents March.\n";
        break;

        case 4 :
        std::cout << month << " represents April.\n";
        break;

        case 5 :
        std::cout << month << " represents May.\n";
        break;

        case 6 :
        std::cout << month << " represents May.\n";
        break;

        case 7 :
        std::cout << month << " represents May.\n";
        break;

        case 8 :
        std::cout << month << " represents May.\n";
        break;

        case 9 :
        std::cout << month << " represents May.\n";
        break;

        case 10 :
        std::cout << month << " represents May.\n";
        break;

        case 11 :
        std::cout << month << " represents May.\n";
        break;

        case 12 :
        std::cout << month << " represents May.\n";
        break;

        default:
        std::cout << "Error. It does not represent a month.\n";
    }
}
