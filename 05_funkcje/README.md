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
