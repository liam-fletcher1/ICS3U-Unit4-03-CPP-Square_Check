// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to enter positive integer
// The program find the square of all the positive numbers up to the integer

#include <iostream>
#include <string>

int main() {
    // this tells the user the squares of
    // all the positive numbers from the integer

    std::string numberCount;
    int numberCountInt;
    int squareLoop = 0;
    int result = squareLoop * squareLoop;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberCount;
    std::cout << std::endl;

    // process & output

    try {
        numberCountInt = std::stoi(numberCount);
        if  (numberCountInt < 0) {
             std::cout << "This is not a positive integer!" << std::endl;
        }
        for (squareLoop = 0; squareLoop < numberCountInt + 1; squareLoop++) {
            int result = squareLoop * squareLoop;
            std::cout << squareLoop << "² = " << result << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not a positive integer!";
    }

    std::cout << "\nDone." << std::endl;
}
