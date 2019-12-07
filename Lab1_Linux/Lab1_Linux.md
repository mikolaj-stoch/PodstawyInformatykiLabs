# Wprowadzenie do systemu Linux

## Wstęp

Na zajęciach będziemy korzystać z systemu **Linux**. Dlatego przy uruchomieniu komputera należy wybrać Linux/Ubuntu.

Proszę wykonać wszystkie ćwiczenia, jeżeli nie uda się to na zajęciach, można użyć na przykład [emulator Linuxa](https://www.tutorialspoint.com/unix_terminal_online.php).

Po uruchomieniu system uruchomi się w trybie graficznym. Proszę uruchomić przeglądarkę internetową i przeglądarkę plików.

## Konsola

Jak wygląda interfejs hakera?

Tak:
![Super bohater](https://i.amz.mshcdn.com/nZ9D2XRtoCcXUlC6XsDWdeP41X8=/fit-in/1200x9600/http%3A%2F%2Fmashable.com%2Fwp-content%2Fuploads%2F2010%2F12%2Fminority-report-640.jpg)
Czy tak:
![Czarne ekrany](https://i.pinimg.com/originals/67/b4/fa/67b4faa0ed99b68c4aeab04f53444e4a.jpg)

Znajdź i uruchom konsolę tekstową (konsola, terminal). To podstawowy sposób interakcji z systemem.
Sprawdź, jak działają komendy: `ls`, `cd`, `mkdir`, `rm`, `whoami`, `pwd`. Działanie poszczególnych komend może być modyfikowane przy użyciu przełączników polecenia (parametrów wywołania) Sprawdź, czym różni się komenda `ls` od `ls -al`.

#### 1. Zadanie

1. Sprawdź, jaka jest nazwa użytkownika, na którego jesteś zalogowany.
1. Znajdź jego katalog domowy.
   - Sprawdź, czy prawa dostępu pozwalają innym użytkownikom na czytanie jego zawartości.
   - Jeżeli pozwalają, to zmień je tak, aby inni użytkownicy nie mieli prawa czytać jego zawartości. Zmiana praw dostępu jest możliwa z wykorzystaniem polecenia `chmod`. Podstawowy opis polecenia można znaleźć tu: [chmod](http://www.thegeekstuff.com/2010/06/chmod-command-examples)
   - Zapoznaj się z trybem numerycznym polecenia `chmod`. 
1. W katalogu domowym utwórz katalog o nazwie `katalog` (polecenie `mkdir`). Utwórz w nim plik tekstowy zawierający Twoje imię i/lub nazwisko (np. `vim plik.txt`). 
>> Używanie edytora `vim` nie jest proste za pierwszym razem. Jednak jest to edytor dostępny niemal na każdym systemi unixowym, a opanowany pozwala na bardzo sprawną pracę, stąd warto go znać. Tu można znaleźć ktrótki [tutorial](http://www.openvim.com/). **Proszę koniecznie zapoznać się z tym tutorialem.** Na tą chwilę wystarczy wiedzieć, że edytor ten ma dwa tryby: wspisywania i wydawania komend. Wejście do trybu wpisywania odbywa się przez wpisanie `i`. W trybie wpisywanie możemy wprowadzać tekst. Przejście z trybu wpisywania do trybu wydawania komend odbywa się przez naciśnięcie przycisku `Esc`. W trybie wprowadzania komend możemy wydawać komendy oraz przesówać kursor. Kluczowa dla Państwa komendy to:
>> - `:wq` pozwalająca zapisać zmiany i zamknąć vim-a.
>> - `:q!` pozwala zamknąć vim-a bez zapisywania.
>>Inne przydatne, działające także w `man`, `more` czy `less` to możliwość wyszukiwania. W trybie wydawania komend wpisując `/text` zostanie znaleziony ciąg "text". Naciśnięcie `n` przechodzi do kolejnego wystąpienia szukanego ciągu, naciśnięcie `p` powoduje przejście do poprzedniego wystąpienia szukanego ciągu.

4. W konsoli tekstowej wyświetl na ekranie utworzony plik (komenda `cat`), a następnie zmień jego prawa dostępu na `765`. Co oznaczają takie prawa dostępu?

1. Proszę odebrać prawa do zapisu do pliku dla każdego użytkownika. Co się stanie, jak będziemy chcieli zapisać zmiany? Czy mimo braku możliwości wprowadzania zmian możemy zmienić prawa tego pliku?

## Help `man`

Najszersza dokumentacja komend, bibliotek i instrukcji jest dostępna w tzw. ,,manualach''. Są to pliki pomocy dostępne z konsoli za pomocą instrukcji `man`. Oczywiście obecnie najprostszym sposobem wyszukania inforamcji o danej funkcji jest internet, choć warto wiedzieć, że możemy się znaleźć w sytuacji, gdy nie będziemy mieli doń dostępu (choćby przez brak interfejsu graficznego i przeglądarki).

#### 2. Zadanie
Wykorzystując pomoc, znajdź jak powinno wyglądać wywołanie instrukcji `ls`, aby wyświetlić wyłącznie pliki posortowane według rozmiaru pliku.

## System plików

W Linuxie wszystko jest plikiem. Zarówno katalogi, jak i zewnętrzne dyski, są traktowane jako pliki. Pliki mają strukturę hierarchiczną drzewa, którego korzeniem jest katalog `/`. Oznacza to, że przeszukanie katalogu `/` i wszystkich jego podkatalogów przeszukuje wszystko, co jest na komputerze, łącznie np. z podłączonym dyskiem zewnętrznym. Więcej szczegółów gdzie znajdują się dyski w drzewie katalogów można znaleźć tu: [Punkty montowania, partycje i ich układ.](http://ubuntu.pl/forum/viewtopic.php?t=134558) 

Najważniejsze miejsca w sytemie plików:
- `/home/student/` to katalog domowy użytkownika `student` w którym powinien trzymać on wszystkie swoje pliki osobiste. Skrótem na katalog domowy jest `~`, a więc wywołania `cd /home/student/` i `cd ~` są tożsame dla użytkownika `student`.
- `/media/student/` tu pojawią się dołączone urządzenia jako katalogi.
- `/etc/` zawiera pliki konfiguracyjne.

#### 3. Zadanie

1. W katalogu domowym utwórz katalog o nazwie `A`.
1. W katalogu `A` utwórz katalog `a`. 
1. Będąc w katalogu `~`, utwórz pusty plik o nazwie `data.txt` w katalogu `~/A/a/`.
1. Przejdź do katalogu `~/A/a/` i za pomocą komendy `echo` wpisz do pliku `data.txt` zdanie zawierające wyraz jakikolwiek. Następnie za pomocą komendy `echo` dopisz do tego samego pliku inne zdanie niezawierające tego wyrazu.
1. Przejdź do katalogu `~/A/` i wypisz w konsoli zawartość pliku `data.txt`. Następnie uruchom dowolny edytor graficzny i sprawdź zawartość tego samego pliku.
1. Otwórz dwie konsole. W jednej edytuj plik z wykorzystaniem edytora `vim`. W drugiej wypisz zawartość tego pliku poleceniem `cat`. Proszę dokonać zmian w pliku i sprawdzić co widzimy w drugiej konsoli.

## Strumienie

W Linuxie wynik działania polecenia można przekazać do innego polecenia za pomocą operatora `|`. Dla przykładu wywołanie polecenia `ls -l` wypisze pliki w danym katalogu, dodając po tej komendzie `|` możemy przekazać ten wynik kolejnej komendzie. Komendą, do której często przekazuje się wyniki, jest `grep` pozwalająca na wykonanie wyrażeń regularnych na liniach tekstu. Stąd `ls -l | grep 'ala'` wypisze wszystkie pliki zawierające w opisie lub nazwie ciąg `ala`. Innym sposobem przekazania wyniku jest zapisanie ich do pliku poprzez nadpisanie lub stworzenie pliku `ls -l > wynik_ls.txt` lub dopisanie do istniejącego pliku `ls -l >> wynik_ls.txt`. Dodając przed znakiem `>` lub `>>` cyfrę możemy przekazać konkretny strumień. `0` to klawiatura, `1` to ekran, `2` to błędy. Więcej szczegółów można znaleźć tu: [Chapter 20. I/O Redirection.](http://tldp.org/LDP/abs/html/io-redirection.html)

#### 4. Zadanie

1. W katalogu, w którym znajduje się plik `data.txt`, utwórz dodatkowo plik `MyData.txt`, z danymi personalnymi zmyślonego przyjaciela.
1. Połącz oba pliki, używając polecenia `cat`, tak aby powstał nowy plik (nowy plik powinien mieć co najmniej 3 linie tekstowe – tj. co najmniej 2 znaki enter).
1. Za pomocą polecenia `cat`, `grep` i operatora `|` wypisz na ekranie:
   - linie zawierające słowo *jakikolwiek*,
   - linie **nie**zawierające słowa *jakikolwiek*.
1. Używając polecenia `find`, wyznacz ścieżkę dostępu do pliku `ctype.h`.
1. Używając polecenia `grep`, `find`, `cat`, `xargs`. Znajdź plik w którym umieszczono definicje funkcji `fopen` standardowej biblioteki we/wy języka C. Plik powinien znajdować się w tym samym katalogu co `ctype.h` zawierać słowo *fopen*.
1. Proszę wykonać komendę `find / -name wynik_ls.txt`. Czy łatwo znaleźć ten plik? Proszę teraz wywołać komendę `find / -name wynik_ls.txt 2>/dev/null` w której wszystkie błędy, czyli informacje o braku prawa do czytania danego katalogu, przekazaliśmy do tak zwanego segregatora nr. 13, czyli w nicość.
