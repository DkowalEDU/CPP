Funkcja to wydzielony, nazwany blok kodu, który wykonuje określone zadanie. Zamiast pisać ten sam kod wielokrotnie, możemy zapisać go raz w postaci funkcji, a następnie wywoływać w dowolnym miejscu programu.

Główne zalety stosowania funkcji:

* Zasada DRY (Don't Repeat Yourself) – unikamy powielania tego samego kodu.
* Modułowość i czytelność – program dzieli się na mniejsze, logiczne części, które łatwiej zrozumieć.
* Łatwiejsze debugowanie – błąd poprawiamy w jednym miejscu (w funkcji), a nie w każdym miejscu, gdzie kod byłby skopiowany.

Każda funkcja w C++ składa się z kilku podstawowych elementów. Deklaracja i definicja wyglądają następująco:
 
  <img width="516" height="94" alt="image" src="https://github.com/user-attachments/assets/960bc5b9-1425-45a7-adac-1b18f1d819ff" />


* typ_zwracany – określa, jakiego typu dane funkcja oddaje po zakończeniu pracy (np. int, double, bool, string). Jeśli funkcja nic nie zwraca (tylko np. wypisuje tekst na ekran), używamy słowa kluczowego void.
* nazwa_funkcji – identyfikator, po którym będziemy ją wywoływać (np. obliczPole, pobierzDane).
* parametry (argumenty) – zmienne, które przekazujemy do funkcji jako dane wejściowe. Może ich nie być wcale, może być ich kilka.
* return – instrukcja kończąca działanie funkcji. W przypadku funkcji zwracającej typ (np. int), instrukcja return musi zwrócić wartość zgodną z tym typem.


**Przykłady użycia**
* **Funkcja niezwracająca wartości (void)** - funkcja typu void wykonuje zadanie, ale nie oddaje żadnej wartości do miejsca, z którego została wywołana.
  
  <img width="430" height="365" alt="image" src="https://github.com/user-attachments/assets/a69021b9-211e-404b-8329-b98d4c61aa3d" />

* **Funkcja przyjmująca parametry** - funkcji możemy przekazać dane wejściowe, na których ma operować.

  <img width="621" height="304" alt="image" src="https://github.com/user-attachments/assets/4812b2b4-ef07-4688-8141-c02cf2a77625" />

* **Funkcja zwracająca wartość** -  Najczęściej chcemy, aby funkcja wykonała obliczenia i oddała nam wynik, który potem przypiszemy do zmiennej lub wykorzystamy w dalszej logice.

<img width="962" height="632" alt="image" src="https://github.com/user-attachments/assets/f0f4d524-2b3c-4ade-ba7c-1b36fc22e0ea" />


**W C++ zasięg zmiennej (scope) określa, w którym miejscu w kodzie dana zmienna jest widoczna i możliwa do użycia. Wyróżniamy dwa podstawowe rodzaje zmiennych:**

**Zmienne globalne**
* Są to zmienne zadeklarowane poza jakimikolwiek funkcjami, najczęściej na samej górze pliku z kodem. Ich główną cechą jest to, że każda funkcja w programie ma do nich bezpośredni dostęp – może odczytywać ich wartość oraz dowolnie ją modyfikować. Ich cykl życia w pamięci trwa przez cały czas działania programu, od jego uruchomienia aż do zakończenia. Choć początkującym wydają się bardzo wygodne, w dobrej praktyce programistycznej stanowczo unika się ich stosowania. Współdzielenie stanu przez cały program sprawia, że przy wystąpieniu błędu niezwykle trudno zlokalizować fragment kodu, który nieoczekiwanie zmienił wartość naszej zmiennej.
  
**Zmienne lokalne**
* To zmienne powołane do życia wewnątrz konkretnej funkcji lub dowolnego bloku kodu ograniczonego nawiasami klamrowymi {}. Zmienna lokalna istnieje w pamięci tylko i wyłącznie przez czas wykonywania danej funkcji – gdy funkcja kończy swoje działanie, zmienna jest natychmiast i bezpowrotnie z niej usuwana. Zmienne lokalne są całkowicie niewidoczne dla innych funkcji. To preferowany i najbezpieczniejszy sposób pracy z danymi, ponieważ czyni kod hermetycznym, ułatwia szukanie błędów i chroni nas przed przypadkowym nadpisaniem wartości przez inne moduły programu.

**Przykład**

  <img width="708" height="401" alt="image" src="https://github.com/user-attachments/assets/fb0d8cc2-70b4-48d2-8301-1909940235ab" />


**Przesłanianie zmiennych (Shadowing)**
* Zjawisko przesłaniania występuje wtedy, gdy wewnątrz zagnieżdżonego bloku kodu (np. w funkcji, instrukcji warunkowej czy pętli) utworzymy nową zmienną o dokładnie takiej samej nazwie, jaką nosi już istniejąca zmienna w szerszym zasięgu (np. zmienna globalna). W takiej sytuacji kompilator C++ zawsze daje pierwszeństwo zmiennej „najbliższej” (najbardziej lokalnej). Nowa zmienna przykrywa (przesłania) tę starszą. Jakakolwiek operacja na tej nazwie zmodyfikuje tylko zmienną lokalną, pozostawiając zewnętrzną zmienną w stanie nienaruszonym. Warto pamiętać, że jeśli przesłonimy zmienną globalną, nadal możemy się do niej dostać, używając operatora globalnego zasięgu ::.

**Cykl życia zmiennych w pamięci**

* Cykl życia zmiennej to czas, w którym fizycznie zajmuje ona miejsce w pamięci operacyjnej komputera. W przypadku zmiennych lokalnych cykl ten jest ściśle dyktowany przez nawiasy klamrowe {}. Zmienna lokalna „rodzi się” (otrzymuje przydział pamięci) w momencie, gdy program natrafia na jej deklarację. Jej życie kończy się natomiast natychmiast po dotarciu do klamry zamykającej } danego bloku kodu. Wtedy pamięć jest automatycznie zwalniana i zwracana systemowi. Dzięki takiemu mechanizmowi program przechowuje w pamięci tylko te zmienne, które są mu w danej chwili potrzebne, co optymalizuje jego działanie.

