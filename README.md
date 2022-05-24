# ObjectC++

Napisz aplikację w języku C++, dzięki której możliwe będzie przechowywanie informacji dotyczących zbioru
punktów o współrzędnych całkowitych nieujemnych. Zadbaj o następującą funkcjonalność:
1. Utwórz klasę Punkt odpowiadającą za pojedynczy punkt.
2. Utwórz klasę Zbior odpowiadającą za zbiór obiektów klasy Punkt. Liczba punktów wprowadzanych do
zbioru nie jest z góry ustalona.
3. W klasie Zbior zdefiniuj operatory << oraz >> odpowiadające odpowiednio za drukowanie punktów
z danego zbioru (punkty powinny się drukować na ekranie w odpowiednim miejscu) oraz wprowadzanie
punktu do zbioru (punkty w zbiorze nie mogą się powtarzać).
4. W klasie Zbior zdefiniuj metodę drukuj, która wypisze listę punktów wraz z ich współrzędnymi.
5. W klasie Zbior zdefiniuj metodę usun, której zadaniem będzie usunięcie wprowadzonych wcześniej
punktów.
6. Dla klasy Zbior napisz konstruktor kopiujący.
7. Dla klasy Zbior napisz operator przypisania.
8. W klasie Zbior napisz metodę wiekszeNiz zwracającą na podstawie bieżącego obiektu nowy obiekt
klasy Zbior składający się z punktów o współrzędnych większych od podanej liczby w parametrze
metody.
9. W klasie Zbior zdefiniuj operator +, którego zadaniem będzie zwrócenie obiektu klasy Zbior jako
sumy elementów dla poszczególnych dwóch zbiorów.
10. Zdefiniuj klasę KolorowyZbior, która będzie rozszerzeniem klasy Zbiór (dziedziczenie publiczne) o
dodatkowe informacje dot. kolorów poszczególnych punktów.
11. W klasie KolorowyZbior przedefiniuj odziedziczoną metodę drukuj, która wydrukuję listę punktów
wraz z ich współrzędnymi oraz ich kolory.
12. Korzystając z dowolnego szablonu STL zdefiniuj listę obiektów typu Zbior, która będzie przechowywała
obiekty klasy Zbior i KolorowyZbior. Dla utworzonej kolekcji obiektów wywołaj metodę drukuj.
