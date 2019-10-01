// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This is a rudimentary "guess the number" program

#include <iostream>

int main() {
    // This function allows the user to try and guess the number

    // Constants and variables
    const int CORRECT_NUMBER = 5;
    int userGuess;

    // Input
    std::cout << "Guess the number between 1 & 9 (integer):" << std::endl;
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // Process
    if (userGuess == CORRECT_NUMBER) {
        std::cout << "You correctly guessed the number!" << std::endl;
    }
}
