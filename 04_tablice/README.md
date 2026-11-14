Tablica jednowymiarowa to zbiór elementów tego samego typu, przechowywanych w pamięci pod jedną wspólną nazwą.
* Indeksowanie: Każdy element ma swój unikalny numer (indeks).
* Składnia: typ_danych nazwa_tablicy[rozmiar];
* UWAGA! Tablice liczymy od zera. Przykład jeśli tablica ma 5 elementów to indeksami są: 0,1,2,3,4 
<img width="1820" height="312" alt="image" src="https://github.com/user-attachments/assets/1bb3e4a3-8ced-47d3-8593-46f0c13b5630" />

**Poruszanie się po tablicy jednowymiarowej realizujemy za pomocą pętli FOR**
<img width="1352" height="879" alt="image" src="https://github.com/user-attachments/assets/d98b0a15-96ac-4db8-a9e8-5a2d27adbc02" />



**Tablica dwuwymiarowa**
* Tablica dwuwymiarowa to inaczej tabela, siatka, szachownica lub macierz. Składa się z wierszy (poziom) i kolumn (pion)
* typ_danych nazwa[liczba_wierszy][liczba_kolumn];

<img width="1483" height="599" alt="image" src="https://github.com/user-attachments/assets/43ae2078-2904-4087-98c4-0a94de8bcb43" />

**Poruszanie się po macierzy dwuwymiarowej realizowane jest za pomocą 2-óch pętli FOR**
* Aby odwiedzić każdy element w tabeli, potrzebujemy dwóch pętli – jednej wewnątrz drugiej (pętle zagnieżdżone).
* Zewnętrzna pętla (często zmienna i) odpowiada za zmianę wiersza.
* Wewnętrzna pętla (często zmienna j) przechodzi przez wszystkie kolumny w danym wierszu.

<img width="1538" height="927" alt="image" src="https://github.com/user-attachments/assets/18e578ad-7892-4a06-89b1-297ddf9ebc28" />
