// This program enables users to convert temperature measurements
// between Fahrenheit, Celsius, and Kelvin.

#include <iostream>

// Function declarations
void tempF(float f);
void tempC(float c);
void tempK(float k);

int main() {
    // Declaring variables
    char unit;
    float temp;

    // Getting user input
    std::cout << "Please select a temperature unit (F, C, or K): ";
    std::cin >> unit;

    std::cout << "Please enter the temperature: ";
    std::cin >> temp;

    // Performing conversions
    if (unit == 'F' || unit == 'f') {
        tempF(temp);
    }
    else if (unit == 'C' || unit == 'c') {
        tempC(temp);
    }
    else if (unit == 'K' || unit == 'k') {
        if (temp < 0) {
            std::cout << "Kelvin cannot be negative.\n";
        }
        else {
            tempK(temp);
        }
    }
    else {
        std::cout << "Please enter a valid unit.\n";
    }

    return 0;
}

// Fahrenheit conversions
void tempF(float f) {
    float celsius = (f - 32) * 5 / 9;
    float kelvin = celsius + 273.15;

    std::cout << "Temperature in Celsius: " << celsius << '\n';
    std::cout << "Temperature in Kelvin: " << kelvin << '\n';
}

// Celsius conversions
void tempC(float c) {
    float fahrenheit = (c * 9 / 5) + 32;
    float kelvin = c + 273.15;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << '\n';
    std::cout << "Temperature in Kelvin: " << kelvin << '\n';
}

// Kelvin conversions
void tempK(float k) {
    float celsius = k - 273.15;
    float fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << '\n';
    std::cout << "Temperature in Celsius: " << celsius << '\n';
}