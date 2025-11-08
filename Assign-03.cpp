// Copyright (c) 2025 Christopher El-Mur
// All rights reserved
// Created by Christopher El-Mur
// Date: Oct 30 2025
// This program asks the user for their age
// and tells them if they are able to date the grandchild

#include <iostream>
#include <stdexcept>

int main() {
    int userInput;

    try {
        // Enable exceptions for input failures
        std::cin.exceptions(std::ios::failbit | std::ios::badbit);

        std::cout << "Please enter the air quality index: ";
        std::cin >> userInput;

        // If the number is between 0 and 50
        // then display the air quality is good
        if (userInput >= 0 && userInput<= 50) {
            std::cout << "The air quality is good.";
            // then display the air quality index is moderate
        } else if (userInput >= 51 && userInput <= 100) {
            std::cout << "The air quality is moderate.";

            // If the number is between 101 and 150,
            // display that the air quality is unhealthy for sensitive groups
        } else if (userInput >= 101 && userInput <= 150) {
            std::cout << "The air quality is unhealthy for sensitive groups.";

            // If the number is between 151 and 200,
            // then display that the air quality is unhealthy
        } else if (userInput >= 151 && userInput <= 200) {
            std::cout << "The air quality is unhealthy.";

            // If the number is between 201 and 300,
            // then display that the air quality is very unhealthy
        } else if (userInput >= 201 && userInput <= 300) {
            std::cout << "The air quality is very unhealthy.";

            // If the number is between 301 and 500,
            // then display that the air quality is Hazardous
        } else if (userInput >= 301 && userInput <= 500) {
            std::cout << "The air quality is Hazardous.";
        }

        // Tell the user to enter a valid input
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Invalid input! Please enter a valid number." << std::endl;
    }
}
