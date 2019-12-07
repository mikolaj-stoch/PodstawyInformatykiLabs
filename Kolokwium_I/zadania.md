# Zadanie 1

Proszę zaimplementować program o następujących funkcjonalnościach
- implementujący funkcję obliczającą pole prostokąta. Funkcja przyjmuje wartości typu `integer` (długości boków) i zwraca wartość typu `integer` (10 ptk)

- implementujący funkcję obliczającą obwód prostokąta. Funkcja przyjmuje wartości typu `integer` i zwraca wartość typu `integer` (10 ptk)

- proszę rozbudować powyższy program tak, aby dane do funkcji były przekazywane jako struktura zawierająca długości boków prostokąta (10 ptk)

- proszę rozbudować powyższy program tak, aby struktura zawierała długości boków, pole i obwód. Struktura powinna być przekazywana do funkcji przez wskaźnik i w funkcjach uzupełniana o wartości pola i obwodu (20 ptk)

Proszę zaprezentować działanie funkcji (odpowiednie wywołania i wyświetlenia w funkcji `main`)

# Zadanie 2

Proszę zaimplementować program który wypełni 100-elementową tablicę `int` liczbami losowymi (dokumentacja C++ -> `srand()`) (10 ptk)

- Proszę napisać funkcję, która zwróci i wyliczy wartość średnią z elementów tej tablicy (20 ptk)

- Proszę dane przekazywać z i do funkcji przez wskaźnik (20 ptk)

Proszę zaprezentować działanie funkcji (odpowiednie wywołania i wyświetlenia w funkcji `main`)  

# Zadanie 3

Proszę zaimplementować program, który policzy częstość występowania liter w podanym przez użytkownika ciągu znaków. (20 ptk)

- Proszę uwzględnić wielkie i małe litery - wystąpienie litery `a` i `A` powinno być traktowane jednakowo (20 ptk)

- Dostęp do tablicy z ciągiem powinien być realizowany wyłącznie przy użyciu wskaźników (10 ptk)

Proszę zaprezentować działanie funkcji (odpowiednie wywołania i wyświetlenia w funkcji `main`)    
 

# Zadanie 4

 Proszę utworzyć strukturę zawierającą współrzędne dwóch punktów w przestrzeni `R^2`. (5 ptk).
 
- Proszę napisać funkcję, która oblicza długość odcinka wyznaczonego przez  te punkty (10 ptk)

- Proszę dane do i z funkcji przekazywać przez wskaźniki (15 ptk)

- Proszę napisać funkcję, która jako argument przyjmuje wskaźnik na tablicę takich struktur (i długość tablicy) a zwraca wskaźnik na tablicę zawierającą pola kół wyznaczonych przez punkty zawarte w strukturach - koniec odcinka należy potraktować jako środek koła (20 ptk).

Proszę zaprezentować działanie funkcji (odpowiednie wywołania i wyświetlenia w funkcji `main`)  
 
# Zadanie 5

Proszę napisać funkcję, która na wejściu ma tablicę `int`ów, jej długość oraz przesunięcie (`int`). Funkcja zwraca tablicę w której każda wartość jest przesunięta w prawo o wartość przesunięcia. Dla przesunięcia 4 oznacza to, że element pierwszy staje się piątym, drugi szóstym itd. Wartości dla których nie ma miejsca w tablicy są tracone. Początkowe wartości powinny być zerami (20 pkt.).

- Proszę dodać kod wyświetlający tablicę przed i po uruchomieniu funkcji (5 pkt.). 

- Proszę stworzyć dowolną strukturę i skorygować program tak, żeby poprawnie przesuwał elementy struktury (10 pkt.).

- Proszę przepisać kod funkcji działającej na `int`ach tak, żeby wykorzystywał wskaźniki (15 pkt.).

# Zadanie 6

Proszę stworzyć strukturę `stat` z polami `min`, `max` i `mean` (5 pkt.) oraz napisać funkcję, która dla zadanej tablicy intów zwraca tą strukturę. Odpowiednie pola powinny zostać wypełnione wartościami minimalna, maksymalna oraz średnia arytmetyczna (15 pkt.).

- Proszę napisać funkcję wypisującą strukturę (5 pkt.).

-Proszę zwrócić i przekazać dane do funkcji z wykorzystaniem wskaźników (15 pkt.).

- Proszę napisać funkcję która na wejściu ma dwie równoliczne tablice oraz długość tych tablic a zwraca strukturę `stat` dla tablicy będącej połączeniem tych dwóch tablic. (10 pkt.).

# Zadanie 7

Wiemy, że siła to masa razy przyspieszenie. Proszę stworzyć strukturę `object` o polach `m` oraz `a` (5 pkt). Proszę napisać funkcję, której argumenty to tablica typu `object` oraz długość tablicy a wynikiem jest obiekt o największej sile (15 pkt.). 

- Proszę napisać kod wyświetlający elementy otrzymanej tablicy (5 pkt.).

- Proszę przepisać powyższą funkcję tak, żeby działała na wskaźnikach (15 pkt.).

- Proszę zmodyfikować funkcję tak, że po wyszukaniu elementu o maksymalnej sile i jego wypisaniu, zmienia jego wartość pola `a` na 0. Jeżeli w tablicy nie ma elementów o niezerowej sile, proszę poinformować o tym użytkownika. (10 pkt.).

# Zadanie 8

Proszę napisać funkcję, która pobiera dwie tablice `tab1` i `tab2` wraz z ich rozmiarami i zwraca wartość logiczną prawda, jeżeli każdy element `tab2` jest mniejszy od najmniejszego elementu `tab1`. Dla każdego innego przypadku zwraca fałsz (20 pkt.).

Proszę powyższą funkcję  zapisać z wykorzystaniem wskaźników (15 pkt.). 

Proszę zmodyfikować funkcję tak, żeby zwracała liczbę liczb w `tab1`, które są większe od wszystkich elementów `tab2` (15 pkt.).

# Zadanie 9

Proszę stworzyć strukturę car o cechach `sits` (siedzenia) oraz `acc` (czas do osiągnięcia prędkości 100 km/h) (5 pkt.). 

- Proszę napisać funkcję, która wypisuje tablicę aut (5 pkt.).

- Proszę napisać funkcję, która jako argument pobiera tablicę aut oraz jej długość i wyświetla auto o największej liczbie miejsc i auto o największym przyspieszeniu, jeżeli to inne auto (20 pkt.).

- Proszę przepisać powyższy kod tak, żeby działał na wskaźnikach (20 pkt.).
