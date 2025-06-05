1. Opis projektu
Aplikacja umożliwia użytkownikowi ustawianie alarmów na określony czas oraz korzystanie z minutnika (countdown timer). Interfejs pozwala na:

Wyświetlanie aktualnego czasu (zegara).

Dodawanie i usuwanie alarmów.

Uruchamianie, pauzowanie i resetowanie minutnika.

Powiadamianie użytkownika komunikatami o alarmach i zakończeniu minutnika.

2. Założenia funkcjonalne
Wyświetlanie aktualnego czasu w formacie HH:mm:ss.

Możliwość ustawienia alarmu na przyszły czas i datę.

Lista aktywnych alarmów wyświetlana w interfejsie.

Powiadomienie użytkownika o wybranym alarmie.

Minutnik odliczający zadany czas w sekundach.

Sterowanie minutnikiem: start, pauza, reset.

Komunikaty informujące o zakończeniu minutnika i alarmu.

3. Założenia niefunkcjonalne
Aplikacja ma intuicyjny i prosty interfejs.

Działa płynnie i stabilnie.

Wykorzystuje mechanizmy Qt do zarządzania czasem (QTimer).

Kod napisany z zasadami programowania obiektowego.

Zoptymalizowany pod kątem działania na systemach Windows i Linux.

4. Wymagania sprzętowe i środowiskowe
System operacyjny: Windows 7 lub nowszy, Linux (Ubuntu, Fedora).

Qt Framework wersja 5.12 lub nowsza.

Kompilator C++ zgodny ze standardem C++11 lub wyższym.

Minimum 100 MB wolnego miejsca na dysku.

Minimum 1 GB RAM (zalecane 2 GB).

5. Struktura projektu
mainwindow.h — deklaracje klasy MainWindow, jej metod i atrybutów.

mainwindow.cpp — definicje funkcji klasy MainWindow, implementacja logiki aplikacji.

mainwindow.ui — plik XML opisujący interfejs graficzny (stworzony w Qt Designer).

main.cpp — punkt startowy aplikacji.

resources.qrc (opcjonalnie) — zasoby graficzne i inne.

6. Opis klas i metod
Klasa MainWindow
Reprezentuje główne okno aplikacji, zarządza interfejsem i logiką.

Atrybuty:
QTimer *clockTimer — timer aktualizujący zegar co sekundę.

QTimer *countdownTimer — timer minutnika odliczający czas.

QList<QDateTime> alarms — lista ustawionych alarmów.

int countdownSeconds — pozostały czas minutnika w sekundach.

bool countdownRunning — flaga stanu minutnika.

Metody:
updateClock() — aktualizuje etykietę zegara i sprawdza alarmy.

setAlarm() — dodaje alarm do listy, jeśli nie jest w przeszłości.

deleteSelectedAlarm() — usuwa wybrany alarm z listy.

checkAlarms() — sprawdza, czy któryś alarm jest już do wywołania.

startCountdown() — uruchamia minutnik na zadany czas.

toggleCountdown() — wstrzymuje/wznawia minutnik.

resetCountdown() — zeruje minutnik.

updateCountdown() — wywoływana co sekundę, aktualizuje odliczanie.

updateCountdownDisplay() — wyświetla czas minutnika w formacie mm:ss.

7. Instrukcja obsługi
Ustawienie alarmu
Wybierz datę i godzinę alarmu za pomocą widgetów QDateEdit i QTimeEdit.

Kliknij przycisk „Ustaw alarm”.

Alarm pojawi się na liście aktywnych alarmów.

Usuwanie alarmu
Zaznacz alarm na liście.

Kliknij przycisk „Usuń alarm”.

Minutnik
Start: wpisz liczbę sekund w polu i kliknij „Start minutnika”.

Pauza/Wznów: kliknij przycisk „Pauza” lub „Wznów” w zależności od stanu minutnika.

Reset: kliknij „Reset minutnika”, aby zatrzymać i wyzerować odliczanie.

8. Programowanie obiektowe w projekcie
Klasy i obiekty: Główna klasa MainWindow dziedziczy po QMainWindow, instancje klas QTimer, QDateTime oraz kontenery Qt.

Hermetyzacja: Pola prywatne (np. countdownSeconds, countdownRunning) i publiczne sloty do interakcji z UI.

Konstruktory i destruktory: Konstruktor inicjuje UI i timery; destruktor zwalnia pamięć.

Polimorfizm i dziedziczenie: MainWindow rozszerza funkcjonalność QMainWindow.

Operator przeciążony: Nie występuje bezpośrednio, ale można dodać, np. dla porównań alarmów.

Przyjaźń: Nie zastosowano, ale można rozważyć dla zaawansowanych rozwiązań.

9. Możliwe rozszerzenia
Dodanie możliwości ustawiania dźwięku alarmu.

Zapisywanie alarmów do pliku i wczytywanie przy starcie.

Obsługa wielojęzyczności (internationalization).

Ulepszony interfejs z ikonami i animacjami.

Obsługa powtarzających się alarmów.
