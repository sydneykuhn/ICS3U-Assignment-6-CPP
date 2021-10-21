// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program calculates the area of a square

#include <iostream>
#include <string>

float CalculateArea(float sideLength) {
    // calculate area
    float area;

    // process
    area = sideLength * 4;

    // output
    return area;
}

int main() {
    // this function gets the user input

    std::string sideLengthAsString;
    float sideLengthFromUser;
    float area;
    float calculatedArea;

    // input
    std::cout << "Enter the side length of a square (cm) : ";
    std::cin >> sideLengthAsString;
    try {
        sideLengthFromUser = std::stof(sideLengthAsString);
        if (sideLengthFromUser > 0) {
            calculatedArea = CalculateArea(sideLengthFromUser);
            std::cout << "\nThe area of a square with a side length of " <<
                sideLengthFromUser << " cm is " << calculatedArea << " cm."
                << std::endl;
        } else {
            std::cout << "\nNegative number entered, please try again."
                << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
