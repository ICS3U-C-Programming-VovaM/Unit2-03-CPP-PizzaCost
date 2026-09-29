// Copyright 2026 Vova M
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double diameter, price;

    std::cout << "Enter pizza diameter: ";
    std::cin >> diameter;

    std::cout << "Enter price per square inch: ";
    std::cin >> price;

    double radius = diameter / 2;
    double area = M_PI * radius * radius;
    double perimeter = 2 * M_PI * radius;
    double total = area * price;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nPizza Area: " << area << " sq in";
    std::cout << "\nPizza Perimeter: " << perimeter << " inches";
    std::cout << "\nTotal Cost: $" << total << std::endl;

    return 0;