<img width="818" height="570" alt="image" src="https://github.com/user-attachments/assets/16fcaca4-659c-4218-8650-93f53a9bad39" />



**Parametry funkcji: Przekazywanie argumentów przez referencję (&)**

* Domyślnie w języku C++ wszystkie argumenty przekazywane do funkcji są przesyłane przez wartość. Oznacza to, że funkcja w momencie wywołania tworzy sobie całkowicie nową kopię danych. Jakiekolwiek operacje czy modyfikacje wykonane na tej kopii wewnątrz funkcji nie mają żadnego wpływu na oryginalną zmienną. Aby funkcja mogła operować na rzeczywistych danych, musimy udostępnić jej oryginał – do tego właśnie służy przekazywanie argumentów przez referencję.
* Do przekazywania argumentów w ten sposób używamy operatora & (ampersandu), który dopisujemy w sygnaturze funkcji tuż przy typie parametru (np. int& liczba). Referencja to w uproszczeniu "alias" lub "drugie imię" dla istniejącej już zmiennej. Kiedy przekazujemy zmienną przez referencję, funkcja nie tworzy nowej szufladki w pamięci, lecz otrzymuje bezpośredni dostęp do miejsca (adresu), w którym leży oryginał.

Zalety tego rozwiązania:

* Zyskujemy możliwość trwałej modyfikacji zmiennych wejściowych (zmiany dokonane w funkcji zostają w pamięci po jej zakończeniu).
* Oszczędzamy pamięć i czas procesora. Przy prostych liczbach nie ma to wielkiego znaczenia, ale jeśli przekazujemy do funkcji ogromny tekst (string) lub duży zbiór danych, kopiowanie całości byłoby bardzo nieoptymalne.

  <img width="758" height="530" alt="image" src="https://github.com/user-attachments/assets/ccd64cdd-b8be-4ca3-9ed1-ed6932744402" />
