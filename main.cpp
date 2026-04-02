#include <iostream>
#include "Benchmark.h"

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n=======================================\n";
        cout << "       SORTING ALGORITHM BENCHMARK       \n";
        cout << "=======================================\n";
        cout << " 1. Test Bubble Sort\n";
        cout << " 2. Test Selection Sort\n";
        cout << " 3. Test Insertion Sort\n";
        cout << " 4. Test Merge Sort\n";
        cout << " 5. Test Quick Sort\n";      // [!] Am adaugat Quick Sort aici
        cout << " 6. Test ALL Algorithms\n";  // [!] Am mutat Test ALL pe 6
        cout << " 0. Exit Program\n";
        cout << "---------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nRunning Bubble Sort benchmarks...\n";
                runBenchmarks(choice);
                break;
            case 2:
                cout << "\nRunning Selection Sort benchmarks...\n";
                runBenchmarks(choice);
                break;
            case 3:
                cout << "\nRunning Insertion Sort benchmarks...\n";
                runBenchmarks(choice);
                break;
            case 4:
                cout << "\nRunning Merge Sort benchmarks...\n";
                runBenchmarks(choice);
                break;
            case 5:
                // [!] Noul caz pentru Quick Sort
                cout << "\nRunning Quick Sort benchmarks...\n";
                runBenchmarks(choice);
                break;
            case 6:
                // [!] Cazul mutat pentru toate testele
                cout << "\nRunning ALL algorithm benchmarks. This may take a moment...\n";
                runBenchmarks(choice);
                break;
            case 0:
                cout << "\nExiting benchmark tool. Goodbye!\n";
                break;
            default:
                // [!] Am actualizat mesajul de eroare la 0 - 6
                cout << "\nInvalid choice. Please enter a number between 0 and 6.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}