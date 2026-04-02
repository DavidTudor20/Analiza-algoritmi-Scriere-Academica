Acest proiect este o aplicație de performanță care compară 5 algoritmi clasici de sortare pe diverse seturi de date. Scopul este de a demonstra diferența de eficiență între complexitățile $O(n^2)$ și $O(n \log n)$.

Algoritmi Implementați 
-
- Bubble Sort ($O(n^2)$)
- Selection Sort ($O(n^2)$)
- Insertion Sort ($O(n^2)$
- Merge Sort ($O(n \log n)$)
- Quick Sort ($O(n \log n)$)

**Structura Proiectului**
Codul este organizat modular pentru a fi ușor de întreținut:
-
- main.cpp: Interfața cu utilizatorul și meniul principal.
- Algorithm.h: Implementările algoritmilor de sortare.
- Generators.h: Logica pentru generarea datelor (Random, Sorted, Reverse, Almost Sorted, Flat).
- Benchmark.h: Motorul de testare care măsoară timpul și exportă datele în format .csv

  ### 📊 Rezultate Benchmark (Mărime: 10.000 elemente)

Toate valorile sunt exprimate în **milisecunde (ms)**.

| Distribuție | Bubble Sort | Selection Sort | Insertion Sort | Merge Sort | Quick Sort |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Random** | 657,44 | 188,59 | 213,15 | 3,57 | 1,89 |
| **Sorted** | 0,03 | 188,06 | 0,08 | 1,90 | 0,56 |
| **Reverse** | 749,53 | 273,96 | 544,90 | 1,90 | 0,33 |
| **Almost Sorted** | 334,76 | 262,14 | 36,69 | 1,90 | 1,90 |
| **Flat** | 514,31 | 253,69 | 181,93 | 1,90 | 47,39 |

![Analiza Performantei Algoritmilor](tabel.png)
