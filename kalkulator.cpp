#include <iostream>
#include <cmath>

class Kalkulator {
private:
    double ram;   
    bool first;   

public:
    Kalkulator() : ram(0), first(false) {}

    double dodawanie(double a, double b) {
        first = true;
        ram = a + b;
        return ram;
    }

    double odejmowanie(double a, double b) {
        first = true;
        ram = a - b;
        return ram;
    }

    double mnożenie(double a, double b) {
        first = true;
        ram = a * b;
        return ram;
    }

    double dzielenie(double a, double b) {
        if (b != 0) {
            first = true;
            ram = a / b;
            return ram;
        }
        else {
            std::cout << "ERR: Division by zero!" << std::endl;
            return 0;
        }
    }

    double modulo(double a, double b) {
        if (b != 0) {
            first = true;
            ram = static_cast<int>(a) % static_cast<int>(b);
            return ram;
        }
        else {
            std::cout << "ERR: Division by zero!" << std::endl;
            return 0;
        }
    }

    void erase() {
        ram = 0;
        first = false;
    }

    void kalkulator() {
        double a = 0, b = 0;
        int c;

        if (first == true) {
            a = ram;
            std::cout << "Podaj liczbe b: ";
            std::cin >> b;
        }
        else {
            std::cout << "Podaj liczbe a: ";
            std::cin >> a;
            std::cout << "Podaj liczbe b: ";
            std::cin >> b;
        }

        std::cout << "1. Dodawanie\n";
        std::cout << "2. Odejmowanie\n";
        std::cout << "3. Mnożenie\n";
        std::cout << "4. Dzielenie\n";
        std::cout << "5. Modulo\n";
        std::cout << "6. Zakończ\n";
        std::cout << "7. Wyczyść\n";

        std::cout << "Wybierz opcję: ";
        std::cin >> c;

        switch (c) {
        case 1:
            std::cout << "Wynik dodawania: " << dodawanie(a, b) << std::endl;
            break;
        case 2:
            std::cout << "Wynik odejmowania: " << odejmowanie(a, b) << std::endl;
            break;
        case 3:
            std::cout << "Wynik mnożenia: " << mnożenie(a, b) << std::endl;
            break;
        case 4:
            std::cout << "Wynik dzielenia: " << dzielenie(a, b) << std::endl;
            break;
        case 5:
            std::cout << "Wynik modulo: " << modulo(a, b) << std::endl;
            break;
        case 6:
            std::cout << "Koniec programu.\n";
            return;
        case 7:
            erase();
            std::cout << "Wartości zostały wyczyszczone.\n";
            break;
        default:
            std::cout << "Niepoprawna opcja.\n";
        }

        kalkulator();
    };
};

int main() {
    Kalkulator calc; 
    calc.kalkulator();
    return 0;
}
