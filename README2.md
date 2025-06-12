# ⏰ Aplikacja Alarm i Minutnik w Qt

## 1. 📄 Opis projektu

Prosta aplikacja desktopowa stworzona z wykorzystaniem biblioteki **Qt (C++)**, która umożliwia:
- ustawianie jednorazowych alarmów na konkretną datę i godzinę,
- korzystanie z minutnika (odliczania czasu w sekundach),
- zmianę stylu zegara (czcionka, kolor, pogrubienie),
- zmianę koloru tła aplikacji.

Całość zbudowana zgodnie z zasadami **programowania obiektowego** i rozdzieleniem logiki od widoku.

---

## 2. 🧠 Funkcje

- 🕰️ **Zegar czasu rzeczywistego** (aktualizowany co sekundę, format `HH:mm:ss`)
- 🔔 **Alarmy** – możliwość dodania i usunięcia wielu alarmów
- ⏳ **Minutnik (countdown)** – licznik sekund z przyciskami: start, pauza/wznów, reset
- 🎨 **Styl zegara** – 10 wariantów (zmiana czcionki i koloru tekstu)
- 🖼️ **Zmiana tła aplikacji** – 4 kolory w cyklu
- 📌 **Informacja o autorze** w menu
- ✅ Intuicyjny interfejs stworzony w Qt Designer

---

## 3. 💻 Wymagania systemowe

- **System:** Windows 7+ / Linux
- **Qt:** Qt 5.12 lub nowszy
- **Kompilator:** obsługa C++11 (MinGW, MSVC, GCC)
- **RAM:** min. 1 GB
- **Dysk:** ok. 100 MB miejsca

---

## 4. 📁 Struktura plików

| Plik                | Opis                                  |
|---------------------|----------------------------------------|
| `main.cpp`          | Punkt startowy aplikacji              |
| `mainwindow.h/.cpp` | Klasa GUI – interfejs i logika główna |
| `mainwindow.ui`     | Plik UI z Qt Designer                 |
| `alarmevent.h/.cpp` | Klasa reprezentująca alarm            |
| `timeevent.h`       | Abstrakcyjna klasa bazowa             |
| `resources.qrc`     | (opcjonalnie) zasoby aplikacji        |

---

## 5. 🧭 Instrukcja obsługi

### ⏰ Dodanie alarmu
1. Wybierz datę i godzinę z kalendarza.
2. Dodaj etykietę (opcjonalnie).
3. Kliknij `Set`, aby ustawić alarm.

### ⏳ Uruchomienie minutnika
1. Wpisz liczbę sekund.
2. Kliknij `Set`, aby rozpocząć odliczanie.

### 🗑️ Usunięcie alarmu
- Zaznacz alarm z listy i kliknij `Delete`.

### 🎨 Zmiana stylu zegara
- Kliknij `Style`, aby przełączyć na kolejny wariant.
- Style obejmują kolor tekstu i czcionkę (Arial, Courier, Verdana itp.).

### 🖼️ Zmiana tła
- Kliknij `Background`, aby przełączać między kolorami:
  - Szary `#808080`
  - Ciemnoniebieski `#001F3F`
  - Pomarańczowy `#FF851B`
  - Brązowy `#8B4513`

### 🔁 Reset minutnika
- Kliknij `Reset`, aby zatrzymać i wyzerować minutnik.

---

## 6. 🧱 Programowanie obiektowe

- 👨‍💻 **MainWindow** – główna klasa GUI, dziedziczy z `QMainWindow`
- 🔁 **TimeEvent** – abstrakcyjna klasa bazowa dla zdarzeń czasowych
- ⏰ **AlarmEvent** – implementacja konkretnego alarmu (dziedziczy po `TimeEvent`)
- 🧩 **Polimorfizm** – dzięki metodom wirtualnym
- 🔒 **Hermetyzacja** – dane prywatne, publiczne metody dostępu
- 🧹 **Destruktory** – dbają o czyszczenie pamięci

---

## 7. 💡 Pomysły na rozwój

- 🔉 Dodanie dźwięków alarmu
- 💾 Zapisywanie alarmów do pliku i ich przywracanie
- 🌍 Tłumaczenia aplikacji (i18n)
- 🧊 Lepsze UI – animacje, ikony SVG, responsywny layout
- 🔁 Alarmy cykliczne (np. codziennie o 7:00)

---

## 8. 👤 Autor

**Wojciech Benkiewicz**  
📘 Nr indeksu: 287118  
🎓 Politechnika Wrocławska  
📅 Rok: 2025

