// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the sum of two integers


#include <iostream>

int main() {
    int first_integer;
    int second_integer;
    int total;

    // input
    std::cout << "Enter the first integer to add: " << std::endl;
    std::cin >> first_integer;
    std::cout << "Enter the second integer to add: " << std::endl;
    std::cin >> second_integer;

    // process
    total = first_integer + second_integer;

    // output
    std::cout << "" << std::endl;
    std::cout << "" << first_integer
              << " + " << second_integer << " = " << total << std::endl;
}
