// kalkulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>


bool first=false;
double ram=0;


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
    else if(first == false){
        std::cout << "podaj liczbe a" << std::endl;
        std::cin >> a;
        std::cout << "podaj liczbe b" << std::endl;
        std::cin >> b;
    }
    std::cout <<"1 dodawanie 2 odejmowanie 3 mnozenie 4 dzielenie 5 modulo 6 erase ram 7 exit" << std::endl;
    std::cin >> c;
    if (c == 1) {
        std::cout << a+b << std::endl;
        ram = a + b;
        first = true;
        kalkulator();
    }
    else if(c == 2) {
        std::cout << a - b << std::endl;
        ram = a - b;
        first = true;
        kalkulator();
    }
    else if(c == 3) {
        std::cout << a*b << std::endl;
        ram = a*b;
        first = true;
        kalkulator();
    }
    else if(c == 4) {
        if (b != 0) {
            std::cout << a/b << std::endl;
            ram = a / b;
            first = true;
            kalkulator();
        }
        else if(b == 0) {
            std::cout << "ERR";
        }
    }
    else if(c == 5) {
        if (b != 0) {
            std::cout << static_cast<int>(a) % static_cast<int>(b) << std::endl;
            ram = static_cast<int>(a) % static_cast<int>(b);
            first = true;
            kalkulator();
        }
        else if(b == 0) {
            std::cout << "ERR";
        }

    }
    else if(c == 6) {
        first = false;
        kalkulator();

    }
    else if(c == 7) {
        exit;
    }
    return 0;
}

int main()
{
    kalkulator();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
