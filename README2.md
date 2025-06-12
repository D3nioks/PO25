# ⏰ Aplikacja Alarm i Minutnik w Qt

## 1. Opis projektu

Aplikacja umożliwia użytkownikowi ustawianie alarmów na określoną datę i godzinę oraz korzystanie z minutnika (countdown timer). Dodatkowo umożliwia dynamiczną zmianę stylu zegara oraz koloru tła aplikacji. Zbudowana z wykorzystaniem biblioteki Qt.

---

## 2. Funkcje

- ✅ Wyświetlanie aktualnego czasu (zegara) w formacie `HH:mm:ss`.
- 🕒 Dodawanie i usuwanie alarmów.
- ⏳ Minutnik: odliczanie zadanej liczby sekund, z opcjami **start**, **pauza/wznów** i **reset**.
- 🔔 Powiadomienia o alarmach i zakończeniu minutnika.
- 🎨 **Zmiana koloru i stylu zegara** (czcionka, kolor, pogrubienie, kursywa).
- 🖼️ **Przycisk zmieniający tło** aplikacji cyklicznie (4 kolory).

---

## 3. Wymagania

- **System operacyjny:** Windows 7 lub nowszy / Linux (Ubuntu/Fedora).
- **Qt:** Qt 5.12 lub nowszy.
- **Kompilator:** Zgodny z C++11 lub wyżej.
- **RAM:** min. 1 GB (zalecane 2 GB).
- **Miejsce na dysku:** 100 MB.

---

## 4. Struktura projektu

- `mainwindow.h` – deklaracja klasy i slotów.
- `mainwindow.cpp` – logika aplikacji i implementacja funkcji.
- `mainwindow.ui` – interfejs graficzny stworzony w Qt Designer.
- `main.cpp` – punkt startowy aplikacji.
- `alarmevent.h/.cpp` – klasa reprezentująca pojedynczy alarm.
- `resources.qrc` – (opcjonalnie) zasoby graficzne.

---

## 5. Instrukcja obsługi

### ⏰ Ustawienie alarmu lub minutnika (`Set`)
- Jeśli ustawiona jest **data i godzina**, kliknięcie `Set` ustawia **alarm**.
- Jeśli wpisana jest **liczba sekund** (i brak daty/godziny), `Set` uruchamia **minutnik**.

### 🗑️ Usuwanie alarmu (`Delete`)
- Zaznacz alarm z listy.
- Kliknij `Delete`, aby go usunąć.

### 🎨 Zmiana stylu zegara (`Style`)
- Kliknij `Style`, aby zmienić wygląd zegara (czcionka, kolor).
- Styl zmienia się cyklicznie – **10 różnych wariantów**, potem wraca do pierwszego.

### 🖼️ Zmiana koloru tła (`Background`)
- Kliknięcie zmienia kolor tła cyklicznie:
  - Szary (`#808080`)
  - Ciemnoniebieski (`#001F3F`)
  - Pomarańczowy (`#FF851B`)
  - Brązowy (`#8B4513`)

### 🔁 Reset minutnika (`Reset`)
- Zatrzymuje minutnik i ustawia `00:00`.

---

## 6. Programowanie obiektowe

- **Klasa `MainWindow`** dziedziczy po `QMainWindow`.
- **Hermetyzacja** – pola prywatne, publiczne sloty.
- **Konstruktory i destruktory** – inicjalizacja, czyszczenie alarmów.
- **Polimorfizm** – przez dziedziczenie po klasach Qt.
- **Dodatkowe klasy**: np. `AlarmEvent`.

---

## 7. Pomysły na rozwój

- 🔉 Obsługa dźwięku przy alarmie.
- 💾 Zapisywanie alarmów do pliku i wczytywanie po uruchomieniu.
- 🌍 Wersje wielojęzyczne (i18n).
- 🎨 Nowoczesny interfejs z ikonami i animacjami.
- 🔁 Obsługa alarmów cyklicznych.

---

## 👨‍💻 Autor

Wojciech Benkiewicz  
Nr indeksu: 287118  
Politechnika Wrocławska
Rok: 2025
