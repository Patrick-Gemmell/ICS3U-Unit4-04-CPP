// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 2019
// This Program plays a guessing game

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // This function guesses the number and compares
    const float GUESSED_ANSWER =  (rand() % 10) + 1;;
    std::string guessedNumber;
    int guessedNumberInt = 0;
    while (true) {
        // input
        std::cout << "Guess an integer from 0-9: ";
        std::cin >> guessedNumber;
        try {
            guessedNumberInt = std::stoi(guessedNumber);
            // process and output
            if (guessedNumberInt == GUESSED_ANSWER) {
                std::cout << "Correct!" << std::endl;
                break;
            } else {
                std::cout << "Sorry that was wrong, try again?" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "invalid integer" << std::endl;
        }
    }
}
