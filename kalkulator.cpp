﻿// kalkulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>


double dodawanie(double a,double b) {
    double wynik = a + b;
    std::cout << wynik;
    return wynik;
}
double odejmowanie(double a, double b) {
    double wynik = a - b;
    std::cout << wynik;
    return wynik;
}
double mnożnie mnożenie(double a, double b) {
    double wynik = a * b;
    std::cout << wynik;
    return wynik;
}
double dzielenie(double a, double b) {
    if (b != 0) {
        double wynik = a + b;
        std::cout << wynik;
        return wynik;
    }
    else {
        std::cout << "ERR";
    }
}
double modulo(double a, double b) {
    if (b != 0) {
        std::cout << static_cast<int>(a) % static_cast<int>(b) << std::endl;
        ram = static_cast<int>(a) % static_cast<int>(b);
        std::cout << ram;
        first = true;
        kalkulator();
    }
    else if (b == 0) {
        std::cout << "ERR";
    }
}
double eraseram(double a, double b) {
    double wynik =0;
    return wynik;
}


bool first = false;
double ram = 0;


double kalkulator()
{
    double a = 0;
    double b = 0;
    int c;
    if (first == true) {
        a = ram;
        std::cout << "podaj liczbe b" << std::endl;
        std::cin >> b;
    }
    else if (first == false) {
        std::cout << "podaj liczbe a" << std::endl;
        std::cin >> a;
        std::cout << "podaj liczbe b" << std::endl;
        std::cin >> b;
    }
    std::cout << "1 dodawanie" << std::endl;
    std::cout << " 2 odejmowanie " << std::endl;
    std::cout << "3 mnozenie " << std::endl;
    std::cout << "4 dzielenie " << std::endl;
    std::cout << "6 erase" << std::endl;
    std::cout << "7 exit" << std::endl;
    std::cin >> c;

    switch (c) {
    case 1:
        dodawanie(a, b);
        std::cout << dodawanie(a, b) << std::endl;
        break;
    case 2:
        odejmowanie(a, b);
        std::cout << odejmowanie(a, b) << std::endl;
        break;
    case 3:
        mnożenie(a, b);
        break;
    case 4:
        dzielenie(a, b);
        break;
    case 5:
        modulo(a, b);
        break;
    case 6:
        eraseram(a, b);
        break;

    }


int main()
{
    kalkulator();
}